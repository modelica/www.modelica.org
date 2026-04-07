---
title: Newsletter 2023-02
---

# Modelica Association Newsletter 2023-02

issued on 10 July 2020

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
          <p><img src="Modelica.svg" alt="Modelica newsletter 2023-02 logo"></p>

<h1 class="no_toc" id="table-of-contents">Table of contents</h1>

<ul id="markdown-toc">
  <li><a href="#letter-from-the-board" id="markdown-toc-letter-from-the-board">Letter from the Board</a></li>
  <li><a href="#modelica-association" id="markdown-toc-modelica-association">Modelica Association</a>    <ul>
      <li><a href="#fmi-news" id="markdown-toc-fmi-news">FMI news</a></li>
    </ul>
  </li>
  <li><a href="#related-projects" id="markdown-toc-related-projects">Related projects</a>    <ul>
      <li><a href="#map-efmi-new-website-tools-tutorial-and-members" id="markdown-toc-map-efmi-new-website-tools-tutorial-and-members">MAP eFMI: New Website, Tools, Tutorial and Members</a></li>
    </ul>
  </li>
  <li><a href="#conferences-and-user-meetings" id="markdown-toc-conferences-and-user-meetings">Conferences and user meetings</a>    <ul>
      <li><a href="#wolfram-virtual-technology-conference-2023" id="markdown-toc-wolfram-virtual-technology-conference-2023">Wolfram Virtual Technology Conference 2023</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#tlk-dave-new-version-2023-1" id="markdown-toc-tlk-dave-new-version-2023-1">TLK DaVE - New version 2023.1</a></li>
      <li><a href="#orchideo-124-easyssp-v1-2-6-now-available" id="markdown-toc-orchideo-124-easyssp-v1-2-6-now-available">orchideo | easySSP v1.2.6 now available</a></li>
      <li><a href="#just-released-system-modeler-13-3" id="markdown-toc-just-released-system-modeler-13-3">Just released: System Modeler 13.3!</a></li>
      <li><a href="#openmodelica-1-21-0" id="markdown-toc-openmodelica-1-21-0">OpenModelica 1.21.0</a></li>
      <li><a href="#modelon-updates" id="markdown-toc-modelon-updates">Modelon Updates</a></li>
    </ul>
  </li>
  <li><a href="#news-from-libraries" id="markdown-toc-news-from-libraries">News from libraries</a>    <ul>
      <li><a href="#upcoming-free-rotating-machinery-library" id="markdown-toc-upcoming-free-rotating-machinery-library">Upcoming - Free Rotating Machinery Library</a></li>
      <li><a href="#multi-domain-drone-modeling-with-the-new-open-source-drone-library-free" id="markdown-toc-multi-domain-drone-modeling-with-the-new-open-source-drone-library-free">Multi-Domain Drone Modeling with the New Open Source Drone Library (Free)</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>The <strong><a href="https://2023.international.conference.modelica.org/">International Modelica Conference 2023</a></strong> will take place
<strong>Mo. Oct. 9 - Wed. Oct. 11, 2023, in Aachen, Germany</strong>, as a <strong>face-to-face conference</strong>. 
The submitted papers and industrial user presentations are currently under review.<br>
Please note that the early bird registration deadline with reduced fees is the <strong>11th of August</strong>.<br>
There is still the possibility to apply for <strong>sponsorship and have a booth</strong> at the conference.<br>
For further information, contact <a href="mailto:mc15@eonerc.rwth-aachen.de">mc15@eonerc.rwth-aachen.de</a>.<br>
If you are interested to organize the next International Modelica Conference in 2025, please contact
the <a href="mailto:board@modelica.org">Modelica Association Board</a>.</p>

<p><strong><a href="https://specification.modelica.org/maint/3.6/">Version 3.6 of the Modelica Language</a></strong> was released. 
It contains new features such as <a href="https://specification.modelica.org/master/packages.html#multilingual-descriptions">multilingual descriptions</a>, 
<a href="https://specification.modelica.org/master/inheritance-modification-and-redeclaration.html#selective-model-extension">selective model extension</a>,
<a href="https://specification.modelica.org/master/inheritance-modification-and-redeclaration.html#removing-modifiers-break">removing modifiers</a>,
and 100+ minor improvements.
For all the details see the <a href="https://specification.modelica.org/master/modelica-revision-history.html#main-changes-in-modelica-3-6">release notes</a>.</p>

