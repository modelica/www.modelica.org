---
title: Newsletter 2021-02
---

# Modelica Association Newsletter 2021-02

issued on 08 September 2021

{{<rawhtml>}}
<style>
    section img {
        border-radius: 10px;
  padding: 15px;
  background: #fff;
  max-height: 400px;
}
</style>

<section id="main_content">
          <h1 class="no_toc" id="table-of-contents">Table of contents</h1>

<ul id="markdown-toc">
  <li><a href="#letter-from-the-board" id="markdown-toc-letter-from-the-board">Letter from the Board</a></li>
  <li><a href="#modelica-association" id="markdown-toc-modelica-association">Modelica Association</a>    <ul>
      <li><a href="#fmi-news" id="markdown-toc-fmi-news">FMI news</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#tlk-dave-new-version-2-3" id="markdown-toc-tlk-dave-new-version-2-3">TLK DaVE - New version 2.3</a></li>
      <li><a href="#simcenter-webapp-server-2021-1-released" id="markdown-toc-simcenter-webapp-server-2021-1-released">Simcenter Webapp Server 2021.1 released</a></li>
      <li><a href="#simcenter-rom-builder-2021-1-released" id="markdown-toc-simcenter-rom-builder-2021-1-released">Simcenter ROM Builder 2021.1 released</a></li>
      <li><a href="#simcenter-amesim-2021-1-released" id="markdown-toc-simcenter-amesim-2021-1-released">Simcenter Amesim 2021.1 released</a></li>
      <li><a href="#openmodelica-1-18-0-has-been-released" id="markdown-toc-openmodelica-1-18-0-has-been-released">OpenModelica 1.18.0 has been released</a></li>
      <li><a href="#modelon-impact-2021-2-release" id="markdown-toc-modelon-impact-2021-2-release">Modelon Impact 2021.2 release</a></li>
      <li><a href="#announcing-fmi-jl-fmiflux-jl" id="markdown-toc-announcing-fmi-jl-fmiflux-jl">Announcing FMI.jl &amp; FMIFlux.jl</a></li>
      <li><a href="#announcing-dymola-2022x" id="markdown-toc-announcing-dymola-2022x">Announcing Dymola 2022x</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#an-e-book-modelica-by-application-power-systems-v1-0" id="markdown-toc-an-e-book-modelica-by-application-power-systems-v1-0">An E-book (Modelica by Application: Power Systems V1.0)</a></li>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
      <li><a href="#modelon-news-and-blog" id="markdown-toc-modelon-news-and-blog">Modelon News and Blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>the <a href="https://2021.international.conference.modelica.org/">14th International Modelica Conference</a> is approaching, taking place 
<strong>Mo. Sept. 20 - Fr. Sept. 24, 2021</strong>. It is a <strong>free</strong>, virtual/online event, but you must <a href="https://www.trippus.se/web/registration/Registration.aspx?view=registration&amp;idcategory=AB0ILBBscfgVo6ZZ4O5u-Bx5_XkKg9Y5J_hMAXgfFYWRClh6asLWnZ_P6iGC5e3_zu9Z7Hyb5Hv_&amp;ln=eng">register</a>
in order to participate. The local organizers are trying to make the conference quite interactive:</p>

<ul>
  <li>
    <p>A presentation consists either of an uploaded video or a live talk. In any case, you can raise your hand (click the hand button in zoom), 
and a moderator moves you to the panel, typically in the last 5 minutes of every presentation slot. The people in the panel can 
talk to each other, while the rest of the audience is listening, so a discussion with the presenter is possible.</p>
  </li>
  <li>
    <p>The breaks will be run using wonder.me - an app where you can move around in a virtual hall and when you come closer to people conversations with them open.</p>
  </li>
  <li>
    <p>Gold sponsors have their own virtual booths where you can directly talk to them.</p>
  </li>
</ul>

<p>More practical information is available <a href="https://2021.international.conference.modelica.org/practical.html">here</a>. Besides the scientific presentations,
the tutorials and the vendor presentations, let me highlight:</p>

