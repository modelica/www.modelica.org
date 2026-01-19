---
title: Newsletter 2021-01
---

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
  <li><a href="#related-projects" id="markdown-toc-related-projects">Related projects</a>    <ul>
      <li><a href="#map-efmi-kickoff" id="markdown-toc-map-efmi-kickoff">MAP eFMI Kickoff</a></li>
      <li><a href="#fmi-3-0beta-1-pre-release" id="markdown-toc-fmi-3-0beta-1-pre-release">FMI 3.0beta.1 pre-release</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#openmodelica-1-17-0-released" id="markdown-toc-openmodelica-1-17-0-released">OpenModelica 1.17.0 released</a></li>
      <li><a href="#modelon-impact-2021-0-release" id="markdown-toc-modelon-impact-2021-0-release">Modelon Impact 2021.0 Release</a></li>
      <li><a href="#announcing-dymola-2022" id="markdown-toc-announcing-dymola-2022">Announcing Dymola 2022</a></li>
    </ul>
  </li>
  <li><a href="#news-from-libraries" id="markdown-toc-news-from-libraries">News from libraries</a>    <ul>
      <li><a href="#tlk-til-suite-new-version-3-10-0" id="markdown-toc-tlk-til-suite-new-version-3-10-0">TLK TIL Suite - New version 3.10.0</a></li>
      <li><a href="#simtek-single-phase-traction-library-new-version-1-0" id="markdown-toc-simtek-single-phase-traction-library-new-version-1-0">SimTek Single Phase Traction Library - New version 1.0</a></li>
      <li><a href="#simtek-aircraft-electrical-system-library-new-version-1-0" id="markdown-toc-simtek-aircraft-electrical-system-library-new-version-1-0">SimTek Aircraft Electrical System Library - New version 1.0</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#new-from-modelon-blog" id="markdown-toc-new-from-modelon-blog">New from Modelon Blog</a></li>
      <li><a href="#an-e-book-modelica-by-application-power-systems-v0-3" id="markdown-toc-an-e-book-modelica-by-application-power-systems-v0-3">An E-book (Modelica by Application – Power Systems V0.3)</a></li>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>the <a href="https://2021.international.conference.modelica.org/">International Modelica Conference will take place on Mo. Sept. 20 - Fr. Sept. 24, 2021</a>. 
The conference is a pure virtual/online conference. The conference is <strong>free</strong>, but you must register in order to participate. 
The conference will take place partially in the morning and partially in the afternoon with respect to the CET time zone, 
to give people from different time zones the possibility to participate. The <a href="https://2021.international.conference.modelica.org/call2021.html">call-for-papers page</a> 
is open  and you are encouraged to submit <strong>full scientific papers</strong>, <strong>extended abstracts for industrial user presentations</strong> and/or proposals
for <strong>tutorials</strong> and <strong>vendor sessions</strong>. The industrial user
presentations should be related to existing or planned Modelica Association standards (Modelica language, FMI, SSP, DCP, eFMI). 
Final deadline for scientific papers submissions is <strong>April 26, 2021</strong> and for industrial user presentations <strong>June 15, 2021</strong>.
Note, the conference will be financed solely via <strong>sponsoring</strong>. So, please consider to contribute.</p>

<p>The new Modelica Association Project <strong>eFMI</strong> (FMI for embedded systems) has been accepted by the Modelica Association members. 
This exciting new project is orthogonal to FMI, by standardizing various interfaces for tool chains to
transform physics-based models (say, a Modelica model) to production code on embedded systems, in particular
on automotive electronic control units. An alpha release of eFMI was developed in the 
<a href="https://emphysis.github.io/">ITEA3 project EMPHYSIS</a>, together with 13 tool prototypes.
The tool chains have been tested with 200 <a href="https://www.misra.org.uk/">MISRA-C</a> compliant C-Codes generated from 
40 Modelica/Amesim models and evaluated with 11 industrial use cases. Once eFMI is released and
eFMI compliant tools are available, there will be the great opportunity to 
significantly reduce cost and time for the software development of
<strong>advanced, physics-based control and diagnosis functions on embedded devices</strong>.
More details are given in the <a href="#map-efmi-kickoff">eFMI article below</a>.</p>

<p>The <a href="https://github.com/modelica/ModelicaAssociationCLA">Modelica Association Contributor License Agreement is now publicly on GitHub</a>
in markdown format. The release contains the <a href="https://github.com/modelica/ModelicaAssociationCLA/releases/download/1.1.1/ModelicaAssociationCLA_1.1.1.pdf">pdf-version</a>
that was automatically generated from the markdown version. In case, you think improvements/changes are needed,
submit an issue or pull request.</p>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities,
please follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.
The deadline for articles for the next newsletter is Fr. August 13, 2021.</p>