<p>Article <strong><a href="https://newsletter.modelica.org/2023-02/#fmi-news">FMI News</a></strong> provides latest news about FMI. In particular,
a maintenance release <a href="https://github.com/modelica/fmi-standard/releases/">FMI 3.0.1</a> with bugfixes and clarifications will soon be released.</p>

<p>The project web pages 
<a href="https://fmi-standard.org/">FMI</a>, 
<a href="https://ssp-standard.org/">SSP</a>, 
<a href="https://dcp-standard.org/">DCP</a>,
<a href="https://www.efmi-standard.org/">eFMI</a>,
are now based on the same, modern layout.
Work is in progress to change the Modelica Association website to this layout too.</p>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities, please 
follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.<br>
The deadline for articles for the next newsletter is Friday, November 10, 2023.</p>

<p>Martin Otter on July 9, 2023</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="fmi-news">FMI news</h2>

<div style="float: right">
  <p><img src="fmi_logo_horizontal.svg" alt="fmi-logo"></p>
</div>

<h4 id="maintenance-release-fmi-301">Maintenance release FMI 3.0.1</h4>

<p>A maintenance release FMI 3.0.1 with bugfixes and clarifications has been released, see https://github.com/modelica/fmi-standard/releases/. It is backwards compatible and does not intrduce new features.</p>

<h4 id="fmi-validation-webpage">FMI Validation webpage</h4>

<p>On the FMI Webpage an overview of free validation tools for FMUs is available, see https://fmi-standard.org/validation/.</p>

<h4 id="fmi-compatibility-information">FMI Compatibility Information</h4>

<p>The <a href="https://fmi-standard.org/tools/">FMI tools page</a> now provides additional information on how the tool vendors have tested their FMU import and export capabilities and standard compliance with other tools. Exporting tools also provide example FMUs, that can be tested by other importing tools. This information is provided on an external webpage or repository provided by the tool vendors themselves.</p>

<p>Tool vendors that provide this information will be marked with a yellow star and are listed onthe top of the list.</p>

<p><img src="FMI_tools_page.png" alt=""></p>

<p>(This replaces the <a href="https://github.com/modelica/fmi-cross-check">FMI Cross Check</a>, which has been archived)</p>

<p><em>This article is provided by MAP FMI</em></p>

<h1 id="related-projects">Related projects</h1>

<h2 id="map-efmi-new-website-tools-tutorial-and-members">MAP eFMI: New Website, Tools, Tutorial and Members</h2>
<p><img src="MAP-eFMI.png" alt="MAP eFMI" title="MAP eFMI" width="620px"></p>

<h4 id="map-efmi-website-launched">MAP eFMI Website Launched</h4>

<p>The <a href="https://www.efmi-standard.org/">official website</a> of the Modelica Association project <em>Functional Mock-up Interface for embedded systems</em> (MAP eFMI) is finally on air. Besides drafts of the upcoming standard, it provides a good overview of the eFMI technology, motivation, available tooling, documentation and introductory material, example eFMUs and a project organization overview.</p>

<p>The project now also provides a new public mailing list, <a href="https://groups.google.com/g/efmi-info"><code class="language-plaintext highlighter-rouge">efmi-info@googlegroups.com</code></a> (Google account required to join), to help newcomers to get in contact with us and started with eFMI.</p>

<h4 id="first-commercial-tool-releases">First Commercial Tool Releases</h4>

<p>The first commercial tools with support for eFMI are officially released and available on the market. Most are already well-known and established tooling in the physics modeling or embedded software domain, giving professionals a chance to plug-and-play with eFMI. Together, the now available commercial tooling covers the complete eFMI workflow from physics modeling in Modelica down to production code on dedicated embedded platforms. The interoperability has been extensively tested using the <a href="https://github.com/modelica/efmi-testcases">cross-check test suite provided by MAP eFMI</a>.</p>

<p>The now available tools, and their interaction along the eFMI workflow, are summarized in the following figure:</p>

<p><img src="MAP-eFMI-tools.png" alt="eFMI Commercial Tools" title="eFMI Commercial Tools" width="620px"></p>

<p>The newly released eFMI tools are (in alphabetic order):</p>