<ul>
  <li>Sept. 20, 14:15-15:00 CEST: Keynote 1 from Viral Shah and 
Chris Rackauckas - <em>New Horizons in Modeling and Simulation with Julia</em>.</li>
  <li>Sept. 23, 13:30-17:15 CEST: The <a href="fmi_user_meeting.html">Industrial Usage of FMI and Companion Standards SSP / DCP/ eFMI</a>.</li>
  <li>Sept. 24, 15:40-16:25 CEST: Keynote 2 from Michael Wetter - 
<em>How can the Modelica community support the transition to decarbonized, grid-flexible buildings?</em></li>
</ul>

<p>On May 10 and 11, a Modelica Association <strong>Strategy Meeting</strong> took place. As an outcome, the operation of the Modelica Association and the Modelica Association Projects
shall be improved in the future.</p>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities,
please follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.
The deadline for articles for the next newsletter is Fr. December 3, 2021.</p>

<p>Martin Otter on September 7, 2021</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="fmi-news">FMI news</h2>

<div style="float: right">
  <p><img src="fmi_logo.png" alt="fmi-logo"></p>
</div>

<h4 id="fmi-industrial-user-meeting--industrial-usage-of-fmi-and-companion-standards-ssp--dcp-efmi">FMI Industrial User Meeting – Industrial Usage of FMI and Companion Standards SSP / DCP/ eFMI</h4>

<p>The Modelica Association Project FMI invites you to the FMI Industrial User Meeting – Industrial Usage of FMI and Companion Standards SSP / DCP/ eFMI  at the <a href="https://2021.international.conference.modelica.org/">International Modelica Conference in Linköping, Sweden
on Sept. 20-24</a> on <strong>Thursday 23.9.2021, 13:30-17:15.</strong></p>

<p>For participation please <a href="https://www.trippus.se/web/registration/Registration.aspx?view=registration&amp;idcategory=AB0ILBBscfgVo6ZZ4O5u-Bx5_XkKg9Y5J_hMAXgfFYWRClh6asLWnZ_P6iGC5e3_zu9Z7Hyb5Hv_&amp;ln=eng">register for the Modelica Conference</a> (free)</p>

<h5 id="preliminary-agenda">Preliminary Agenda</h5>

<ul>
  <li>Welcome, Overview on FMI / SSP / DCP / eFMI Standards  (5 Min.)</li>
  <li>Industrial user talks
    <ul>
      <li>Initial Steps in Deploying and Calibrating Power System Models on a Synchrophasor Data Cloud Platform using FMI (15 Min., Luigi Vanfretti, Giuseppe Laera, Marcelo de C. Fernandes, Chen Wang, Chetan Mishra and Kevin D. Jones)</li>
      <li>FMI-based simulation workflows based on open source and commercial tools (15 Min., Christian Bertsch, Fabian Jansen, Andreas Babucke and Torsten Sommer)</li>
      <li>Open Simulation Platform - Towards a maritime ecosystem for efficient co-simulation (15 Min., Lars Tandle Kylinngstad)</li>
    </ul>
  </li>
  <li>FMI3 development (Status, roadmap, layered standards) (15 Min., Andreas Junghanns)</li>
  <li>Demo of FMI3 support in tool prototypes (60 Min.; a list of participating tools will be provided)</li>
  <li>Short Break (10 Min.)</li>
  <li>Status and outlook SSP Standard (5 Min, Jochen Köhler)</li>
  <li>Industrial user talks
    <ul>
      <li>Use of SSP, FMI and OSI for Simulation-based Testing of an Automated Vehicle (15 Min., Jochen Koehler, Heinz Sachsenweger, Arun Das, Markus Deppe and Hans-Martin Heinkel)</li>
      <li>Model-based development of a traction control unit with SSP and FMI  (15 Min., Nicolas Ochoa Lleras, Hasan Esen, Pierre Mai, Klaus Mai and Hiroshi Tashiro)</li>
      <li>SSP Traceability Demonstrator (15 Min., Dag Brück, Hans-Martin Heinkel, Peter Lobner and Pierre Mai)</li>
    </ul>
  </li>
  <li>Status and Outlook DCP Standard (15 Min., Martin Krammer)</li>
  <li>Status and Outlook eFMI Standard (15 Min., Christoff Bürger)</li>
  <li>General Q&amp;A + End</li>