<p>Martin Otter on April 17, 2021</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="related-projects">Related projects</h1>

<h2 id="map-efmi-kickoff">MAP eFMI Kickoff</h2>
<p><img src="map-efmi-kickoff.png" alt="eFMI Kickoff" title="eFMI Kickoff" width="620px"></p>

<h4 id="map-efmi-launched">MAP eFMI Launched</h4>

<p>The Modelica Association project <em>Functional Mock-up Interface for embedded systems</em> (MAP eFMI) has been officially launched. Its mission is to publish, maintain, further improve and promote the eFMI standard, a new <em>physics modeling to embedded software bridge</em> successfully developed and tested in the now finished <a href="https://itea3.org/project/emphysis.html">ITEA3 research project EMPHYSIS</a>.</p>

<p>An overview of EMPHYSIS results, developed tooling, an alpha draft of the eFMI standard and an example eFMU can be found on the <a href="https://emphysis.github.io/">EMPHYSIS webpage</a>; it also provides a <a href="https://emphysis.github.io/pages/downloads/emphysis-itea3-review-slides-excerpt.pdf">comprehensive set of final review slides</a>, motivating eFMI and summarizing the tooling maturity and demonstrators achieved in the EMPHYSIS project.</p>

<p>Within the next months, the final eFMI specification, promotion material and official Modelica library with test scenarios for crosschecking eFMI tooling will be released by MAP eFMI under the umbrella of the <a href="https://github.com/modelica">Modelica GitHub group</a> and its new <a href="https://github.com/orgs/modelica/teams/map-efmi">team MAP-eFMI</a>.</p>

<h4 id="project-members">Project Members</h4>

<p>MAP eFMI has eleven founding members, all experienced from the EMPHYSIS project, convinced of the future impact of the eFMI standard and obliged to contribute to, and direct, its future development.</p>

<p>The steering Committee members  are (in alphabetic order): Dassault Systèmes, DLR-SR, dSPACE GmbH, ETAS GmbH, ESI ITI GmbH, Modelon AB, Robert Bosch GmbH.</p>

<p>The Advisory Committee members are (in alphabetic order): Elektronische Fahrwerksysteme GmbH, Open Source Modelica Consortium, PikeTec GmbH, Siemens Digital Industries Software.</p>

<p><strong>Project leader:</strong> Christoff Bürger (Christoff.Buerger@3ds.com)</p>

<p><strong>Deputy project leader:</strong> Hubertus Tummescheit (Hubertus.Tummescheit@modelon.com)</p>

<h4 id="call-for-members">Call for Members</h4>

<p>The project is open for further membership applications. If you think your organization should be part of standardizing and leveraging on the <em>physics modeling to embedded software bridge</em> of the Modelica Association, please contact the project leader or deputy project leader.</p>

<p><strong>In any case, <a href="https://emphysis.github.io/pages/downloads/emphysis-itea3-review-slides-excerpt.pdf">check the eFMI overview slides</a>!</strong></p>

<p><em>This article is provided by Christoff Bürger (<a href="https://www.3ds.com">Dassault Systèmes</a>)</em></p>

<h2 id="fmi-3-0beta-1-pre-release">FMI 3.0beta.1 pre-release</h2>

<div style="float: right">
  <p><img src="fmi_logo.png" alt="fmi-logo"></p>
</div>

<h4 id="fmi-30beta1-pre-release">FMI 3.0beta.1 pre-release</h4>

<p>The FMI Steering Committee has decided to enter the beta phase of the FMI 3.0 development.
This reflects the stabilization of the FMI 3.0 API and schema files in the alpha phase.
Tool vendors are encouraged to start or intensify prototyping of FMI 3.0 support now.
The FMI 3.0beta.1 pre-release is available <a href="https://github.com/modelica/fmi-standard/releases">here</a>.</p>

<p><em>This article is provided by <a href="https://fmi-standard.org/">MAP FMI</a></em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="openmodelica-1-17-0-released">OpenModelica 1.17.0 released</h2>
<p>We are happy to announce that OpenModelica 1.17.0 was released on 23 March 2021.</p>

<h4 id="new-frontend">New Frontend</h4>

<p>After three years of development work, the new frontend is now used by default by all the tools of the OpenModelica suite, 
providing faster code generation time and improved coverage of the Modelica language features.</p>

<h4 id="improved-user-experience-under-windows">Improved user experience under Windows</h4>