<ul>
  <li>
    <p><strong>AUTOSAR Builder</strong> by <a href="https://www.3ds.com/">Dassault Systèmes</a>: IDE for modeling, testing and validation of in-vehicle embedded systems for the <a href="https://www.autosar.org/">AUTOSAR Classic and Adaptive Platforms</a>, facilitating seamless integration with other AUTOSAR compliant tools based on the <a href="https://www.artop.org/">AUTOSAR Tool Platform (Artop)</a>. Enables the application of eFMI Production Code containers in AUTOSAR environments.</p>
  </li>
  <li>
    <p><strong>CATIA ESP</strong> by <a href="https://www.3ds.com/">Dassault Systèmes</a>: Embedded source code producer (ESP) on the <a href="https://www.3ds.com/3dexperience">3DEXPERIENCE® platform</a>, enabling the generation of eFMI Production Code containers with safety-critical, realtime capable, <a href="https://www.misra.org.uk/">MISRA C:2012</a> conforming C code from eFMI Algorithm Code containers.</p>
  </li>
  <li>
    <p><strong>Dymola</strong> by <a href="https://www.3ds.com/">Dassault Systèmes</a>: Modelica IDE for the acausal, equation-based modeling and simulation of complex multi-domain physics. Enables the generation of eFMI Algorithm Code containers (i.e., causal/algorithmic solutions) from acausal controller and virtual sensor models in Modelica.</p>
  </li>
  <li>
    <p><strong>TargetLink</strong> by <a href="https://www.dspace.com/">dSPACE</a>: Production code generator for highly efficient C code straight from MathWorks® <a href="https://www.mathworks.com/products/simulink.html">Simulink®</a>/<a href="https://www.mathworks.com/products/stateflow.html">Stateflow®</a> models, supporting early verification through built-in simulation and testing, certified for ISO 26262, ISO 25119 and IEC 61508, and with support for the <a href="https://www.autosar.org/">AUTOSAR Classic and Adaptive Platforms</a>. Enables the generation of eFMI Production Code containers with safety-critical, realtime capable, <a href="https://www.misra.org.uk/">MISRA C:2012</a> conforming C code from eFMI Algorithm Code containers.</p>
  </li>
  <li>
    <p><strong>TPT</strong> by <a href="https://piketec.com/">PikeTec</a>: IDE for testing ECU software and embedded control systems in all development phases such as model-in-the-loop (MiL testing), software-in-the-loop (SiL testing), processor-in-the-loop (PiL testing), hardware-in-the-loop (HiL testing), ECU testing and vehicle testing, supporting relevant safety standards, such as ISO 26262, and test assessment, reporting, management and requirements traceability. Enables the testing of eFMI Production Code containers with eFMI Behavioral Model containers in many well-known embedded execution environments.</p>
  </li>
</ul>

<h4 id="map-efmi-tool-releases">MAP eFMI Tool Releases</h4>

<p>MAP eFMI released two supporting open source tools for packaging and accessing eFMUs and their individual containers and for checking eFMUs for conformance with the <em>eFMI Standard</em>: the <a href="https://github.com/modelica/efmi-containermanager">eFMI Container Manager</a> and the <a href="https://github.com/modelica/efmi-compliancechecker">eFMI Compliance Checker</a>.</p>

<h4 id="efmi-tutorial-at-the-15th-international-modelica-conference-2023">eFMI Tutorial at the 15th International Modelica Conference 2023</h4>

<p>An introductory tutorial of eFMI tooling will be provided at the upcoming <a href="https://2023.international.conference.modelica.org/">15th International Modelica Conference 2023</a>. The tutorial will cover the whole eFMI workflow with a running example and give participants a hands-on chance to try eFMI integration in <a href="https://www.dymola.com">Dymola</a>, <a href="https://www.3ds.com/products-services/catia/">CATIA ESP</a>, <a href="https://www.dspace.com/en/pub/home/products/sw/pcgs/targetlink.cfm">TargetLink</a>, <a href="https://www.3ds.com/products-services/catia/products/autosar-builder/">AUTOSAR Builder</a> and <a href="https://piketec.com/tpt/">TPT</a> themselves.</p>

<h4 id="new-project-members">New Project Members</h4>

<p>Since its kickoff in 2021 with eleven founding members, four new organizations joined MAP eFMI (in alphabetic order): <a href="https://altair.com/">Altair Engineering Inc.</a>, <a href="http://www.ivh.co.kr/">Institute of Vehicle Engineering CO LTD</a>, <a href="https://www.mercedes-benz.com/">Mercedes-Benz AG</a> and <a href="https://www.merl.com/">Mitsubishi Electric Research Laboratories</a>.</p>

