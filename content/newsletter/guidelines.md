---
---

# Submission guidelines for the Newsletter

## Scope

Everyone is welcome to contribute a post to the Modelica newsletter, however the editor holds the right to decline a contribution without reason.
The scope of the newsletter includes all topics covered by the [Modelica Association](https://www.modelica.org) (Modelica language, libraries, FMI, SSP, DCP), related tools, and news in education (courses, books and related materials).
If you have an item of interest that you would like to share with the Modelica community, for example:

- a brief note on a Modelica and FMI related project,
- information about Modelica and FMI related libraries, tools or services (technical details only, no marketing or advertising content), or
- upcoming Modelica and FMI related events.

Please consider submitting a brief write-up about it to the Modelica Newsletter. If you want to get reminded ahead of the forthcoming issue, [register as a contributor](https://modelica.us12.list-manage.com/subscribe?u=0be901f875b69817eddd7e71b&id=0cb2cf5b72).

Submission guidelines are as follows (exceptions are possible in justified cases):

- **relevance** -- Of course, the material must be of interest to the general Modelica community.
But in addition, part of being relevant is being timely.
So articles should contain information that can impact the present and future options for readers and not simply contain historical information.

- **novelty** -- This is a newsletter.
As such, what is contained in it must be new.
It is unacceptable for an article to repeat content from previous articles.
If you feel that background information is required, provide it via a hyperlink to information stored elsewhere.
For example, don't list the features of your tool and/or library with every article about it.
Instead, include a hyperlink, e.g. "In addition to existing features, version X.Y.Z includes the following new features..."

- **tone** -- Articles are expected to be of a mostly factual nature and avoid hyperbole and excessive marketing and advertising content.
One post per product: Individual new features to a product should not be divided to another article. If the features require further description, then there shall be provided links to further information.

- **length** -- Approximately 3-4 paragraphs.
Please try to squish only the most important information into no more than 200 words.
Additional information should be linked to another page.

- **additional materials** -- Additional materials (i.e., extensive product description, leaflet, additional images etc.) could be uploaded as well to prevent dead links in the future.
It is possible (and perfectly easy) to host the linked page within the newsletter repository, however it would not be listed among the posts (only linked from the article).

- **images** -- One image no larger than 620x400 px is preferred, please upload the image alongside with your post - external images tend to break after while.
It is the submitters responsibility to resize the image to meet these guidelines.

- **format** -- clean Markdown (see below):
  - no style attributes, HTML tags are to be avoided, when possible
  - no spacing or layout directives

## Process

The submission is done by creating a pull request to the [Modelica website repository](https://github.com/modelica/www.modelica.org/).

0. Create a GitHub account, log in.
1. Navigate to the upcoming newsletter `_index.md`, e.g. https://github.com/modelica/www.modelica.org/blob/main/content/newsletter/2026-01/_index.md.
2. Click on the pen icon to edit the file.
3. Find the section that matches your contribution (see [Newsletter sections](#newsletter-sections) below) and paste your post **directly above the `<!-- END ... -->` comment** that closes that section. Do not insert your post anywhere else in the file — this convention is important for keeping pull requests conflict-free (see note below).
4. Commit your changes.
   * Note that no changes have been made to the [Modelica website repository](https://github.com/modelica/www.modelica.org/) itself.
     Instead, GitHub created your own copy (*a fork*) of the repository with your changes.
   * If you already have this repository forked, you may create a new branch from the original repository.
   * If you want to modify your contribution or add a local image, you have to navigate to this branch of your fork (e.g. `patch-1`) and make the desired changes or upload an image. You can then create a pull request. This would issue a request to merge your whole branch — that is, all changes you have made — to the original repository.
5. Create a pull request.
   * Please leave *Allow the maintainers to edit...* checked, so we can fix any potential issues for you.
6. Submit the pull request -- all done.

> **Note on conflicts:** Because all contributions edit the same file, pull requests submitted around the same time may conflict with each other. To minimise this, always insert your post immediately before the `<!-- END ... -->` marker of your section and do not touch any other part of the file. With this convention, only two contributors writing to the *same section at the same time* will ever conflict, and those conflicts are automatically resolved by the editor's merge tooling.

Please note that all your contributions are public from the beginning for anyone who knows the (public) repository. If you insist on having the contribution private prior to the release, please [let me know](mailto:filip.jezek@creativeconnections.cz).

[Subscribe to the Newsletter Contributors mailing list](http://eepurl.com/dpvIVP), so we would let you know, when the next newsletter is being prepared.

### Newsletter sections

The `_index.md` file is pre-structured with the following sections. Paste your post in the matching one:

- **Modelica Association** — news from the Modelica Association and its projects (FMI, SSP, DCP, eFMI, …)
- **Conferences and user meetings** — upcoming or recent events, workshops, and conferences
- **Vendor news** — new versions of Modelica tools and commercial products
- **News from libraries** — new or updated open-source Modelica libraries
- **Education news** — courses, books, tutorials, and other educational resources

## Preview your contribution

Before submitting, you can see exactly how your post will look on the live website by running a local preview. No special technical knowledge is required beyond having a terminal open.

1. **Install Hugo** — download the *extended* version from [gohugo.io](https://gohugo.io/getting-started/installing/). Hugo is a single executable, no installer needed.
2. **Get the repository** — if you haven't already, clone it (one-time setup):
   ```
   git clone --recurse-submodules https://github.com/modelica/www.modelica.org.git
   cd www.modelica.org
   ```
3. **Start the preview server:**
   ```
   hugo serve
   ```
4. **Open your browser** at [http://localhost:1313](http://localhost:1313/) and navigate to the newsletter issue you are editing. The preview updates live as you save changes to the file — no need to restart.

## Markdown syntax

For the text body, use the [GitHub Flavored Markdown](https://github.github.com/gfm/) flavor of the Markdown syntax.
See the [cheat sheet](https://github.com/adam-p/markdown-here/wiki/markdown-cheatsheet) for an overview.

### Paragraphs

Simple line break
in the source would not create separate paragraphs. Please use empty line between intended paragraphs instead. When a hard line-break is required, you may use four spaces `    ` at the end of the line.

    First paragraph

    Second paragraph    
    with hard break - note the four spaces at the end of the upper line

### Text style and hyperlinks

You can use **emphasize** by double asterisks (`**emphasize**`) or *italics* using single asterisks (`*italics*`).

It is easy to create [hyperlinks](https://en.wikipedia.org/wiki/Hyperlink) (as `[hyperlinks](https://en.wikipedia.org/wiki/Hyperlink)`). Caution, not-tagged links are not generated, e.g. https://modelica.org/ will stay exactly as written (even though the GitHub's *Preview changes* shows them as links)

### Images

Each post is welcome to have one image. For a single image, please keep the image size 620x400px or below. When using multiple images, please try to occupy as low vertical space as possible. If required, you can link to the full size image.

If you commit the image together with your post, you can link it relatively, i.e.

    ![Alt text](My-Company-logo.jpg 'Title text')

The alt and title text could be omitted. Please keep in mind, that the folder is shared for the whole issue and name the images specifically to your post to avoid collisions with contributions of others.
E.g. if you post name is `new-version-of-FMI` use `new-version-of-FMI-logo.png` instead of just `logo.png` to avoid conflicts.
    
### Headings

Please use **3rd level heading** for title of your post.
Use **4th level heading** for any headings within your posts, e.g.

    ### Announcing new WorldPeace Modelica library

    Lorem ipsum...

    #### Compatibility issues

    Dolor sit amet...

    #### New features in detail

    More content...

## Example

The following shows a real contribution as it appeared in the [2025-03 newsletter](https://modelica.org/newsletter/2025-03/) and how the same post would be written for the new system.

### Old format (separate file, now replaced)

In the previous system each contribution was a standalone Markdown file with a header block:

    ---
    title: "orchideo | easySSP v1.4.4 now available"
    author: "Gregor Hermann, Peter Lobner ([eXXcellent solutions](https://www.exxcellent.de/))"
    category: "vendor"
    ---

    ![easySSP 1.4.4](easySSP1_4_4.png)

    The new **easySSP version 1.4.4** introduces major new capabilities. With the **new Workflow Editor**,
    you can now create and maintain workflows directly in easySSP, making it easier to turn modeling
    know-how into guided, repeatable steps.

    You can now **connect your preferred AI agent directly to easySSP** and use it as a **smart
    co-pilot for your SSP projects** based on the open MCP protocol. Watch the AI explain it in
    [this intro video](https://youtu.be/DhYMCHCsvJQ).

    **easySSP** is based entirely on open standards like **SSP**, **FMI**, and **SSP Traceability**.
    Learn more at [easy-ssp.com](https://easy-ssp.com).

### New format (section in `_index.md`)

The same post is now a section within the shared `_index.md` file. Paste it directly above the `<!-- END Vendor news -->` marker:

    ### orchideo | easySSP v1.4.4 now available

    ![easySSP 1.4.4](easySSP1_4_4.png)

    The new **easySSP version 1.4.4** introduces major new capabilities. With the **new Workflow Editor**,
    you can now create and maintain workflows directly in easySSP, making it easier to turn modeling
    know-how into guided, repeatable steps.

    You can now **connect your preferred AI agent directly to easySSP** and use it as a **smart
    co-pilot for your SSP projects** based on the open MCP protocol. Watch the AI explain it in
    [this intro video](https://youtu.be/DhYMCHCsvJQ).

    **easySSP** is based entirely on open standards like **SSP**, **FMI**, and **SSP Traceability**.
    Learn more at [easy-ssp.com](https://easy-ssp.com).

    *This article is provided by Gregor Hermann and Peter Lobner ([eXXcellent solutions](https://www.exxcellent.de/))*

    <!-- END Vendor news -->

The key differences from the old format: no header block is needed, the author attribution moves to an italicised line at the end of the post, and the `<!-- END Vendor news -->` marker (which was already in the file) stays directly after your post.

## Example output

This code would yield the result in GitHub preview similar to this:

### orchideo | easySSP v1.4.4 now available

![easySSP 1.4.4](../2025-03/easySSP1_4_4.png)

The new **easySSP version 1.4.4** introduces major new capabilities. With the **new Workflow Editor**,
you can now create and maintain workflows directly in easySSP, making it easier to turn modeling
know-how into guided, repeatable steps.

You can now **connect your preferred AI agent directly to easySSP** and use it as a **smart
co-pilot for your SSP projects** based on the open MCP protocol. Watch the AI explain it in
[this intro video](https://youtu.be/DhYMCHCsvJQ).

**easySSP** is based entirely on open standards like **SSP**, **FMI**, and **SSP Traceability**.
Learn more at [easy-ssp.com](https://easy-ssp.com).

*This article is provided by Gregor Hermann, Peter Lobner ([eXXcellent solutions](https://www.exxcellent.de/))*
