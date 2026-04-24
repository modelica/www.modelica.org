---
title: Newsletter 2026-01
---

{{<rawhtml>}}
<div class="col-lg-8 mx-auto text-center mb-5">
    <div class="ma-logo modelica-association-logo" style="height: 150px; width: 300px; margin: auto"></div>
</div>
{{</rawhtml>}}

# Modelica Association Newsletter 2026-01

issued on March 5, 2026

{{<toc>}}

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-regular fa-envelope" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Letter from the Board

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-building-columns" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Modelica Association

### FMI Project News

<img src="FMI-logo.png" width="50%">

#### FMI Project Leader and Deputy re-elected

On March 17, 2026 the FMI Steering Committee has unanimously re-elected Christian Bertsch, BOSCH Research, as the project leader and Torsten Sommer, Dassault Systèmes, as the deputy for a two-years term.

<img src="Bertsch_Sommer.jpg" width="50%">

#### FMI Face-2-Face Design Meeting Munich June 8-10 2026

Dassault Systems will host the next in-person FMI Design meeting.
Please drop us a note to contact@fmi-stanard.org if you are interested in participating as a guest.

#### 280+ tools supporting FMI listed on the FMI tools page´!

The number of tools supporting the FMI Standard is still growing! Now we have more than 280 tools listed on https://fmi-standard.org/tools/ !

#### News on FMI Layered Standards

#####  Pre-Release of FMI Layered Standard References (FMI-LS-REF) v1.0.0-alpha.1

The FMI Project is happy to announce the alpha pre-release of the FMI Layered Standard References (FMI-LS-REF), which allows the inclusion of related files into an FMU.
Thanks to the FMI Project Team and especially to Pierre Mai (PMSF IT Consulting Pierre R. Mai) for the work!

This layered standard provides the capability to clearly designate the roles of additional related files included in an FMU in a structured way.
These files are described in the layered standard manifest file, which is part of the FMU archive. In this way, an FMU can be shipped together with related files that are helpful in understanding and correctly using the FMU in a recognizable way.
Note that this layered standard does not mandate the inclusion of any related files with an FMU. It only provides a structured way to describe such files, if they are included. The included related files can be of arbitrary types, as long as their roles are described in the layered standard manifest file. This layered standard can be used in addition to other layered standards, and allows the central description of related files included with the FMU, independently of their use in other layered standards.
Thus an implementation can treat the related files described in this layered standard in a uniform way, regardless of whether they are used in other layered standards or not, and regardless of whether the other layered standards are supported by the implementation or not.

This supports the following use cases, among others:

- Inclusion of requirements, specifications, model sources, and other related files that are helpful in understanding and correctly using the FMU in a recognizable way.
- The ability to provide multiple parameter sets with an FMU as part of the FMU archive.
- Inclusion of additional experiments that provide sufficient information to enable smoke test validation of an FMU in a new simulation environment.