<p>The Windows version of the OMEdit GUI was substantially improved in terms of graphics rendering and GUI responsiveness. The use
of clang instead of gcc to compile C code also provides much shorter compilation time of models.</p>

<h4 id="support-of-msl-400">Support of MSL 4.0.0</h4>

<p>OpenModelica and OMEdit now support Modelica Standard Library 3.2.3 and 4.0.0. There are currently 
two main limitations with MSL 4.0.0: clocked components are still not fully reliable, and automatic conversion scripts are not
yet available. We plan to resolve these two issues with the next release 1.18.0, due this fall.</p>

<p>The tool can be downloaded from the <a href="https://openmodelica.org">OpenModelica website</a>. For further details, please check the <a href="https://trac.openmodelica.org/OpenModelica/wiki/ReleaseNotes/1.17.0">1.17.0 Release Notes</a></p>

<p><em>This article is provided by <a href="https://openmodelica.org/">Francesco Casella</a></em></p>

<h2 id="modelon-impact-2021-0-release">Modelon Impact 2021.0 Release</h2>
<p><img src="mi_2021.png" alt="Modelin impact">
Modelon is pleased to announce the release of Modelon Impact 2021.0. This release delivers significant improvements and critical features that are accessible to current and new subscribers. View the release <a href="https://www.modelon.com/products-services/modelon-inside/">here</a>. 
For documentation and installation support, <a href="mailto:support@modelon.com">contact our team</a>.</p>

<p><em>This article is provided by Kenzie Maurice (<a href="https://www.modelon.com/">Modelon</a>)</em></p>

<h2 id="announcing-dymola-2022">Announcing Dymola 2022</h2>
<p>We are delighted to announce that Dymola 2022 will be available in May 2021.</p>

<h4 id="developing-models">Developing models</h4>

<p>Dymola 2022 supports the most up-to-date specifications, the Modelica language 3.5 and the Modelica Standard Library 4.0.</p>

<p>When exporting FMUs from Dymola, it is now possible to select individually which variables or parameters should be exposed to the outside. When importing an FMU it is also possible to select which variables will be exposed in the Modelica model.</p>

<h4 id="simulation">Simulation</h4>

<p>The maximum runtime for a simulation can be set. This will abort any run-away simulation due to slow convergence or incorrect external code. Steady-state initialization has been improved for common models, and there is a new mode to terminate dynamic simulation before the stop time if steady state has been reached.</p>

<p>Plotting support has been extended with bar graphs and area plots (filling the area under the curve). It is possible to open an external file with PNG, SVG or active HTML content inside Dymola; the image shows a plot generated in Python with plotly, which is active and allows zooming.</p>

<p><img src="Dymola-plot-external.png" alt="Active HTML diagram shown in Dymola"></p>

<h4 id="environment">Environment</h4>

<p>Dymola 2022 supports compilation of generated C code using WSL (Windows Subsystem for Linux). Installing Microsoft’s WSL allows installation of a Linux operating system and gives access to its compilers directly from the Dymola session under Windows. Cross-compilation of code facilitates FMUs containing both Windows and Linux binaries.</p>

<p>Running Dymola for Linux natively under WSL is also possible, using a Remote Desktop connection.</p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h1 id="news-from-libraries">News from libraries</h1>

<h2 id="tlk-til-suite-new-version-3-10-0">TLK TIL Suite - New version 3.10.0</h2>

<div style="float: right">
  <p><img src="tlk-tilsuite-logo.png" alt="tlk-tilsuite logo"></p>
</div>

<p>The TIL Suite is a comprehensive Modelica library for stationary and transient simulations of thermodynamic systems.
In April the TIL Suite 3.10.0 will be released with the following improvements:</p>

<ul>
  <li>TIL, TILMedia and add-on libraries are compatible with Modelica Standard Library 4.0.0</li>
  <li>In cross-flow heat exchangers with moist air, inhomogeneous flow due to e.g. water condensation or icing can be considered</li>
  <li>Some pressure drop and heat transfer correlations have been numerically improved and become more robust</li>
  <li>In TIL, many summary expansions and more consistent naming have been made. This requires an automatic conversion to be performed during the model upgrade to TIL 3.10 &amp; Modelica 4</li>
</ul>

<p>Besides the TIL release the following models are available in add-on packages:</p>

<ul>
  <li>Hydrogen refueling systems with a detailed vehicle pressure vessel type III or type IV</li>
  <li>Hot water tanks as in domestic buildings for heating and hot water supply</li>
</ul>