<p>The project is open for further membership applications. If you think your organization should be part of standardizing and leveraging on the <em>physics modeling to embedded software bridge</em> of the Modelica Association, please check our <a href="https://www.efmi-standard.org/media/resources/MAP-eFMI-application.pdf">membership application guidelines</a>.</p>

<p><strong>In any case, <a href="https://efmi-standard.org">check the new eFMI website</a> or contact us on our new public mailing list <a href="https://groups.google.com/g/efmi-info"><code class="language-plaintext highlighter-rouge">efmi-info@googlegroups.com</code></a>!</strong></p>

<p><em>This article is provided by Christoff Bürger (<a href="https://www.3ds.com">Dassault Systèmes</a>)</em></p>

<h1 id="conferences-and-user-meetings">Conferences and user meetings</h1>

<h2 id="wolfram-virtual-technology-conference-2023">Wolfram Virtual Technology Conference 2023</h2>
<p><img src="Wolfram-conference.png" alt="Alt text" title="Wolfram Virtual Technology Conference 2023"></p>

<p><em>Participate and meet us during the Wolfram Virtual Technology Conference.</em> Join the Wolfram Virtual Technology Conference to explore how System Modeler and the rest of Wolfram’s technology stack can empower your organization’s research, development and deployment. At this conference, new Modelica libraries will be presented.</p>

<p>Learn from users, presenters and developers. Schedule a one-on-one meeting with our experts to get your questions answered.</p>

<ul>
  <li>Dates: November 1–3</li>
</ul>

<p><a href="https://www.wolfram.com/events/technology-conference/2023/">Click here</a> to read more about the conference.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="tlk-dave-new-version-2023-1">TLK DaVE - New version 2023.1</h2>
<p>DaVE is a visualization software for post-processing and online display of dynamic data sets. It is widely used to visualize results of Modelica based simulations.</p>

<p>DaVE offers a wide range of both standard plot instruments, as well as thermodynamic state diagrams. Amongst others, pressure enthalpy (ph), temperature enthalpy (Th) diagrams of refrigerants, but also hx-charts for moist air can be used. For these thermodynamic diagrams, the cycle points from refrigerant and heat pump cycles or ventilation and air conditioning systems can automatically be loaded.
Additionally DaVE supports the creation of P&amp;I flow diagrams. The connecting lines between the individual symbols can be linked with variables and dynamically change their width and direction. DaVE can also read the object-diagram information from Modelica and automatically generate the P&amp;I diagrams.</p>

<p>This makes DaVE a powerful and helpful application for Modelica based simulations. With the new version 2023.1, TLK offers a free Lite Version which allows to experience and evaluate the features of DaVE.</p>

<p><img src="dave0723.png" alt="DaVE Example display"></p>

<p>Version 2023.1 of DaVE includes the following new features:</p>
<ul>
  <li>New documentation including tutorials for most commonly used features</li>
  <li>New fluid property data, using TILMedia 3.14</li>
  <li>Possibility to show current values on y-axis and in legend</li>
  <li>New licensing scheme with only one license including all features</li>
</ul>

<p>For further information see <a href="https://dave.tlk-thermo.com">dave.tlk-thermo.com</a> or contact us at <a href="mailto:dave@tlk-thermo.com">dave@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Mario Schlickhoff <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="orchideo-124-easyssp-v1-2-6-now-available">orchideo | easySSP v1.2.6 now available</h2>
<p><img src="easySSP-1_2_8.png" alt="alt text" title="orchideo | easySSP v1.2.6">
orchideo | easySSP v1.2.6 is now available and comes with an updated UI for Parameter editing and new Simulation features.</p>

<h4 id="enhanced-parameterization-and-modelling-suggestions">Enhanced Parameterization and Modelling Suggestions</h4>

<p><img src="parameter_ui_update.png" alt="alt text" title="New easySSP Process Edition">
The Model Editor in easySSP has seen significant updates for improved user experience. The Parameter Settings interface has been reworked for ease of use and efficiency, providing a more straightforward approach to parameter management.</p>

<p>Furthermore, the Model Editor now includes a new suggestion feature. As users build their models, easySSP intelligently proposes potential connectors and parameters based on the current model state for a  more effective and faster system architecture development.</p>