Learn more [on the Release page on Github](https://github.com/modelica/fmi-ls-ref/releases/tag/v1.0.0-alpha.1).

##### Pre-Release of FMI Layered Standard for Network Communication (FMI-LS-BUS) v1.3.0-alpha.1 with LIN support available

The FMI Project is happy to announce that we have just published the 1.3.0-alpha.1 version of the FMI-LS-BUS standard, that version that finally adds the long-awaited LIN support. 
This version includes the common Physical Signal Abstraction, that fits for all bus types, and the Network Abstraction that currently supports CAN, CAN FD, CAN XL (from v1.0.0), FlexRay (from v1.1.0; currently in Beta state), Ethernet (from v1.2.0; currently in Alpha state) and LIN. 
Check out our roadmap to get more information about the expansion plans of the FMI-LS-BUS.  \
Learn more [on the Release page on Github](https://github.com/modelica/fmi-ls-bus/releases/tag/v1.3.0-alpha.1). \
Currently intensive cross-checking of FMI-LS-BUS v1.3.0-alpha.1 is going on with prototype implementations from different tool vendors with the working group of the FMI project.

##### FMI Layered Standard for Structures (FMI-LS-STRUCT)

For many use cases, the grouping of variables gives the user a better overview about the usage of variables. For certain groupings the importing tool might be able to provide a more user-friendly interface. FMUs might use maps/functions sampled on the vertices of a grid to calculate output values.
The values at these sampling points and even the locations of the sampling points might get exposed as parameter variables of the FMU to allow calibrations.
However, the FMI standard only defines n-dimensional array variable but doesn’t define any relation between these variables. This layered standard defines how to group variables to represent maps.

This layered standard uses terminals of the FMI 3.0 standard to represent structures like maps by grouping variables in terminals.
Terminals are used to group variables and already define means to connect its variables between FMUs. Such a connections could ensure that the same map values are used by different FMUs or allow one FMU to provide the map values to be used by other FMUs.

A pre-release v1.0-beta.1 of the MI Layered Standard for Structures (FMI-LS-STRUCT) will be coming soon! Stay tuned on https://github.com/modelica/fmi-ls-struct/.
Thanks to the FMI Project Team and especially to Klaus Schuch (AVL) for this work!

##### Differential Algebraic Equations (DAE): New working group founded. 

A new working group for support for Differential-Algebraic Equations (DAE) support (possibly as a layered standard) in FMI has been formed and is working actively. It is lead by Joel Andersson (FMIOPT) and Andreas Heuermann (Santa Barabara Research Institute).
A differential-algebraic system of equations (DAE) is a system of equations that either contains differential equations and algebraic equations, or is equivalent to such a system.

The motivations of DAE support in FMI is to

* Avoid the requirement of index reduction inside of FMUs: This may improve accuracy due to better drift handling.
* Avoid local nonlinear equation solvers inside of FMUs: This may improve accuracy and avoid problems with different local and global error tolerances.
* Preserve the sparseness of DAE systems which is lost for the corresponding reduced ODE systems: This may improve the performance by usage of the sparseness.
* Allow connections between constraint FMUs: Connecting reduced ODE FMUs may lead globally to a non-solvable (singular) system but not for unreduced DAE FMUs.

You can follow the development on Github https://github.com/modelica/fmi-ls-dae.

#### Asian and American Modelica _and FMI_ Conferences 2026

FMI will be a hot topic and the Asian and American Modelida & FMI Conferences, which is reflected by now having "FMI" in the conference title.
We see a lot of interest in FMI both in America and Asia, so this is a very attractive conference.
FMI Project Leader Christian Bertsch will be giving a keynote and a tutorial on FMI at the Asian Conference.

#### Other Resources for FMI

* Visit the [FMI tools page](https://fmi-standard.org/tools) listing 280+ tools supporting FMI!
* Join the [LinkedIn FMI community](https://www.linkedin.com/groups/7477473/) to get the latest news on FMI, FMI supporting tools and discussions within the user community.
* Report problems of the standard itself or suggestions for new features in form of issues or discussions on [fmi-standard.org](https://github.com/modelica/fmi-standard)

<!-- END Modelica Association -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-users" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Conferences and user meetings

<!-- END Conferences and user meetings -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-industry" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Vendor news
### Dymola Sustainable Supply Systems Library Update

![Screenshot of "ElectricityAndFuelPriceTracking"](./3DS_Susy110.png)

Dassault Systèmes is happy to announce an update to the [Sustainable Supply Systems library (SuSy)](https://blog.3ds.com/brands/catia/catia-dymola-from-concept-to-prototype-in-minutes-simplifying-hybrid-energy-system-modeling-with-the-sustainable-supply-systems-library/).  
Version 1.1.0 represents a substantial update and expansion of scope of the library.  
Key new features and changes include:

- Techno-economic assessments
  - CAPEX, OPEX, Levelized Cost of Energy for both components and systems
- Emission tracking per scope
  - Emissions split into scope 1 and scope 2 as per [The Greenhouse Gas Protocol](https://ghgprotocol.org/sites/default/files/standards/ghg-protocol-revised.pdf)
  - Electricity carbon intensity tracked at electrical ports
- Examples
  - Methanol cruise ship with methanol to hydrogen reformer
  - Green hydrogen production with electrolyzer
  - Green ammonia with ammonia plant component

This article is provided by Markus Andres ([Dassault Systemes Austria GmbH](https://www.3ds.com/))
### Siemens Digital Industries Software

#### Simcenter Amesim 2604 released
[Siemens Digital Industries Software](https://www.sw.siemens.com/) is pleased to announce the recent release of **Simcenter&nbsp;Amesim&nbsp;2604** as part of its [system simulation solutions](https://blogs.sw.siemens.com/simcenter/simcenter-systems-release-2604/). This release introduces key updates, notably:

* Major enhancements to the so-called **Battery Pack Assistant**, to further support electrification (modeling capabilities and workflow).
* Expanded **gas system simulation capabilities**, serving applications like pneumatic controls in industrial automation, compressors in HVAC systems, or specialized gas handling in extreme environments.

More detail can be found [here](https://blogs.sw.siemens.com/simcenter/simcenter-systems-release-2604/ ). Several changes have also been specifically applied to **exported&nbsp;FMUs**, in terms of <i>licensing policy</i> as well as <i>integration and collaboration capabilities</i>. These specific updates as described hereafter.  

![](amesim_banner_2604.png)

#### Export of full-featured standalone (license-free) FMUs

The previous restriction on the specific export option allowing to create license-free (standalone) FMUs for Windows or Linux standard platforms has been removed. 

Prior to release 2604, such FMUs were limited to models without a solver (model exchange) or those using only a fixed-step solver (co-simulation). Now, this highly requested licensing policy change brings several key benefits:
* **Avoided rework**: users can now avoid the need to rework models or tune third-party solvers, which is especially useful for Model-in-the-Loop (MiL) applications.
* **Reliable deployment**: deploy validated **Simcenter&nbsp;Amesim** models with their native solver embedded, ensuring repeatable results.
* **Standalone apps**: create and share standalone applications leveraging **Simcenter&nbsp;Amesim**'s modeling and solving capabilities.

This means even large, sophisticated models with their native &mdash;&nbsp;best-adapted&nbsp;&mdash; solver can be deployed as lightweight FMUs (a few megabytes) with no external dependencies, which greatly facilitates model reuse and collaboration with partners, suppliers, or other departments.

#### Unified FMU export for real-time

To address the challenge of exporting, validating, and deploying FMUs for real-time simulation while avoiding fragmented workflows and/or late issue discovery, **Simcenter&nbsp;Amesim&nbsp;2604** now adds binaries for standard platforms (Windows and Linux), in addition to the source code for the chosen real-time target, within the exported &ldquo;FMUs for real-time&rdquo;. The compilation of these binaries is similar to that of the real-time target's toolchain. The expected concrete benefits for users are:
* **Easier pre-checks** (on Windows or Linux) before sharing FMUs to real-time target users.
* **Built-in continuity, consistency and traceability** (same FMU used <i>offline</i> and <i>online</i>).
* **No need for any external compiler** for generating/compiling these FMUs. 
* **Flexible deployment**: offline tests possible on machines with no **Simcenter&nbsp;Amesim** license or installation.

Each of these FMUs can be seen as a **unified model container** now also usable for offline tests in any FMI compatible software. This feature avoids the need to export multiple FMUs and represents a step towards unification of FMI based and Simulink based model export workflows of real-time capable **Simcenter&nbsp;Amesim** models. 

#### Export of 3.0 FMUs with arrays to represent vectors

With **Simcenter&nbsp;Amesim&nbsp;2604**, exporting 3.0 FMUs now includes support for fixed-size arrays. This enhancement allows users to easily create arrays by simply connecting vectored signals directly to and/or from export interface blocks. Arrays are a cornerstone feature of FMI 3.0, offering significantly simpler and more usable model layouts by reducing the need for numerous individual connections. For instance, the automotive application example below demonstrates two **Simcenter&nbsp;Amesim** 3.0 FMUs co-simulated within [**Simcenter&nbsp;Twin&nbsp;Activate**](https://altair.com/twin-activate ). Here, arrays conveniently group the vehicle's wheel speeds and brake forces as vectors, streamlining the connections between the FMUs.

![](Amesim_FMU3_Arrays.gif)

For more information on **Simcenter&nbsp;Amesim**, please visit our [website](https://www.siemens.com/en-us/products/simcenter/systems-simulation/amesim/ ).

*This article is provided by Bruno Loyer ([Siemens Digital Industries Software](https://www.sw.siemens.com/ ))*

### Dymola Battery Library 2.9.0

![Module structure in Battery 2.9.0](3DS-BatteryLib.png)

Battery Library version 2.9.0 introduces two major functional extensions: **battery modules** and **failure modelling**.

The new **battery modules** allow independent discretization of thermal and electrical behavior. They enable aggregation of the electric models of multiple cells, reducing electrical model complexity while maintaining simulation accuracy. This flexibility allows model resolutions to be adapted to the analysis objective and improves computational performance in simulations of large battery packs.

The second feature is the introduction of **failure modelling**. The failure model is integrated into the cell model, enabling the simulation of failures on both cell and pack level. The Battery Library provides models for several failure mechanisms, including **thermal runaway** (three modelling approaches for onset and heat generation), **broken circuits** (interruption of current paths due to connector or tab failures) and **short circuits** (unintended low-resistance paths that lead to high currents and rapid heat generation).

*This article is provided by Nils Modrow ([Dassault Systèmes AB](https://www.3ds.com/))*

### Introducing MLQT: A Modern Desktop Tool for Managing Modelica Libraries

MLQT started from a familiar frustration: every time a Modelica tool saved a file, it would introduce a flurry of whitespace and formatting changes that cluttered commits, obscured the real edits in diffs, and made code review painful. The original goal was simple — put a layer between Modelica tools and the repository that applied consistent formatting to every `.mo` file before it was committed, so that Git and SVN diffs showed meaningful changes rather than stylistic churn. MLQT replaces your generic Git or SVN client with a Modelica-aware one: keep using whichever editor you prefer, and let MLQT sit between the editor and the repository, giving you a full VCS workflow — browse models, review pending changes, commit, pull updates, create and switch branches, merge, push — with the formatting noise filtered out.

From that starting point, MLQT grew into a broader set of tools for working with Modelica code. The same parser that powers the formatter also drives configurable style checking, dependency impact analysis, and external resource tracking. When you modify a model, MLQT can show you exactly which other models are affected, helping you catch issues before they reach your team. It also integrates with Dymola and OpenModelica for model checking, so you can validate changes against your simulation tools directly from the same interface. MLQT is an open source project using the MIT license.

**Key features and benefits:**

- **Integrated revision control** — Full Git and SVN support including commit, update, branch, merge, and history browsing
- **Modelica-aware code analysis** — Parses your code to understand model structure, dependencies, and relationships
- **Impact analysis** — Interactive dependency graphs show the ripple effects of changes across your library
- **Automatic code formatting** — Applies consistent formatting rules across your entire library on save
- **Configurable style checking** — Enforces team coding standards with customizable rules for naming, documentation, structure, and more
- **External resource tracking** — Monitors data files, C libraries, images, and other resources referenced by your models
- **Simulation tool integration** — Connect to Dymola and OpenModelica for model checking without switching applications

MLQT is available for Windows today, with a Linux version on the roadmap. To learn more, visit the open-source [repository on GitHub](https://github.com/mdempse1/MLQT).

![](mlqt-code-review-sm.png)

### Dymola Testing Library 2.0.0

![Package structure, toolbar and test visualization in Testing 2.0.0](3DS-Testing2.png)

The Testing library received a major update and is released as 2.0.0 with Dymola 2026x Refresh 1.
The target was to harmonize clocked and continuous tests, simplify the library usage and improve the
visuals of test reports and animated results.

Some of the important changes are:
- New package structure, making clocked blocks the official solution for recordings
- Updated toolbar with clean structure
- Graphical indication of overall result
- Updated format of test reports printed to command line
- New concept for test cases functions: now checks and be added free without dealing with vector indices
- Simpler handling of negative tests with new test results XFAIL and XPASS.
- Legacy package to run existing tests without changes when upgrading

Existing tests are almost fully compatible after running the provided conversion script.
See the release notes of the Testing library inside Dymola for the full list of changes and more details
regarding the upgrade of some corner cases.

*This article is provided by Marco Keßler ([Dassault Systèmes Austria GmbH](https://www.3ds.com/))*

<!-- END Vendor news -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-book" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## News from libraries

<!-- END News from libraries -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-graduation-cap" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Education news

---
### Dr. Clément Coïc | FMI 3.0 and FMPy cheat sheet

![Learn Modelica and FMI website logo](https://github.com/modelica/newsletter/blob/main/_2025-03/Newsletter_LearnModelica%26FMI.png)

Since mid-September, [Clément Coïc](https://www.linkedin.com/in/clementcoic/) launched a LinkedIn newsletter: [Learn Modelica & FMI](https://www.linkedin.com/newsletters/learn-modelica-fmi-7373084674463719424/).    
Since then, 27 articles have been written! Check them out on LinkedIn or on the [dedicated website](https://dr-clementcoic.github.io/LearnModelicaFMI/)!    

On top of these articles, a brand new and quite complete [cheat sheet for FMI 3.0 and FMPy](https://dr-clementcoic.github.io/fmi-cheat-sheet/) has been published, with [runnable examples](https://colab.research.google.com/github/Dr-ClementCoic/fmi-cheat-sheet/blob/feature/notebook/fmpy_cheatsheet_notebook.ipynb). Try them out!

While the newsletter is the perfect companion for your Saturday's morning cup of tea 🫖 or coffee ☕️, this cheat sheet - almost a cheat book! - should be bookmarked to help you in your daily FMI work.

Hope this helps,     
Clem

<!-- END Education news -->