<p>For further information see <a href="https://www.tlk-thermo.com/index.php/en/til-suite">www.tlk-thermo.com</a>, <a href="https://www.tlk-thermo.com/images/tlk/content/presentations/TIL_Suite_EN_2020_August.pdf">download the TIL presentation</a> or contact us at <a href="mailto:til@tlk-thermo.com">til@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Ingo Frohböse <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="simtek-single-phase-traction-library-new-version-1-0">SimTek Single Phase Traction Library - New version 1.0</h2>
<p>Single Phase Traction Library is a Modelica-based library for high power one phase AC-DC electrical conversion and electrical traction at low-speed switching. The library supports modeling all kinds of stationary and mobile applications. This includes trains and road vehicles with electrical catenaries, such as trolley trucks, and stationary bidirectional AC to DC converters as used for DC sub-distribution stations. The library enhances the Modelica world by detailed and averaged modeling of bidirectional AC/DC converters.
The spectrum of components includes:</p>
<ul>
  <li>one-phase AC to DC controllers, including three control concepts based on detailed switching and one simplified time-averaged controller,</li>
  <li>one-phase AC/DC active rectifier, detailed switching, and time-averaged one-phase power distribution modeling (overhead line),</li>
  <li>test scenarios for power offtake, including monitors for harmonic testing,</li>
  <li>demonstration for well-to-wheel modeling (detailed switching and time-averaged),</li>
  <li>single component test cases.</li>
</ul>

<p><img src="SPT.jpg" alt="SPT logo" title="Dual converter example" width="600px"></p>

<p>Contact: <a href="mailto:aiguo.xu@cnydsimtek.com">Aiguo Xu</a>.</p>

<p><em>This article is provided by Aiguo Xu (<a href="https://en.simtek.cc/">SimTek Co., Ltd.</a>)</em></p>

<h2 id="simtek-aircraft-electrical-system-library-new-version-1-0">SimTek Aircraft Electrical System Library - New version 1.0</h2>
<p>“Aircraft Electrical System” is a Modelica-based library for the simulation of onboard electrical networks. The library enhances the Modelica world by flexible and detailed modeling of large power networks.</p>

<p>Highlights include:</p>
<ul>
  <li>Easy definition of electrical network loads including power per flight phase, bus allocation on AC and DC buses, ATA chapter, wiring, and many more,</li>
  <li>First tabular and graphical analysis of the loading and generator balancing,</li>
  <li>Transfer of the tabular load definition into a Modelica database,</li>
  <li>A database fed modeling framework of the electrical network based on generic components for power generation, conversion, and consumption,</li>
  <li>Library of architectures and components for modeling of the onboard electrical network.</li>
  <li>Test examples, including a demonstration using a generic two engine long-range transport aircraft architecture.
Usage is focused on, but not limited to, aircraft, and can be adapted for any type of stationary and mobile power system.</li>
</ul>

<p><img src="AES.jpg" alt="AES logo" title="Demo architecture" width="600px"></p>

<p>Contact: <a href="mailto:aiguo.xu@cnydsimtek.com">Aiguo Xu</a>.</p>

<p><em>This article is provided by Aiguo Xu (<a href="https://en.simtek.cc/">SimTek Co., Ltd.</a>)</em></p>

<h1 id="education-news">Education news</h1>

<h2 id="new-from-modelon-blog">New from Modelon Blog</h2>
<h4 id="battery-modeling-predicting-the-effects-of-aging-on-lithium-ion-battery-performance-in-evs">Battery Modeling: Predicting the Effects of Aging on Lithium-Ion Battery Performance in EVs</h4>

<p><img src="mbat.png" alt="Modelon battery"></p>

<p>Rimac Automobili uses the Modelon Electrification Library for accurate battery modeling. Learn more <a href="https://www.modelon.com/battery-modeling-electric-vehicles-rimac/">here</a>.</p>

<h4 id="steady-state-and-dynamic-simulation-what-is-the-difference">Steady State and Dynamic Simulation: What is the Difference?</h4>

<p><img src="mss.png" alt="Modelon steady state"></p>

<p>This blog post explains the differences and simplifies the topic of steady state vs dynamic simulation. Learn more <a href="https://www.modelon.com/steady-state-and-dynamic-simulation-what-is-the-difference/">here</a>.</p>

<h4 id="multibody-vehicle-dynamics-efficient-suspension-design-in-modelon-impact">Multibody Vehicle Dynamics: Efficient Suspension Design in Modelon Impact</h4>

<p><img src="mmb.png" alt="Modelon multibody"></p>

<p>Modelon Impact’s Vehicle Dynamics Library, steady-state solver, and multi-execution capabilities make it possible to design and analyze multibody vehicle suspension systems. Learn more <a href="https://www.modelon.com/multibody-vehicle-dynamics-suspension-design-in-modelon-impact/">here</a>.</p>