<h4 id="simulation-check-and-windows-fmi-support">Simulation Check and Windows FMI Support</h4>
<p>We are pleased to announce that easySSP’s Cloud Simulation now supports Windows FMI components in addition to Linux and Source Code FMUs. A new pre-simulation check examines your system prior to simulation, ensuring that all requirements for a successful simulation are met.</p>

<p>easySSP is completely based on open standards like FMI, SSP and SSP Traceability. Check out <a href="https://easy-ssp.com">easy-ssp.com</a> for more information!</p>

<p><em>This article is provided by Gregor Hermann, Peter Lobner <a href="https://www.exxcellent.de/">eXXcellent solutions</a></em></p>

<h2 id="just-released-system-modeler-13-3">Just released: System Modeler 13.3!</h2>
<p><img src="SystemModeler13-3.png" alt="Alt text" title="System Modeler 13.3"></p>

<p>The new version comes with features that will accelerate your model development workflows. Some of the key features are:</p>
<ul>
  <li><em>Distribute Libraries</em>: Ensure smooth installation of your libraries including handling of licenses, assets and dependencies.</li>
  <li><em>Interact with Real-Time Simulations</em>: Manipulate parameters and inputs to see their effects on the simulation in real time.</li>
  <li><em>Expanded Simulation Analysis</em>: Analyze model results by plotting any expression of model variables. Store your expressions and FFTs as model plots for reuse later.</li>
  <li><em>Expanded System Models in the Cloud</em>: Add time series, interpolation curves and noise generators to your models in the Wolfram Cloud.</li>
  <li><em>Automatically Calibrate Model Parameters</em>: Automatically calibrate model parameters using measured data in Wolfram Language.</li>
  <li><em>Build &amp; Simulate Concurrently</em>: Continue working on models and experiments even while validating, building and simulating models.</li>
  <li><em>Native Computation Support for macOS ARM Platform</em>: 30 to 50% reduction in build and simulation time on Apple Silicon/macOS ARM platform.</li>
</ul>

<p><a href="https://www.wolfram.com/system-modeler/what-is-new">Click here</a> to see more examples and videos on the latest System Modeler features.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="openmodelica-1-21-0">OpenModelica 1.21.0</h2>
<p>Version 1.21.0 of OpenModelica was released on Apr 18 2023, with the goal of getting the release schedule back to the originally planned
two yearly releases, one in early spring after the OpenModelica Workshop, and one in autumn.</p>

<p>Version 1.21.0 does not contain major new features, but rather a number of incremental improvements
and bugfixes that substantially improved the software quality. Overall, <a href="https://github.com/OpenModelica/OpenModelica/issues?q=is%3Aissue+milestone%3A1.21.0+is%3Aclosed">135 issues</a>
were addressed.</p>

<p>Version 1.21.0 also allows to turn on the new instance-based API from the Tools | Options menu of OMEdit. This enables the GUI
to use the new frontend to get updated and correct information for rendering features such as conditional connectors,
parameter-depending dialog settings, parameter setting in replaceable classes, etc. It is also much faster than the previous
infrastructure, resulting in an improved user experience. If you are interested in experimenting
with this feature, we suggest to use the latest 1.22.0-dev nightly build, since a lot of further improvements and fixes were
applied since the release. We plan on making the new instance-based API the default choice with the forthcoming 1.22.0 release,
scheduled for Q4 2023.</p>

<p>The full 1.21.0 release notes are available <a href="https://github.com/OpenModelica/OpenModelica/releases/tag/v1.21.0">here</a>.</p>

<p><em>This article is provided by Francesco Casella, Adeel Asghar <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h2 id="modelon-updates">Modelon Updates</h2>
<p><img src="Modelon_Orange_400.jpg" alt=""></p>

<p>Modelon is revolutionizing the engineering design industry by offering technologies and services that enable customers to leverage system simulation. Modelon’s flagship product, <a href="https://modelon.com/modelon-impact/">Modelon Impact</a>, is a cloud system simulation platform that helps engineers virtually design, analyze, and simulate physical systems.</p>

<p>Visit <a href="https://modelon.com/">https://modelon.com</a> for more information or follow on <a href="https://www.linkedin.com/company/modelon">LinkedIn.</a></p>

<h4 id="modelon-library-updates">Modelon Library Updates</h4>

<p>As part of Modelon’s 2023.2 release, Modelon has made significant updates to its set Modelica libraries. The highlights below correspond to individual <a href="https://modelon.com/modelon-library-suite-modelica-libraries/">Modelica libraries</a> that Modelon offers as part of Modelon Impact.</p>

