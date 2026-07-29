---
title: Newsletter 2026-02
---

{{<rawhtml>}}
<div class="col-lg-8 mx-auto text-center mb-5">
    <div class="ma-logo modelica-association-logo" style="height: 150px; width: 300px; margin: auto"></div>
</div>
{{</rawhtml>}}

# Modelica Association Newsletter 2026-02

issued on August 3, 2026

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

<img src="FMI-logo.png" width="50%">

#### FMI Face-2-Face Design Meeting Munich June 8-10 2026

<img src="fmi-design-meeting-munich.jpg">

The FMI Project had a very productive in-person FMI Design meeting in Munich. Thanks to Torsten Sommer and Dassault Systèmes for hosting us - and to all participants from Akkodis, Bosch, Dassault Systèmes, German Aerospace Center (DLR), Keysight Technologies, PMSF IT Consulting Pierre R. Mai, Santa Anna IT Research Institute, Synopsys Inc and the participants in online sessions!

We made very good progress on 
- the coming FMI 3.0.3 with important clarifications especially for clocks usage (that become important as many tools support them now, many of them in the context of the FMI-LS-BUS)
- efficiency improvements for large FMI3.0-based simulation systems
- the FMI Layered Standards for 
 * References (FMI-LS-REF)
 * Network Communication (FMI-LS-REF), especially cross-checking the coming v1.3 with Flexray, Ethernet, LIN support
 * Differential Algebraic Equations (FMI-LS-DAE)
- Web Assembly Support in FMI (creating a first prototype and forming a working group)
And we had a lot of fun!

#### 280+ tools supporting FMI listed on the FMI tools page´!

The number of tools supporting the FMI Standard is still growing! Now we have 286 tools listed on https://fmi-standard.org/tools/ !
If you know of any additional tools missing please encourage the tool vendors or authors to add them!

#### News on FMI Layered Standards

##### FMI Layered Standard for Network Communication (FMI-LS-BUS) 

The FMI Project is happy to announce the Pre-Release v1.3-beta.1 of the FMI Layered Standard for Network Communication!

In this release FMI-LS-BUS: Ethernet and FMI-LS-BUS: LIN are going from Alpha to Beta state. Additionally it contains smaller adoptions for FMI-LS-BUS: FlexRay.

Summarized this version includes the common Physical Signal Abstraction, that fits for all bus types, and the Network Abstraction that currently supports CAN, CAN FD, CAN XL (from v1.0.0), FlexRay (from v1.1.0; currently in Beta state), Ethernet (from v1.2.0; now in Beta state) and LIN (from v1.3.0; now in Beta state). Check out our roadmap to get more information about the expansion plans of the FMI-LS-BUS.

Many thanks to the whole FMI-LS-BUS working group (with members from Akkodis, Altair, AVL, Beckhoff Automation, Bosch, dSPACE, PMSF IT Consulting Pierre R. Mai, Siemens Digital Industries Software, Synopsys Inc, VECTOR Informatik)! And especially to Benedikt Menne for the release preparation!

Learn more here: https://github.com/modelica/fmi-ls-bus/ and https://github.com/modelica/fmi-ls-bus/releases/tag/v1.3.0-beta.1


##### FMI Layered Standard References (FMI-LS-REF)


The FMI Project is happy to announce the Pre-Release v1.0.0-beta.1 of the FMI Layered Standard References (FMI-LS-REF)! Many thanks to the FMI Project - especially to the working group leader Pierre R. Mai - for their contributions!

This layered standard provides the capability to clearly designate the roles of additional related files included in an FMU in a structured way. These files are described in the layered standard manifest file, which is part of the FMU archive. In this way, an FMU can be shipped together with related files that are helpful in understanding and correctly using the FMU in a recognizable way. Note that this layered standard does not mandate the inclusion of any related files with an FMU. It only provides a structured way to describe such files, if they are included. The included related files can be of arbitrary types, as long as their roles are described in the layered standard manifest file. This layered standard can be used in addition to other layered standards, and allows the central description of related files included with the FMU, independently of their use in other layered standards. Thus an implementation can treat the related files described in this layered standard in a uniform way, regardless of whether they are used in other layered standards or not, and regardless of whether the other layered standards are supported by the implementation or not.

