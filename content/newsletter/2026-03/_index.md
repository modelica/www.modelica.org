---
title: Newsletter 2026-03
---

{{<rawhtml>}}
<div class="col-lg-8 mx-auto text-center mb-5">
    <div class="ma-logo modelica-association-logo" style="height: 150px; width: 300px; margin: auto"></div>
</div>
{{</rawhtml>}}

# Modelica Association Newsletter 2026-03

issued on <!-- TODO: issue date -->

{{<toc>}}

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-regular fa-envelope" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Letter from the Board

<!-- TODO: Letter from the Board -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-building-columns" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Modelica Association

<!-- TODO: news from the Modelica Association and its projects (FMI, SSP, DCP, eFMI, ...) -->

<!-- END Modelica Association -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-users" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Conferences and user meetings

<!-- TODO: Conferences and user meetings -->

<!-- END Conferences and user meetings -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-industry" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Vendor news

<!-- TODO: Vendor news -->

### MLQT 2026.6: Modelica Library Quality Toolkit, now on Linux, in CI and for AI agents

MLQT, the open-source Modelica Library Quality Toolkit project, released version 2026.6 in November 2026. It is the fourth release since July, and the result of a determined push to extend the projects capabilities.

MLQT started as a Modelica-aware Git and SVN client, it is still that plus a command line tool for your CI builds and an MCP server for your agents. It sits between your Modelica editor, or agent, and the repository, formatting files consistently so commits hold only real changes. Its parser also drives style checking, static analysis, impact analysis and tracking of external resources.

#### What is new since July

**A quality gate for CI.** The new `mlqt` command runs the desktop app's checks headless. A baseline records a library's existing findings as accepted debt, and later checks report only what is new, so a library can never get worse. Reports come in SARIF, JUnit, TeamCity, markdown and GitHub pull-request formats, and a pre-commit hook is included. Rules can be suppressed in the source with an `__MLQT` annotation.

**Static analysis without false alarms.** One set of analyses needs only the library's own source: unused classes and imports, shadowed declarations, `uses` annotations and `package.order` consistency. New in 2026.6, a second set follows references across libraries. It finds missing resources, dependency cycles, broken `modelica://` links, incompatible `connect` equations and uses of obsolete classes. These report only what MLQT can actually resolve, and they ship switched off so upgrading changes nobody's results.

**Linux.** MLQT now runs on Ubuntu and Debian as well as Windows, after moving its desktop host from .NET MAUI to Photino. One installer per platform carries the app, the CLI and the MCP server.

**Faster, clearer reviews.** A check of a large library fell from almost seven minutes to about one, with identical findings. Code Review shows your own file with findings on the lines you see. Changed models are marked as either simulation-affecting or graphical/documentation-only.

**An MCP server for AI agents.** MLQT includes a Model Context Protocol server through which an agent can read, write, refactor, check and format Modelica. Every write is parse-checked, and renames update every reference. In 2026.6 it went from 66 tools to 16 after testing showed agents bypassing most of them. Its compact views return a class's interface in a few hundred tokens, where reading the file could cost thousands.

#### What comes next

MLQT stays focused on style and static analysis, with no translation or simulation. Next come custom rules a team can write for its own guidelines, followed by a check of unit and dimensional consistency in equations.

Installers for Windows and Linux are on the [releases page](https://github.com/mdempse1/MLQT/releases), with documentation alongside. MLQT is MIT-licensed, and feedback and contributions are welcome on [GitHub](https://github.com/mdempse1/MLQT).

*This article is provided by Mike Dempsey ([M Dempsey Ltd](https://dempsey.me.uk/))*

<!-- END Vendor news -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-book" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## News from libraries

<!-- TODO: News from libraries -->

<!-- END News from libraries -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-graduation-cap" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Education news

<!-- TODO: Education news -->

<!-- END Education news -->