<h5 id="thermal-power-library">Thermal Power Library</h5>

<ul>
  <li>
    <p><strong>One-factor Scaling of Combined Cycle Plant Models</strong> Users will now be able to adapt the size of their combined cycle plant models within a single parameter. Because every plant is unique, this capability eliminates the need for system modelers to recreate a system model. A user can simply manipulate the size of a pre-existing system model while ensuring that the resized plant matches important variables such as the temperature and pressure of the relevant plant. In turn, users are able to get relatively accurate answers within minutes.</p>
  </li>
  <li>
    <p><strong>Hydrogen Blending of a Combined Cycle Gas Turbines</strong> This capability allows you to replace natural gas with hydrogen gas in a combined cycle gas turbine. This is especially useful for users who’d like to evaluate design architectures such as controls design and heat recovery steam generator design with the integration of hydrogen fuel. Performance studies and carbon dioxide reduction studies are also possible with this capability.</p>
  </li>
  <li>
    <p><strong>Integrated Carbon Capture Plant with Combined Cycle Plant Model</strong> This model includes a carbon capture plant and combined cycle plant integrated together. This integrated approach allows for complete optimization and flexibility of plants that are designed accordingly.</p>
  </li>
</ul>

<h5 id="vapor-cycle-library">Vapor Cycle Library</h5>

<ul>
  <li>
    <p><strong>Air-to-Air Source Heat Pump Model</strong> An air-to-air heat pump model is now available as part of the Vapor Cycle Library. This allows users to model and simulate applications related to the design and operation of residential heat pumps.</p>
  </li>
  <li>
    <p><strong>Stacking with Fin-on-Tube Heat Exchanger</strong> The existing fin-on-tube heat exchanger model within the Vapor Cycle Library has been improved to allow stacking and multi-circuit modeling. This is particularly useful for users using Modelon Impact for HVAC applications.</p>
  </li>
  <li>
    <p><strong>Hydrogen Storage Tank Model Package for Aircraft</strong> Modelon offers a pre-built hydrogen storage tank model in Vapor Cycle Library for hydrogen aircraft applications. This package includes a subpackage dedicated for tank sizing, which uses methodologies that take into consideration mechanical strength, structural design, heat transfer and dormancy. This package also includes example models that use the hydrogen tank for dynamic simulation. These example models comprise of a detailed tank filling experiment, a sealed tank experiment, and an evaporation of liquid cryogenic hydrogen experiment with a heat exchanger.</p>
  </li>
</ul>

<h5 id="air-conditioning-library">Air Conditioning Library</h5>

<ul>
  <li>
    <p><strong>Automatic Summation of Refrigerant Volumes and Mass</strong> A new capability to automatically sum refrigerant volumes and masses has been introduced.  This fully automatic capability streamlines the process for running fixed charge simulations and monitoring charge in the system.</p>
  </li>
  <li>
    <p><strong>Non-Ideal Sensors</strong> A package of non-ideal sensor models is now included with the library to support model-based controls development.  The non-ideal sensors can flexibly add sensor dynamics, failure, and analog-to-digital conversion effects to sensor outputs to more accurately mimic real sensor signals.  An example experiment showing the various non-ideal effects is also included.</p>
  </li>
</ul>

<h5 id="vehicle-dynamics-library">Vehicle Dynamics Library</h5>

<ul>
  <li><strong>Support for rFpro HD TERRAIN SERVER</strong> Modelon’s Vehicle Dynamics Library now supports rFpro’s TERRAIN SERVER detailed road surface model.  This allows for high-definition surface scan data (such as LiDAR) to be used directly by the vehicle model for tire and chassis contacts.</li>
</ul>

<h5 id="electrification-library">Electrification Library</h5>

<ul>
  <li>
    <p><strong>New Fuel Cell Example</strong> A new example showing how to couple a fuel cell with Modelon’s Electrification Library is included.  This first example illustrates coupling principles with the Electrification Library using a simplified fuel cell representation.</p>
  </li>
  <li>
    <p><strong>Getting Started Guides and Training</strong> A number of improvements and enhancements have been made to the Getting Started guides in the library.  In addition, a one-day formal training for Modelon’s Electrification Library is now available.</p>
  </li>
</ul>

