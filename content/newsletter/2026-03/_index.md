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

### OpenModelica 1.28.0 in Preparation

The next [OpenModelica](https://openmodelica.org/) release, 1.28.0, is in preparation. Its highlights:

* **OpenModelica in the web browser** with nothing to install: OMEdit (with an optional AI assistant), OMShell, OMNotebook, OMPlot and a simulator with 3D animation, all compiled to WebAssembly and run locally in the browser.
* **FMI 3.0 export and import**: OpenModelica exports FMI 3.0 FMUs for Model Exchange and Co-Simulation, and OpenModelica and OMSimulator import them.
* **Modelica 3.7** support in the frontend (`--std=3.7`), for example unitful literals and `nthRoot`.
* **OMEdit**: Figure and Plot annotations, an array parameter editor, dark mode, UML class diagrams and Modelica Language Server integration.
* **Simulation**: the solver is now chosen automatically by default (`-s=auto`), with CVODE replacing DASSL as its choice for most models, simulations free their memory through reference counting instead of a garbage collector, and the new backend supports resizable arrays.

OpenModelica developers take part in the FMI-LS-DAE and FMI-LS-WASM working groups, and 1.28.0 contains first prototypes of both layered standards. Models in DAE mode can be exported following the FMI-LS-DAE v1.0.0-alpha.1 draft, and OMSimulator can import them. FMUs can also be exported with a WebAssembly binary, optionally alongside native binaries for Linux, macOS and Windows, following the early FMI-LS-WASM draft, which is still being worked on and may change without notice.

You can try this now on the [OpenModelica web playground](https://playground.openmodelica.org/demo/). For example, open the [district heating example in DAE mode](https://playground.openmodelica.org/demo/simulator/index.html?id=districtheating), simulate it and export it as an FMU.

{{<rawhtml>}}
<p style="text-align:center"><img src="OpenModelica-web-FMU-export-dialog.png" alt="FMU export dialog of the OpenModelica web playground" width="35%"></p>
<p style="text-align:center"><em>FMU export dialog of the OpenModelica web playground with FMI-LS-DAE and FMI-LS-WASM export</em></p>
{{</rawhtml>}}

*This article is provided by Andreas Heuermann for the [OpenModelica](https://openmodelica.org/) project*

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