The experiments format that was formerly part of this layered standard can be used beyond FMI and will therefore be defined in the “harmonized specification” ma-hs-experiments developed by the new Coordination Project within Modelica Association, see https://github.com/modelica/ma-hs-experiments.

Learn more here: https://github.com/modelica/fmi-ls-ref/ and https://github.com/modelica/fmi-ls-ref/releases/tag/v1.0.0-beta.1

##### FMI Layered Standard for Differential-Algebraic Equations (FMI-LS-DAE)

The working group on support for Differential-Algebraic Equations (DAE) in FMI, led by Joel Andersson (FMIOPT) and Andreas Heuermann (Santa Anna IT Research Institute), is actively working on a layered standard FMI-LS-DAE.
A first pre-release of the standard (v1.0.0-alpha.1) is planned for 2026.

The working group will present its progress in the paper *"Towards an FMI Layered Standard for DAE: Applications for Simulation and Optimization"* at the [American Modelica & FMI Conference 2026](https://modelica.org/events/american2026/).
A preprint is already available on [arXiv](https://arxiv.org/abs/2606.22544).

You can follow the development on [GitHub](https://github.com/modelica/fmi-ls-dae) and read the [current draft of the specification](https://modelica.github.io/fmi-ls-dae/main/).

*This article is provided by Andreas Heuermann, [Santa Anna IT Research Institute](https://www.santa-anna.se/)*


##### FMI Layered Standard WebAssembly (FMI-LS-WASM)

The FMI Project started working on supporting Web Assembly (WASM) as new "platform" besides platform specific binaries or source code.
WASM has several benefits w.r.t. portability and cyber-security (through inherent sandboxing).
We intend to support this in the form of a Layered Standard (FMI-LS-WASM), and created already a first prototype using the WebAssembly Component Model interface description language (WIT). (Many thanks to Pierre Mai!)

You can find the first prototype here: https://github.com/modelica/fmi-ls-wasm
Comments and feedback is very welcome - or become a contributor! (For that it is necessary that your organization signs the Contributor License Agreement). 

<!-- END Modelica Association -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-users" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Conferences and user meetings

<!-- TODO: Conferences and user meetings -->

### American Modelica & FMI Conference 2026

The **American Modelica & FMI Conference 2026** will be held in person at the [Georgia Institute of Technology](https://www.asdl.gatech.edu/) in Atlanta, in the Aerospace Systems Design Laboratory, from **October 12–14, 2026**. It is organized by [NAMUG](https://namug.org/), the North American Modelica Users Group, in cooperation with the [Modelica Association](https://modelica.org/association/). The conference brings together users, library developers, tool vendors, and language designers to share the latest work on Modelica, FMI, SSP, eFMI, DCP, and equation-oriented modeling more broadly.

For 2026 the program features **two tracks**: the established Modelica program alongside a new track covering the structure and application of equation-oriented modeling languages other than Modelica, broadening the conversation around shared modeling principles.

Workshops and tutorials for beginners and advanced users will be given on the afternoon of **October 12**, with keynotes, paper presentations, vendor sessions, and an exhibition on **October 13–14**.

Two keynotes are confirmed: **Oliver Lenord** (Bosch Corporate Research), on pushing the limits of system simulation through open standards, and **Dr. Daniel Mikkelson** (Idaho National Laboratory), on nuclear system modeling for integrated energy systems analyses.

Registration is open; full details are on the [conference page](https://modelica.org/events/american2026/).

*This article is provided by the American Modelica & FMI Conference 2026 organizing committee.*

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
<p style="text-align:center"><em>Sobol-sweep for PID controller response for varying plant parameters, generated with Modelon Impact MCP server</em></p>
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

### Modelica MCP server from MLQT project

The MLQT 2026.3 release includes a new Modelica MCP server for creating, editing and checking Modelica models and libraries. The MCP server provides powerful and surgical Modelica editing tools that any AI agent that supports the MCP standard can utilise. The MCP server loads your Modelica libraries and provides the AI agent with efficient access to the information it needs dramatically reducing token usage when creating and editing Modelica models. To fully close the loop and empower your AI agent to simulate and verify models, you will also need an MCP server for your Modelica simulation tool of choice.

The latest release of the MLQT project also brings new features to the Modelica aware Git and SVN interface to improve the capabilities for checking and enforcing your coding style guidelines.  For example, spelling mistakes can be corrected through the MLQT tool without needing to return to your Modelica editor.

MLQT is available for Windows today, with a Linux version on the roadmap. To learn more, visit the open-source [repository on GitHub](https://github.com/mdempse1/MLQT).

*This article is provided by Mike Dempsey ([M Dempsey Ltd](https://dempsey.me.uk/))*

### Keysight Technologies: SimulationX 2026 Released

Keysight is pleased to announce the release of SimulationX 2026, introducing new capabilities that improve engineering productivity, model fidelity, and multi-domain system simulation across automotive, energy, industrial, and aerospace applications.

Highlights of this release include:

* **Vehicle Dynamics enhancements**, including automated road configuration, trajectory generation, regenerative braking examples, and standardized ISO 4138 validation workflows.
* **Advanced Heat Exchanger modeling**, featuring improved numerical robustness, enhanced boiling and condensation correlations, support for transcritical processes, and updated CoolProp integration.
* **Hydraulics library enhancements**, including new proportional solenoid models, improved density calculations, and enhanced graphical animations for easier model interpretation.
* **Enhanced FEM import and visualization** with support for VPS Structural Mechanics HDF5 files, rigid bodies, and improved computation.
* **Enhanced Modelica support** with Modelica Standard Library 4.1, SVG graphics, and improved unit handling.
* **Performance and usability improvements** delivering faster simulations, improved workflows, and a more streamlined user experience.

SimulationX continues to embrace open standards, supporting Modelica, the Functional Mock-up Interface (FMI), and co-simulation workflows that enable engineers to integrate multi-domain system models into larger engineering toolchains.

SimulationX 2026 also expands its extensive Modelica-based libraries for mechanical, electrical, thermal, hydraulics, pneumatics, controls, and vehicle systems, enabling engineers to build high-fidelity digital twins while maintaining an open and reusable modeling approach.

Learn more about **SimulationX 2026 release** [here](https://www.keysight.com/blogs/en/tech/sim-des/simulationx-2026-less-time-building-models-more-time-engineering-better-products).

*This article is provided by Majid Aziz ([Keysight](https://www.keysight.com/in/en/products/design-engineering-software/computer-aided-engineering-software/multi-domain-system.html))*

### FMU Manipulation Toolbox

**FMU Manipulation Toolbox** is an open-source Python package (BSD-2 license) for analyzing, modifying, and combining
Functional Mock-up Units (FMUs) without recompiling them. Both FMI-2.0 and FMI-3.0 are supported, currently limited
to Co-Simulation mode.

![FMU Manipulation Toolbox launcher](launcher-gui.png 'GUI Launcher')

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

![FMU Container Builder node-graph editor](fmu-container-builder.png 'FMU Container Builder')

All three tools are accessible from a single launcher: just type `fmutoolbox` in your terminal.

📦 Install in one line: `pip install fmu-manipulation-toolbox`

Try it out, and let us know what you build with it! Bug reports or feature requests are also welcome.

*This article is provided by [Nicolas LAURENT](https://github.com/nl78), [Renault Group](https://www.renaultgroup.com/)*

### TLK-Thermo News
![TLK-Thermo Logo](TLK-Thermo_Logo.svg)

#### Modeling Modern Liquid-Cooled Data Centers

As computing power continues to grow, data center cooling is becoming a key challenge for efficiency, reliability and sustainability. As conventional air-cooling approaches reach their limits in managing growing heat loads, liquid cooling is emerging as an increasingly important solution. An exemplary system model of liquid-cooled CPU racks, implemented in **[TIL Suite 2026.1](https://www.tlk-thermo.com/en/software/til-suite)**, demonstrates how modern data center cooling systems can be modeled and simulated in Modelica. The example provides insights into the thermal behavior of complex cooling architectures and illustrates how simulation can support the design and optimization of next-generation data center infrastructure. This topic will also be presented at **[ThermoSim 2026](https://tlk-energy.de/en/events/thermosim-conference-2026)** in Aachen (22-23 September) by our Modelica and TIL Suite expert Ingo Frohböse.

![TIL Data Center Cooling Example](TIL_DataCenterCooling.png 'TIL System Model Example for Data Center Cooling')

#### Accelerating BTMS Development Through Fast 3D Modelica Simulation

Evaluating battery thermal management system (BTMS) concepts often requires computationally expensive CFD analyses, especially when dynamic operating conditions must be considered. The new **[TIL Add-On Battery](https://www.tlk-thermo.com/fileadmin/user_upload/SoftwareFiles/TILSuite/OnePager_AddOnBattery.pdf)** addresses this challenge by combining fast 1D methods with 3D-resolved battery models, enabling rapid simulation of temperatures, voltages, SoC, currents, and heat dissipation in battery stacks and complete systems, including their integration into cooling and refrigeration cycles. This approach supports rapid assessment of BTMS topologies and operating scenarios while reducing the effort associated with traditional CFD-based design iterations.

![TIL AddOn Battery](TIL_AddOn_Battery_BTMS.png 'Battery Thermal Management System Development with the TIL AddOn Battery')

#### Meet Our Experts

Visit us at the [Asian Modelica & FMI Conference 2026](https://modelica.org/events/asian2026/) in Hangzhou, China (21-22 September), where our Head of Software Development, Christian Schulze, will be available at our booth to discuss our latest developments in Modelica-based simulation and software tools.

In addition, we will be exhibiting together with our partner TLK Energy at [Chillventa 2026](https://www.chillventa.de/en/exhibitors/tlk-thermo-gmbh-2557518), where we will showcase how simulation and testing can help address technical challenges in the development of refrigeration, HVAC and heat pump systems. Visitors can learn more about our software solutions and engineering services for efficient system development, validation and optimization.

*This article is provided by Lisa Busche, [TLK-Thermo GmbH](https://www.tlk-thermo.com/en/)*

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

### FMI 3.0 Co-Simulation FMU with FMI-LS-BUS CAN and Ethernet — built from scratch on Windows

An open-source walkthrough of building a complete SIL (Software-in-the-Loop) ECU virtualization 
stack on Windows using only open-source tooling — GCC (MinGW-w64), FreeRTOS, Vector SIL Kit, 
and the FMI 3.0 and FMI-LS-BUS headers from GitHub.

The project progresses through seven stages without changing the underlying application software 
(SpeedController, BrakeController, ActuatorSWC): from a Level 1 FreeRTOS vECU with a stubbed RTE, 
through Level 3 virtual CAN via SIL Kit, to validated FMI 3.0 Co-Simulation FMUs with 
FMI-LS-BUS CAN Low-Cut and Ethernet Low-Cut (v1.3-beta) terminals. A custom C FMI master 
algorithm orchestrates two-FMU closed-loop co-simulation, converging to 80 km/h without any 
commercial orchestrator.

Practical findings are documented for Windows/MinGW builds — including correct struct 
initialization for the SIL Kit C API (`SilKit_Struct_Init` vs `memset`), Binary variable 
`<Start value=""/>` syntax, FMU packaging with `jar cf` instead of PowerShell 
`Compress-Archive`, and FMI-LS-BUS Ethernet frame construction. A SIL Kit Coordinated 
lifecycle bug encountered during development was isolated to a minimal C repro, filed 
upstream, and resolved by the Vector maintainer.

Source code, build instructions, and documented fixes: 
[github.com/KBARMAN11/sil-ecu-virtualization](https://github.com/KBARMAN11/sil-ecu-virtualization)

![SIL ECU virtualization stack with FMI-LS-BUS CAN and Ethernet](fmi-ls-bus-vecu-sil-stack.png)

*This article is provided by Karan Barman*

<!-- END Education news -->
