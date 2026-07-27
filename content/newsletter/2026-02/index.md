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

### Modelica MCP server from MLQT project

The MLQT 2026.3 release includes a new Modelica MCP server for creating, editing and checking Modelica models and libraries. The MCP server provides powerful and surgical Modelica editing tools that any AI agent that supports the MCP standard can utilise. The MCP server loads your Modelica libraries and provides the AI agent with efficient access to the information it needs dramatically reducing token usage when creating and editing Modelica models. To fully close the loop and empower your AI agent to simulate and verify models, you will also need an MCP server for your Modelica simulation tool of choice.

The latest release of the MLQT project also brings new features to the Modelica aware Git and SVN interface to improve the capabilities for checking and enforcing your coding style guidelines.  For example, spelling mistakes can be corrected through the MLQT tool without needing to return to your Modelica editor.

MLQT is available for Windows today, with a Linux version on the roadmap. To learn more, visit the open-source [repository on GitHub](https://github.com/mdempse1/MLQT).

* This article is provided by Mike Dempsey ([M Dempsey Ltd](https://dempsey.me.uk/))*
  
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
<img width="594" height="420" alt="karan-barman-fmi-ls-bus-vecu" src="https://github.com/user-attachments/assets/2fb50b0c-d888-4b6c-b891-8f23ab837ee1" />

*This article is provided by Karan Barman*
<!-- END Education news -->