</ul>

<p><em>This article is provided by MAP FMI</em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="tlk-dave-new-version-2-3">TLK DaVE - New version 2.3</h2>

<div style="float: right">
  <p><img src="tlk-dave-logo.png" alt="tlk-dave logo"></p>
</div>

<p>DaVE is a visualization and simulation environment that is suitable for both the post-processing and the online display of dynamic data. The current <strong>version 2.3</strong> contains numerous innovations and improvements, of which only the most important are mentioned below.</p>

<ul>
  <li><strong>Mollier-h-s diagram:</strong> With the h-s diagram, you now have another state diagram at hand with which information on specific enthalpy and entropy as well as temperature, pressure and vapor fraction can be displayed. The Mollier-h-s diagram is used - in addition to the p-h diagram - for example in power plant or refrigeration technology.</li>
  <li><strong>Time settings:</strong> New options for data connectors and the DaVE timeline allow for a targeted selection of the data to be handled. By specifying an offset for the time data, individual data connectors can be shifted relatively to each other. This makes it easier to match simulation results with measurement data, for example. The global setting of permissible minimum and maximum times makes it possible to work with slices of long data sources.</li>
  <li><strong>New options for instruments:</strong> Various new features are available for the instruments in DaVE. For example, vector plots of TIL components can be created very easily via a new automatic feature. New options - such as the definition of decimal character to be used or the autoscaling of plot axes - allow changing the graphical display to fit the individual needs.</li>
  <li><strong>DaVE-LabVIEW-Interface:</strong> The new version of the interface between DaVE and LabVIEW simplifies the data transfer from LabVIEW to DaVE. Any visualizations such as state diagrams, line diagrams and RI schematics with current states can be continuously adapted during measurement operation without changing the LabVIEW measurement program. During the development of the interface, special attention was paid to simple integration into existing LabVIEW programs. Experiences from our in-house measuring operation have also been incorporated in this process.</li>
</ul>

<p>For further information see <a href="https://www.tlk-thermo.com/index.php/en/dave">www.tlk-thermo.com</a>, <a href="https://www.tlk-thermo.com/images/tlk/content/presentations/DaVE_EN_2020_September.pdf">download the DaVE presentation</a> or contact us at <a href="mailto:dave@tlk-thermo.com">dave@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Roland Kossel <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="simcenter-webapp-server-2021-1-released">Simcenter Webapp Server 2021.1 released</h2>
<p><a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a> is proud to announce the 
recent release of Simcenter Webapp Server 2021.1.</p>

<p>As a reminder Simcenter Webapp Server is Siemens solution to create Webapps from simulation 
models in one click without writing a single line of code.
Simcenter Webapp Server is <a href="https://www.mendix.com/solutions/simulations-anywhere/">based</a> on Siemens-owned <a href="https://www.mendix.com">Mendix</a> technologies (platform for web-based low code application development).
Simcenter Webapp Server supports natively Simcenter Amesim models as well as third party 
simulation models (e.g. Modelica) through the native support of FMUs.</p>

<p>We can highlight the following new key features:</p>
<ul>
  <li>A new Simcenter Amesim desktop App to upload your model directly from Simcenter Amesim</li>
  <li>Model consumers can use the unit system they are used to independently of the unit system
 used by the model owner</li>
  <li>Results comparison between several runs in the user-defined results layout</li>
  <li>New widgets to document and fully customize a Webapp without writing a single line of code</li>
  <li>Model consumers can now report any issues with a Webapp directly to the model owner within
the web interface</li>
</ul>

<p><img src="Simcenter_Webapp_Server_20211.png" alt="Simcenter Webapp Server application example" title="Application example of Simcenter Webapp Server"></p>

<p>For more information on Simcenter Webapp Server, please visit our <a href="https://www.plm.automation.siemens.com/global/en/products/simcenter/simcenter-webapp-server.html">website</a>.</p>