<p><em>This article is provided by Kenzie Maurice (<a href="https://www.modelon.com/">Modelon</a>)</em></p>

<h2 id="an-e-book-modelica-by-application-power-systems-v0-3">An E-book (Modelica by Application – Power Systems V0.3)</h2>
<p>The Modelica langauge has clearly attracted a portion of the power system modeling community. Every year there are dozens of works in Modelica addressing modern aspects in power system modeling applications. These applications are facilitated by great capabilities and potentials of the Modelica language. Unfortunately, the majority of interested parties and individuals won’t be aware about all such conducted works. Thus, there is always an increasing demand on an educational community-driven up-to-date (e-)book that gathers these works in a well-organized and an entertaining manner.</p>

<p><img src="mathemodica-MPSCover0.3_50.png" alt="The (E-)book Cover"></p>

<h4 id="first-release-v10">First release v1.0</h4>

<p>To appear on the 1st of September 2021</p>

<h4 id="actual-outline">Actual outline</h4>

<p>The book is currenlty in a good shape, majorly complete up to few subsections. Actual outline can be always accessed 
<a href="https://github.com/Mathemodica/ModelicaPowerSystemBook/blob/main/ModelicaPowerSys-outline.pdf">here</a>.</p>

<h4 id="scope-of-readers">Scope of readers</h4>

<p>This book serves as a comprehensive but a compact guideline for any</p>

<ul>
  <li>Power system modeler desiring a power-system oriented introduction to the Modelica language starting from the big picture up to tiniest modeling implementation details</li>
  <li>Modelicans aiming at a quick understanding of the potentials of the Modelica langauge for modern challenging aspects of power system modeling applications</li>
</ul>

<h4 id="features-of-the-first-version-v10">Features of the first version V1.0:</h4>

<ul>
  <li>Available both for free and</li>
  <li>for as-much-as-you-think=this-book-deserves (as encouragement for supporting similar future initiatives)</li>
  <li>Hopefully to be actualized on a regular basis</li>
  <li>To enable arbitrary but serious, valuable and concise contributions from interested individuals and parties</li>
</ul>

<h5 id="pre-order-version-10-or-get-actual-version--sponsorship">Pre-order version 1.0 or Get actual version &amp; Sponsorship</h5>

<p>More detais are on the project website on <a href="https://github.com/Mathemodica/ModelicaPowerSystemBook/">github</a></p>

<p><img src="Mathemodica-logo-50.png" alt="Mathemodica logo"></p>

<p><em>This article is provided by Atiyah Elsheikh (<a href="http://mathemodica.com/">Mathemodica.com</a>)</em></p>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2016/04/claytex-logo.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.claytex.com/blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<h4 id="trajectory-file--what-is-it-dissecting-a-dymola-result-file">Trajectory File – what is it? Dissecting a Dymola result file.</h4>

<p>Trajectory file is the result file format of Modelica. At first glance, it appears to be a standard .mat file. If you have ever tried to open it, then you will have seen that it is not! Results data is stored in a logical, if not immediately intuitive, way. We’ll take a closer look at what each element of the trajectory file is, and what they mean in this blog post. Read the complete article <a href="https://www.claytex.com/tech-blog/trajectory-file-what-is-it-dissecting-a-dymola-result-file/">here</a></p>

<h4 id="load-or-open-save-all-save-or-save-total">Load or Open? Save All, Save or Save Total?</h4>

<p>This blog post seeks to clear your doubts on managing libraries and models.
When should we Load or Open a library? When should we use Save All, Save or Save Total? Using the right option for what you are wanting to achieve can save you and other colleagues and developers a great deal of time. Read the complete article <a href="https://www.claytex.com/tech-blog/load-or-open-save-all-save-or-save-total/">here</a></p>

<h4 id="working-with-the-working-directory">Working with the Working Directory?</h4>

<p>Like many programs, Dymola makes use of a working directory on your computer. Dynamically associated with Dymola, it acts as a location to write files required by Dymola. By virtue of being dynamically linked to Dymola, the working directory is very much a living part of the Dymola process. Therefore, having a solid understanding of how Dymola utilizes the working directory helps us while working with Dymola. We’ll cover both how Dymola uses the working directory and some recommended practices for users. I will also highlight some potential pitfalls and quirks of the Dymola working directory and discuss them as they arise. Read the complete article <a href="https://www.claytex.com/tech-blog/working-with-the-working-directory/">here</a></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

</section>
{{</rawhtml>}}