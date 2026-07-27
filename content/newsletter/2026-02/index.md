---
title: Newsletter 2026-02
---

{{<rawhtml>}}
<div class="col-lg-8 mx-auto text-center mb-5">
    <div class="ma-logo modelica-association-logo" style="height: 150px; width: 300px; margin: auto"></div>
</div>
{{</rawhtml>}}

# Modelica Association Newsletter 2026-02

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

### FMI Project News

<!-- TODO: FMI project news -->

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

<!-- TODO: other vendor submissions -->

### Model Based Innovation (MBI) Updates

![MBI Logo](MBI-LLC.svg)

MBI is the only one-stop shop for solutions based on the Modelica Association standards based in the United States. In addition to tool and library sales,
we also provide services to help you set up your processes to successfully use model based design for innovative product development.

#### [Tool Updates](https://modelbased.cloud/tools/)

As a **[Modelon Impact](https://www.modelon.com/modelon-impact/) Reseller**, MBI has developed a custom **MCP (Model Context Protocol) integration** that streamlines Modelica simulation and automated analysis workflows — turning simulation runs and report generation into simple, agent-driven steps. Alongside this, we've built specialized **skills files** tailored for advanced Modelica workflows in optimization and controls development, so your team can get more out of every modeling session.

![Sobol sweep (dynamic) trajectories for inertia1.w in Modelica.Blocks.Examples.PID_Controller](SobolSweep-PID-inertia1w.png 'Sobol sweep (dynamic) — inertia1.w, Modelica.Blocks.Examples.PID_Controller (16 samples, 0.0–5.0 s)')

{{<rawhtml>}}
<p style="text-align:center"><em>Sobol-sweep for PID controller response for varying plant parameters, generated with Modelon Imapct MCP server</em></p>
{{</rawhtml>}}

#### [Libraries](https://modelbased.cloud/libraries/)

For Libraries, our main Modelica platform is Modelon Impact, but we work with other tools as well, especially for open-source libraries, and extending open-source libraries. MBI has adapted some open source libraries to fully work with Modelon Impact. For example, we have adapted the [Industrial Control Systems Library](https://github.com/hubertus65/IndustrialControlSystems) for Modelon Impact and provide support for it. Further libraries are in preparation.

#### [Services and Training](https://modelbased.cloud/services/)

<!-- TODO: add images -->

MBI offers **open enrollment Modelica courses** to help your team level up fast:

- **Modelica Basics** — build a solid foundation in acausal, equation-based modeling from day one.
- **Advanced Modelica** — sharpen your skills for tackling complex, multi-domain systems.
- **Modelica for Controls Development** — bridge system simulation and controls engineering with hands-on, practical techniques.
- **Agentic AI for Modelica Modeling and Simulation** — learn to accelerate your modeling workflow with curated skills files and purpose-built MCP integrations.

In collaboration with **eXXcellent Solutions GmbH**, MBI also offers a dedicated training course on implementing the **Credible Simulation Process** with **SSP** and **SSP-Traceability** in [easySSP](https://www.easy-ssp.com/) — bringing rigor and traceability to every simulation result.

![orchideo | easySSP - simulations you can trust](EasySSP.png 'easySSP credible simulation process: analysis, requirements, design, implementation, execution, evaluation, fulfillment')

For organizations ready to scale, MBI offers a course on building a **flexible, scalable governance structure for system simulation**, driven by automated, agentic-AI-based checking of process requirements. Governance depth and verification rigor are tailored to your needs through a simulation risk assessment based on the **NAFEMS ASSESS Engineering Simulation Risk model**, updated to the latest **NASA Modelica and Simulation Handbook 7009B** (2026 edition). [Contact us](mailto:hubertus.tummescheit@modelbased.cloud) to learn more.
{{<rawhtml>}}
 <img src="RiskModel.png" width="523" alt="NAFEMS ASSESS Engineering Simulation Risk model" title="Simulation risk assessment matrix: Decision Consequence vs. Simulation Result Influence">
{{</rawhtml>}}
With the above portfolio, [MBI LLC](https://modelbased.cloud/) will select the right solution for you, no matter where you are on your journey to standards-based system simulation!
Please [contact us](https://modelbased.cloud/company/) with your requests!

*This article is provided by Hubertus Tummescheit, [Model Based Innovation LLC](https://modelbased.cloud/)*

<!-- END Vendor news -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-book" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

### FMU Manipulation Toolbox

**FMU Manipulation Toolbox** is an open-source Python package (BSD-2 license) for analyzing, modifying, and combining
Functional Mock-up Units (FMUs) without recompiling them. Both FMI-2.0 and FMI-3.0 are supported, currently limited
to Co-Simulation mode.

![](launcher-gui.png 'GUI Launcher')

#### 🖥️ What's new?

Version 1.9.3 introduced 3 dedicated graphical interfaces:

- FMU Tool — Load an FMU, inspect its ports, batch rename variables, remove hierarchy levels, add
  [remoting interfaces](https://grouperenault.github.io/fmu_manipulation_toolbox/user-guide/fmutool/remoting/)
  (e.g. run a 32-bit FMU on a 64-bit host, or vice versa), and check FMI compliance — all with a few clicks.

- FMU Variable Editor — A spreadsheet-like interface to rename variables, edit descriptions, and adjust simulation
  experiment settings (start/stop time). Modified cells are highlighted in real-time.

- FMU Container Builder — A visual node-graph editor to assemble multiple FMUs into a single FMU Container.
  Drag & drop FMUs, draw wires between ports, configure connections, set start values, organize nested
  sub-containers — and export as FMU or JSON. It can also create an FMU Container from an existing SSP file.
  ![](fmu-container-builder.png 'FMU Container Builder')

All three tools are accessible from a single launcher: just type `fmutoolbox` in your terminal.

📦 Install in one line: `pip install fmu-manipulation-toolbox`

Try it out, and let us know what you build with it! Bug reports or feature requests are also welcome.

*This article is provided by [Nicolas LAURENT](https://github.com/nl78), [Renault Group](https://www.renaultgroup.com/)*


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