<p><em>This article is provided by Anthony Domi (<a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a>)</em></p>

<h2 id="simcenter-rom-builder-2021-1-released">Simcenter ROM Builder 2021.1 released</h2>
<p>With the recent release of <a href="https://www.youtube.com/watch?v=E5GRfV49PWY">Simcenter Amesim 2021.1</a>, <a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a><br>
has introduced a new product, called <a href="https://www.plm.automation.siemens.com/global/en/products/simulation-test/rom-builder.html">Simcenter ROM Builder</a>, that can typically be leveraged 
as a powerful companion tool to Simcenter Amesim.</p>

<p><img src="amesim_banner_2021_1.png" alt=""></p>

<h4 id="introducing-the-simcenter-rom-builder">Introducing the Simcenter ROM Builder</h4>
<p>The <a href="https://www.plm.automation.siemens.com/global/en/products/simulation-test/rom-builder.html">ROM Builder</a> is a general-purpose model order reduction tool. 
It enables creating and exporting Reduced Order Models (ROMs) from various sources of data, including simulation results and measurements. 
This first version is distributed with Simcenter Amesim but is an
independent product. It can be used to extend Simcenter Amesim powerful physical modeling capabilities with advanced model order reduction techniques. 
It represents a first step towards the deployment of highly portable lightweight but accurate representations of physical 
models&nbsp;—&nbsp;executable digital twins&nbsp;—&nbsp;to a wide variety of targets (e.g. IIoT, Edge Computing or Cloud platforms), serving various kinds of simulation contexts and purposes.
<strong>Reduced order models can be exported as 2.0 Functional Mock-up Units (FMUs) complying with most of the advanced capabilities of the standard and providing the complete standalone C source code</strong>.</p>

<p><img src="ROM_Builder_2021_1.png" alt=""></p>

<p>Among the benefits of the model order reduction offered
by the <a href="https://www.plm.automation.siemens.com/global/en/products/simulation-test/rom-builder.html">ROM Builder</a>, one can mention:</p>

<ul>
  <li><strong>Model simplification</strong>, as a means to increase productivity by dealing with reusable fast-running models of limited complexity. Such models can be used <br>
for control synthesis and validation, or as predictive models inside Model Predictive Controllers (MPC) or Virtual Sensors.</li>
  <li><strong>Simulation speed-up</strong>: reduced models can for instance replace some participant models within large co-simulations, which helps reduce the overall CPU time.</li>
  <li><strong>Optimization speed-up</strong>: promising regions of the design space can be quickly identified during a first exploration phase while the results can be refined on the original models.</li>
  <li><strong>Real-time capability</strong>: reduced order models can help comply with deterministic numbers of iterations (e.g., fixed-step solvers) and simulations that run faster than the wall clock time.</li>
  <li><strong>Embedded models / Hardware-in-the-Loop</strong>: reduced order models can be exported to a wide variety of hardware systems including edge computing platforms.</li>
  <li><strong>IP protection</strong>: a reduced model is a functional, mathematical representation of a model with no direct exposure of know-how or physical equations.</li>
</ul>

<p><strong>Please take a look at this first “HowTo” <a href="https://www.youtube.com/watch?v=ub-rdZPi9Y4">video</a> to discover the capabilities of the Simcenter ROM Builder</strong>.
More will come in the forthcoming 2021.2 release. Stay tuned.</p>

<p>For more information on Simcenter Amesim and on the Simcenter ROM Builder, 
please visit our <a href="https://www.plm.automation.siemens.com/global/en/products/simcenter/">website</a>.</p>

<h2 id="simcenter-amesim-2021-1-released">Simcenter Amesim 2021.1 released</h2>
<p><a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a> is proud to announce the 
recent release of <a href="https://www.youtube.com/watch?v=YNwLOHDF148&amp;ab_channel=SiemensSoftware">Simcenter Amesim 2021.1</a>, as part of its system simulation solutions. Among the key features introduced in this release, we can highlight the Modelica related improvements below.</p>