<h5 id="other-highlights">Other Highlights</h5>

<ul>
  <li><strong>Tabular Media for Refrigerant Mixtures</strong> Modelon Impact users and Modelon library users will now have access to a wider range of refrigerant mixtures that can be used with Modelon’s Vapor Cycle Library, Heat Exchanger Library, Air Conditioning Library, and Thermal Power Library. With the ability to generate mixtures specific to a customer’s use case, users will be able to run simulations up to four times faster than current simulation speeds.</li>
</ul>

<p>For release notes on all Modelon libraries, please visit the <a href="https://help.modelon.com/latest/">Help Center</a>. For information on Modelon’s libraries, <a href="https://modelon.com/modelon-library-suite-modelica-libraries/">click here</a>.</p>

<h4 id="blog---integrating-carbon-capture-and-sequestration-ccs-with-natural-gas-combined-cycle-power-plants">Blog - Integrating Carbon Capture and Sequestration (CCS) with Natural Gas Combined Cycle Power Plants</h4>

<p><a href="[https://modelon.com/support/heat-pump-technology-adapting-to-the-future-with-system-simulation/](https://modelon.com/blog/carbon-capture-sequestration-and-natural-gas-combined-cycle-power-plant-integration/)"><img src="Modelon_Blog_CCS_Combined_Power_Plant_1200_v2.jpg" alt="Blog CCS with Natural Gas Combined Cycle Power Plants" width="600px"></a></p>

<p>In this blog, learn how the role of a natural gas combined cycle power plant with carbon capture and sequestration can reduce global emissions of greenhouse gas. <a href="https://modelon.com/blog/carbon-capture-sequestration-and-natural-gas-combined-cycle-power-plant-integration/">Read the blog</a>.</p>

<h4 id="event---model-based-development-seminar-series-with-modelon-impact">Event - Model-Based Development Seminar Series with Modelon Impact</h4>

<p><a href="[https://modelon.com/support/modernizing-fighter-aircraft-with-open-standard-technology/](https://modelon.com/model-based-development-workshop-series-2023/)"><img src="Modelon_KK_Seminar_ENG_1200_v4.jpg" alt="Modelon K.K. Seminar" width="600px"></a></p>

<p>In this in-person seminar series organized by Modelon K.K, Dr. Yutaka Hirano will provide step-by-step explanations and hands-on practice using Modelica fundamentals and application methods, details of the Modelica grammar, an overview of Modelica processing systems, and examples of Modelica applications to model-based development and system design. <a href="https://modelon.com/model-based-development-workshop-series-2023/">Learn more and register here</a>.</p>

