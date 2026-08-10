#!/usr/bin/env python3
"""
merge_newsletter_prs.py

Merges all open pull requests that touch a given newsletter issue folder,
oldest-first. When two PRs produce a merge conflict in the issue page (which
happens when both appended content to the same section), the conflict is
auto-resolved by keeping ALL content from both sides — i.e. every post
ends up in the file and the editor only needs to reorder posts if desired.

Environment variables (set by the GitHub Actions workflow):
  GITHUB_TOKEN  – GitHub token with contents: write and pull-requests: write
  REPO          – owner/repo string, e.g. "modelica/www.modelica.org"
  ISSUE         – newsletter issue folder, e.g. "2026-01"
"""

import os
import re
import subprocess
import sys
from github import Github

# ── helpers ──────────────────────────────────────────────────────────────────

def run(cmd, check=True, capture=False):
    """
    Run a command given as an argument list, optionally capturing output.

    No shell is used: PR titles are contributor-supplied and end up in commit
    messages, so they must never be parsed as shell syntax.
    """
    result = subprocess.run(
        cmd, text=True,
        capture_output=capture,
    )
    if check and result.returncode != 0:
        print(f"ERROR running: {' '.join(cmd)}")
        print(result.stderr)
        sys.exit(1)
    return result


def find_index_file(folder):
    """
    Return the path of the issue's page file.

    Issues are branch bundles (`_index.md`), but an issue has been created as a
    leaf bundle (`index.md`) before — which used to make every conflict look
    like a conflict in an unexpected file, so every PR got skipped. Detect
    whichever is present instead of assuming.
    """
    for name in ("_index.md", "index.md"):
        candidate = os.path.join(folder, name)
        if os.path.exists(candidate):
            return candidate.replace(os.sep, "/")
    print(f"ERROR: no _index.md or index.md found in {folder}")
    sys.exit(1)


def resolve_conflicts(filepath):
    """
    Auto-resolve git conflict markers in *filepath* by keeping ALL content
    from both sides of every conflict.

    Git conflict blocks look like:
        <<<<<<< HEAD
        ...our changes...
        =======
        ...their changes...
        >>>>>>> branch-name

    Strategy: drop the markers, keep both bodies.
    This is always correct for the newsletter use-case: two contributors
    both appended a post to the same section, and we want to keep both posts.
    The order within the section may need a manual editorial pass afterwards.
    """
    with open(filepath, encoding="utf-8") as fh:
        text = fh.read()

    if "<<<<<<<" not in text:
        return False  # no conflicts

    # Remove conflict markers, keep all content from both sides
    # Pattern: <<<<<<< …\n  (ours) \n =======\n  (theirs) \n >>>>>>> …\n
    pattern = re.compile(
        r"^<<<<<<< [^\n]+\n"   # opening marker
        r"(.*?)"               # our content  (group 1)
        r"^=======\n"          # separator
        r"(.*?)"               # their content (group 2)
        r"^>>>>>>> [^\n]+\n",  # closing marker
        re.MULTILINE | re.DOTALL,
    )

    def keep_both(m):
        return m.group(1) + m.group(2)

    resolved = pattern.sub(keep_both, text)

    with open(filepath, "w", encoding="utf-8") as fh:
        fh.write(resolved)

    return True


# ── main ─────────────────────────────────────────────────────────────────────

def main():
    token = os.environ["GITHUB_TOKEN"]
    repo_name = os.environ["REPO"]
    issue = os.environ["ISSUE"]
    newsletter_path = f"content/newsletter/{issue}/"
    index_file      = find_index_file(newsletter_path)

    gh   = Github(token)
    repo = gh.get_repo(repo_name)

    # Collect open PRs that touch the target newsletter folder
    open_prs = []
    for pr in repo.get_pulls(state="open", sort="created", direction="asc"):
        files = [f.filename for f in pr.get_files()]
        if any(f.startswith(newsletter_path) for f in files):
            open_prs.append(pr)

    if not open_prs:
        print(f"No open PRs found that touch {newsletter_path}")
        return

    print(f"Found {len(open_prs)} PR(s) to merge for issue {issue}:")
    for pr in open_prs:
        print(f"  #{pr.number} – {pr.title} (by {pr.user.login}, {pr.created_at:%Y-%m-%d})")

    results = []

    for pr in open_prs:
        pr_label = f'PR #{pr.number} "{pr.title}"'

        print(f"\n── Merging {pr_label} ──")

        # Fetch the contributor's branch
        run(["git", "fetch", "origin",
             f"refs/pull/{pr.number}/head:pr-{pr.number}"])

        # Attempt merge
        merge = run(
            ["git", "merge", "--no-ff", f"pr-{pr.number}",
             "-m", f"Merge {pr_label} into newsletter {issue}"],
            check=False,
        )

        if merge.returncode == 0:
            print(f"  ✓ Merged cleanly.")
            results.append((pr.number, pr.title, "merged"))
        else:
            # Check which files are in conflict
            conflict_check = run(["git", "diff", "--name-only", "--diff-filter=U"],
                                 capture=True)
            conflicted = conflict_check.stdout.strip().splitlines()

            non_index_conflicts = [f for f in conflicted if f != index_file]
            if non_index_conflicts:
                print(f"  ✗ Conflict in unexpected file(s): {non_index_conflicts}")
                print(f"    Aborting merge — manual resolution required.")
                run(["git", "merge", "--abort"])
                results.append((pr.number, pr.title, f"SKIPPED – conflict in {non_index_conflicts}"))
                continue

            # Only the issue page is conflicted — auto-resolve by keeping both sides
            print(f"  ⚠ Conflict in {index_file} — auto-resolving (keeping both posts)…")
            had_conflict = resolve_conflicts(index_file)

            if had_conflict:
                run(["git", "add", index_file])
                run(["git", "commit", "-m",
                     f"Auto-resolve conflict: keep both posts from {pr_label}"])
                print(f"  ✓ Resolved and committed.")
                results.append((pr.number, pr.title, "merged (auto-resolved conflict)"))
            else:
                # Shouldn't happen, but abort to be safe
                print(f"  ✗ Unexpected state — no conflict markers found after failed merge.")
                run(["git", "merge", "--abort"])
                results.append((pr.number, pr.title, "SKIPPED – unexpected conflict state"))

        # Clean up the temporary local branch
        run(["git", "branch", "-d", f"pr-{pr.number}"], check=False)

    # ── Summary ──────────────────────────────────────────────────────────────
    print("\n══ Summary ══")
    for number, title, status in results:
        icon = "✓" if "merged" in status else "✗"
        print(f'  {icon} #{number} "{title}" → {status}')

    skipped = [r for r in results if "SKIPPED" in r[2]]
    if skipped:
        print(f"\n{len(skipped)} PR(s) require manual attention.")
        sys.exit(1)
    else:
        print(f"\nAll {len(results)} PR(s) merged successfully.")
        print(f"You may now reorder posts within sections in {index_file} if desired.")


if __name__ == "__main__":
    main()