<h4 id="modelica-editor-20211">Modelica Editor 2021.1</h4>
<p>Modelica Editor is an integrated development application dedicated to editing Modelica code. More than a tool to be used during the design and modeling phase of a Modelica model, Modelica Editor allows you to generate bridges between the acausal world of Modelica and the causal environment of Simcenter Amesim.</p>

<p>The improvements introduced in Modelica Editor 2021.1 since the last release are the following:</p>
<ul>
  <li>Modelica Compiler (Modelon’s Optimica Compiler Toolkit) upgraded to version 1.24</li>
  <li>Semantic checker added in the toolbar to perform a syntax and symbolic analysis of the active model and ensure the balance between the equations and variables</li>
  <li>New Modelica package providing robust interfaces between the MSL fluid standard connectors and the <strong>Thermal Hydraulic</strong> submodels of Simcenter Amesim</li>
</ul>

<p>This new Modelica package contains 2 different interfaces to consider the causalities of the Thermal Hydraulic submodels. With these interfaces, it is now possible to connect for instance a Modelica-based heat exchanger to a Simcenter Amesim native closed loop cooling system.</p>

<p><img src="Simcenter_Amesim_Modelica_Editor_20211.png" alt="Hybrid modelling example" title="Application example of Simcenter Amesim"></p>

<p>And thanks to the media property assistant provided in the <strong>Thermal Hydraulic library</strong>, the media used in Simcenter Amesim can be adjusted according to the properties described in Modelica, thus obtaining continuous thermodynamic properties between both worlds.</p>

<p>For more information on Simcenter Amesim, please visit our <a href="https://www.plm.automation.siemens.com/global/fr/products/simcenter/simcenter-amesim.html">website</a>.</p>

<h2 id="openmodelica-1-18-0-has-been-released">OpenModelica 1.18.0 has been released</h2>
<p><img src="https://trac.openmodelica.org/OpenModelica/chrome/site/logo.png" alt="OMC logo" title="OMC logo"></p>

<p>The Open Source Modelica Consortium is happy to announce the release of version 1.18.0 of the OpenModelica tool suite, available for Windows, Linux, and MacOS through a Linux virtual machine.</p>

<h4 id="whats-new">What’s new</h4>

<ul>
  <li>Further improved new compiler frontend, it can now flatten 100% of the Modelica Standard Library 3.2.3 and 4.0.0, as well as 100% of many open source Modelica libraries such as Chemical, HelmholtzMedia, IBPSA, ModelicaTest, OpenIPSL, PNLib, PhotoVoltaics, PlanarMechanics, PowerGrids, PowerSysPro, PowerSystems, SystemDynamics, TAeZoSysPro, ThermofluidStream.</li>
  <li>The spatialDistribution() operator is now supported by the default C simulation runtime.</li>
  <li>Much improved C++ simulation runtime now uses the new compiler frontend.</li>
  <li>New features in the the OMEdit GUI plot: automatic selection of appropriate unit prefixes, toggling the sign of variables, improved handling of large and high-resolution screens.</li>
  <li>Data reconciliation capabilities integrated in the OMEdit GUI.</li>
  <li>Improved FMI 2.0 export and FMI/SSP import in the OMSimulator tool.</li>
  <li>Many bug fixes.</li>
</ul>

<h4 id="further-info">Further info</h4>

<p>For more information, see <a href="https://openmodelica.org/">openmodelica.org</a> and the detailed <a href="https://trac.openmodelica.org/OpenModelica/wiki/ReleaseNotes/1.18.0">1.18.0 Release Notes</a>.</p>

<p><em>This article is provided by Francesco Casella (<a href="https://openmodelica.org/">OSMC</a>)</em></p>

<h2 id="modelon-impact-2021-2-release">Modelon Impact 2021.2 release</h2>
<p><img src="Modelon_Impact_Release_1200_627_Release_v2.jpg" alt="Modelon impact"></p>

<p>Modelon released Modelon Impact 2021.2 in June. This release delivered significant improvements, critical features, and library updates for new and current subscribers. View the release update <a href="https://tinyurl.com/modelon-impact-2021-2">here</a>.</p>