<p><em>This article is provided by Swati Tyagi, Modelon (https://modelon.com)</em></p>

<h1 id="news-from-libraries">News from libraries</h1>

<h2 id="upcoming-free-rotating-machinery-library">Upcoming - Free Rotating Machinery Library</h2>
<p><img src="SystemModeler_RotatingMachinery.png" alt="Alt text" title="Rotating Machinery library"></p>

<p>The Rotating Machinery library allows you to test novel designs or identify faults in rotating machineries such as turbines, motors and drivelines. Within the library, you’ll find fundamental components of a rotating machinery, such as gears, shafts and bearings. These components are designed to be flexible, enabling you to observe deformations and accurately capture real-world responses under different loads.</p>

<p>Rotating Machinery library will be released later this month. <a href="https://www.wolfram.com/system-modeler/libraries">Click here</a> to go the System Modeler Modelica library store.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="multi-domain-drone-modeling-with-the-new-open-source-drone-library-free">Multi-Domain Drone Modeling with the New Open Source Drone Library (Free)</h2>
<p><img src="Dronepackage.png" alt="Alt text" title="Drone Library"></p>

<p>Based on research responding to the growing need of simulation-based studies in Unmanned Aerial Vehicle (UAV) [1, 2], <code>the DroneLibrary</code>, aggregates and streamlines the authors’s previous efforts in the area providing multi-domain models to represent each sub-system of drones.</p>

<p>This library contains examples of the quadcopter model at multiple levels of detail under different operating conditions. The component models are developed in a manner to easily replace them for different simulation applications, creating replaceable models that are easy to maintain with broad application scope.</p>

<p><img src="DroneLib_Example1.png" alt="Alt text" title="Drone Library"></p>

<p>Some of the key features are:</p>
<ul>
  <li>Component models allowing the modeling of multi-copter configurations beyond the provided quadcopter examples.</li>
  <li>A number of configurations allowing to compare different electric power train designs.</li>
  <li>Numerous example models showing a variety of drone configurations, including popular consumer drones.</li>
  <li>Examples exploiting DLR’s Visualization Library and the Modelica_DeviceDrivers Library for enhanced visualization and immersive user-interaction.</li>
</ul>

<p>The library has been developed in Dymola. The library was also tested with OpenModelica where currently the models pass checks but may not simulate, contributions increasing compatibility with OpenModelica are welcome as pull requestions online: <a href="https://github.com/ALSETLab/Modelica-Drone-3D-FMI">https://github.com/ALSETLab/Modelica-Drone-3D-FMI</a>.</p>

<p><a href="https://github.com/ALSETLab/Modelica-Drone-3D-FMI/releases">Click here to download the library</a>.</p>

<p>References:</p>

<p>[1] M. Podlaski, et al (2020-10). “UAV Dynamic System Modeling and Visualization using Modelica and FMI”. In: VFS 76th Annu. Forum &amp; Tech. Display. doi : 10 . 4050 / F - 0076 -
2020-16289., pp. 1058–1072. <a href="https://www.researchgate.net/publication/344595743_UAV_Dynamics_and_Electric_Power_System_Modeling_and_Visualization_using_Modelica_and_FMI">Available online</a>.</p>

<p>[2] M. Podlaski, et al (2021). “Towards a VR-Based Early Design Interaction for Electric Vertical Take-Off &amp; Landing (eVTOL) Cyber-Physical Models”. In: 2021 NAFEMS World
Congr. NAFEMS. <a href="https://www.researchgate.net/publication/372128766_Towards_VR-Based_Early_Design_Interaction_for_electric_Vertical_Take-Off_Landing_eVTOL_Cyber-Physical_Models">Available online</a>.</p>

<p><em>This article is provided by Luigi Vanfretti <a href="https://alsetlab.github.io">Rensselaer Polytechnic Institute</a></em></p>

<h1 id="education-news">Education news</h1>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2022/05/Claytex-TECHNIA-COMPANY-RGB-217-90.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.linkedin.com/showcase/our-technical-blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<h4 id="use-of-the-model-management-library">Use of the Model Management Library</h4>

<p>With the installation of Dymola there is the Model Management library, which allows users to be able to gain data about models and even create and modify models. This can be a very powerful and useful tool, if used correctly. This post will go through a couple of examples and a favorite use of the library.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/06/Model-Management.png" alt="Model Management Image 1" title="Model Management Library Image1"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/use-of-the-model-management-library/">here</a></p>

<h4 id="using-physical-connectors-with-an-fmu">Using physical connectors with an FMU</h4>

<p>This article has a look at how to interface with FMU blocks that make use of physical connectors, using a simple electrical circuit that is split into two FMUs that interface with electrical connectors.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/06/Physical-Connectors-with-FMU.png" alt="Simple Electrical Circuit Image2" title=" Physical Connectors Image2"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/using-physical-connectors-with-an-fmu/">here</a></p>

<h4 id="back-to-the-future-flying-delorean">Back to the Future Flying DeLorean</h4>

<p>We are always looking for interesting combinations of libraries and good demonstrations of novel systems. We have many useful examples within our libraries demonstrating that, such as the use of the hydrogen library with VeSyMA or lots of different interactions to EPTL or HVAC. But sometimes we like to see what can be done that’s slightly outside the realm of normal applications.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/06/Delorean.png" alt="DeLorean Image 3" title="DeLorean Image3"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/back-to-the-future-flying-delorean/">here</a></p>

<h4 id="energy-systems-catapult-has-partnered-with-claytex">Energy Systems Catapult has partnered with Claytex</h4>

<p>Energy Systems Catapult has partnered with Claytex to dramatically shorten the time it takes to run their Home Energy Dynamics (HED) toolkit. New simulations can simulate decarbonisation pathways for domestic buildings, enabling engineers, policymakers, and housing providers to identify the most cost-effective energy-saving actions.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/06/ESC-Claytex.png" alt="ESC &amp; Claytex Image 4" title="ESC &amp; Claytex Image4"></p>

<p>Read the complete article <a href="https://www.claytex.com/news-and-events/energy-engineering-interview-claytex-and-energy-systems-catapult/">here</a></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

</section>
{{</rawhtml>}}