<h2 id="announcing-fmi-jl-fmiflux-jl">Announcing FMI.jl &amp; FMIFlux.jl</h2>
<p><img src="fmijl_logo_640_320.png" alt=""><br>
The simulation ecosystem of the Julia programming language is rapidly growing. In order to bridge the gap between industrial use cases and methods and algorithms available in Julia, <code class="language-plaintext highlighter-rouge">FMI.jl</code> (https://github.com/ThummeTo/FMI.jl) is released.<br>
<code class="language-plaintext highlighter-rouge">FMI.jl</code> aims at the integration of FMI (https://fmi-standard.org/) into the Julia ecosystem by providing the possibility to load, parameterize and simulate FMUs.</p>

<p><img src="fmifluxjl_logo_640_320.png" alt=""><br>
Combining physical and state-of-the-art data-driven modeling inside a single simulation tool used in industry is currently not possible in a convenient fashion. An extension to <code class="language-plaintext highlighter-rouge">FMI.jl</code> called <code class="language-plaintext highlighter-rouge">FMIFlux.jl</code> (https://github.com/ThummeTo/FMIFlux.jl) allows the integration of FMUs into neural network topologies to obtain a <em>NeuralFMU</em>.<br>
This structural combination of a black-box model commonly used in industry and a data-driven machine learning model combines the different advantages of both modeling approaches in a single Julia-based development environment. This allows for the usage of advanced data driven modeling techniques for physical effects that are difficult to model based on only first principles.</p>

<p><em>This article is provided by Lars Mikelsons</em></p>

<h2 id="announcing-dymola-2022x">Announcing Dymola 2022x</h2>
<p><img src="https://user-images.githubusercontent.com/24527575/131837294-f87baeef-fedf-45eb-a093-58ca914669fb.png" alt="plot-discrete"></p>

<p>We are pleased to announce that Dymola 2022x will be released later this year.</p>

<ul>
  <li>
    <p>A new user interface is available for Dymola’s static and dynamic (transient) steady-state solvers, greatly simplifying this task.
Options to sweep parameters, compare solutions and set tolerances are available.</p>
  </li>
  <li>
    <p>A new command enables visualization of components discretized in one dimension, for example to show the temperature distribution in a pipe.
The animation slider is used to show the discretization at different times of the simulation.</p>
  </li>
  <li>
    <p>Dymola 2022x also supports basic SSP import.</p>
  </li>
</ul>

<p><em>This article is provided by Dag Brück, Dassault Systèmes</em></p>

<h1 id="education-news">Education news</h1>

<h2 id="an-e-book-modelica-by-application-power-systems-v1-0">An E-book (Modelica by Application: Power Systems V1.0)</h2>
<p><img src="mathemodica-MPSCover1.0.png" width="250"></p>

<h4 id="significant-updates-include">Significant updates include:</h4>

<ul>
  <li>Major content and formatting improvment</li>
  <li>A new chapter with the title “A Short History of System Modeling”</li>
  <li>Most chapters are ended with topic-related open questions</li>
</ul>

<h5 id="intro-of-chapter-a-short-history-of-system-modeling">Intro of Chapter “A Short history of System Modeling”</h5>

<p>In the previous chapter, we have gone from classical problems in modeling applications of power systems to modern challenging aspects. 
Analogously, in this and the next chapter, we start from the early modern age of modeling and simulation approaches up to the modeling concepts behind Modelica, leaving the reader to conclude himself after reading this (e-)book, whether and how far both lines are ultimately converging together.<br>
…</p>

<h5 id="outline-and-ordering-details">Outline and Ordering details</h5>

<p>View the project website on <a href="https://github.com/Mathemodica/ModelicaPowerSystemBook/">github</a></p>

<p><img src="Mathemodica-logo-50.png" alt="Mathemodica logo"></p>

<p><em>This article is provided by Atiyah Elsheikh (<a href="http://mathemodica.com/">Mathemodica.com</a>)</em></p>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2016/04/claytex-logo.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.claytex.com/blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<h4 id="the-analytical-jacobian">The Analytical Jacobian</h4>

<p>Dymola is a tool built around advanced symbolic manipulation. Many solver algorithms and numerical methods are / can be utilized to solve the models created within Dymola. Many of the algorithms and numerical methods have substantial impact on the accuracy and speed of the resulting simulations. Jacobian matrices play a key part in much of this. Read the full article <a href="https://www.claytex.com/tech-blog/creating-analytical-jacobians/">here</a></p>

<h4 id="checking-derivatives-by-using-the-plotting-features">Checking derivatives by using the plotting features</h4>

<p>This post looks at a simple way to check that derivatives of a function are correct and in the process explores some of the different plotting features of Dymola. Read the full article <a href="https://www.claytex.com/tech-blog/checking-derivatives-by-using-the-plotting-features/">here</a></p>

<h4 id="dymola-library-concealment--how-to-and-why">Dymola Library Concealment – How to, and why?</h4>

<p>Dymola and Modelica make the distribution and deployment of simulation models a relatively simple process. There is often some reservation by model developers concerning how much of a model they may want to reveal to the end users. There are various reasons the developer may want to conceal the model content, but it generally revolves around protection of their intellectual property. Read the full article <a href="https://www.claytex.com/tech-blog/dymola-library-concealment-how-to-and-why/">here</a></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

<h2 id="modelon-news-and-blog">Modelon News and Blog</h2>
<h4 id="case-study-engie-collaborates-with-modelon-to-build-solar-pv-plant-digital-twin">Case Study: ENGIE Collaborates With Modelon to Build Solar PV Plant Digital Twin</h4>
<p><img src="Modelon_Social_Engie_1200_627_v2.jpg" alt="Modelon pic"></p>

<p>Learn how ENGIE successfully collaborated with Modelon to develop a digital twin for predictive maintenance - to monitor performance, anticipate failures, and schedule maintenance. Download the case study <a href="https://tinyurl.com/modelon-engie">here</a>.</p>

<h4 id="customer-story-subaru-implements-model-based-development-with-help-from-modelon">Customer Story: SUBARU implements Model-Based Development With Help From Modelon</h4>
<p><img src="Subaru_1200_627_ENG_v3.jpg" alt="Modelon pic"></p>

<p>Learn how SUBARU’s Electrified Drivetrain Development team successfully implemented model-based development methodologies. Read the full interview <a href="https://tinyurl.com/modelon-subaru">here</a>.</p>

<h4 id="modelon-blog-more-electric-aircraft">Modelon Blog: More Electric Aircraft</h4>
<p><img src="Blog_More_Electric_Aircraft_1280_628_v7.jpg" alt="Modelon pic"></p>

<p>This blog introduces the More Electric Aircraft concept and how modeling and simulation are shaping the way vehicle sub-systems are designed and integrated. Read more <a href="https://tinyurl.com/modelon-more-electric-aircraft">here</a>.</p>

<h4 id="modelon-blog-aircraft-landing-gear-design">Modelon Blog: Aircraft Landing Gear Design</h4>
<p><img src="Aircraft-Landing-Gear-Design_1200_628_7.jpg" alt="Modelon pic"></p>

<p>This blog focuses on building and designing aircraft landing gear using Modelon Impact and the integrated Aircraft Dynamics Library. Read more <a href="https://tinyurl.com/modelon-aircraft-landing-gear">here</a>.</p>

<h4 id="modelon-blog-multi-body-vehicle-dynamics">Modelon Blog: Multi-Body Vehicle Dynamics</h4>
<p><img src="Blog_Chassis_1200_627_v1_3.jpg" alt="Modelon pic"></p>

<p>This blog focuses on the modeling and simulation of chassis in Modelon Impact. Modelon Impact’s steady-state solver and multi-execution capabilities make it possible to achieve steady-state analysis with speed and precision for multi-body vehicle dynamics. Read more <a href="https://tinyurl.com/modelon-chassis">here</a>.</p>

</section>
{{</rawhtml>}}