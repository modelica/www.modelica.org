---
title: Newsletter 2019-03
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
  <li><a href="#modelica-association" id="markdown-toc-modelica-association">Modelica Association</a>    <ul>
      <li><a href="#future-directions-of-system-modeling-and-simulation" id="markdown-toc-future-directions-of-system-modeling-and-simulation">Future Directions of System Modeling and Simulation</a></li>
      <li><a href="#news-from-the-msl-project" id="markdown-toc-news-from-the-msl-project">News from the MSL project</a></li>
      <li><a href="#news-from-the-fmi-project" id="markdown-toc-news-from-the-fmi-project">News from the FMI Project</a></li>
    </ul>
  </li>
  <li><a href="#related-projects" id="markdown-toc-related-projects">Related projects</a>    <ul>
      <li><a href="#enob-fmi4bim-standardized-interface-for-analytical-models-of-buildings-their-systems-and-controllers-for-bim-based-design-and-operation" id="markdown-toc-enob-fmi4bim-standardized-interface-for-analytical-models-of-buildings-their-systems-and-controllers-for-bim-based-design-and-operation">EnOB: FMI4BIM - standardized Interface for analytical models of buildings, their systems and controllers for BIM-based design and operation</a></li>
    </ul>
  </li>
  <li><a href="#conferences-and-user-meetings" id="markdown-toc-conferences-and-user-meetings">Conferences and user meetings</a>    <ul>
      <li><a href="#asian-modelica-conference" id="markdown-toc-asian-modelica-conference">Asian Modelica Conference</a></li>
      <li><a href="#american-modelica-conference-2020" id="markdown-toc-american-modelica-conference-2020">American Modelica Conference 2020</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#graphical-network-modeling-added-to-open-source-co-sim-master-program-mastersim" id="markdown-toc-graphical-network-modeling-added-to-open-source-co-sim-master-program-mastersim">Graphical network modeling added to open-source co-sim master program MasterSim</a></li>
      <li><a href="#cfp-openmodelica-modprod-workshops-2020" id="markdown-toc-cfp-openmodelica-modprod-workshops-2020">CFP OpenModelica/MODPROD Workshops 2020</a></li>
      <li><a href="#powering-education-with-wolfram-virtual-labs" id="markdown-toc-powering-education-with-wolfram-virtual-labs">Powering Education with Wolfram Virtual Labs</a></li>
      <li><a href="#simcenter-amesim-2019-2-released" id="markdown-toc-simcenter-amesim-2019-2-released">Simcenter Amesim 2019.2 released</a></li>
      <li><a href="#siemens-digital-industries-software-2019-simcenter-conference-europe" id="markdown-toc-siemens-digital-industries-software-2019-simcenter-conference-europe">Siemens Digital Industries Software 2019 Simcenter Conference - Europe</a></li>
      <li><a href="#openmodelica-1-14-0-release" id="markdown-toc-openmodelica-1-14-0-release">OpenModelica 1.14.0 Release</a></li>
      <li><a href="#modelon-2019-2-released" id="markdown-toc-modelon-2019-2-released">Modelon 2019.2 Released</a></li>
      <li><a href="#dymola-2020x" id="markdown-toc-dymola-2020x">Dymola 2020x</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP interested,</p>

<p>the celebration of the 100th Modelica Design Meeting was a big success: On Sept. 30, 2019 the Jubilee Symposium
<em>Future Directions of System Modeling and Simulation</em> took place with 9 invited speakers and 140 participants
(more information in the <a href="#future-directions-of-system-modeling-and-simulation">article</a>). On Oct. 1-2, Modelica Association meetings for most Modelica Association Projects, including of course the 100th meeting of the Modelica language group, allowed an intensive exchange between the projects.</p>

<p>According to the new schedule, country-specific Modelica Association conferences will take place next year outside of Europe:</p>

<ul>
  <li>
    <p>The <a href="https://www.modelica.org/events/modelica2020Americas">2nd American Modelica Conference</a> will be held
at the University of Colorado in Boulder, U.S.A, from March 23-25, 2020. Currently, the submitted papers are reviewed.
Note, the Early Bird registration ends on January 31, 2020. 
See also the <a href="#american-modelica-conference-2020">dedicated article</a> in this newsletter.</p>
  </li>
  <li>
    <p>The previous two very successful Japanese Modelica Conferences are succeeded with the <a href="https://2020.asian.conference.modelica.org/">Asian Modelica Conference</a> in Tokyo, Japan, from May 13-14, 2020.
The intention is to organize this conference in the following years alternatively also in Korea and China.
The Call-for-Papers already started and you can submit proposals until January 31, 2020. See also the
<a href="#asian-modelica-conference">dedicated article</a> in this newsletter.</p>
  </li>
</ul>

<p>The <strong>FMI</strong> group has released the maintenance version <strong>2.0.1</strong> of the FMI standard. This version does not include
new features, but about 50 fixes and clarifications. For all the details, see the
<a href="https://github.com/modelica/fmi-standard/releases">release notes</a>.</p>

<p>The <strong>Modelica Libraries</strong> group has released the <strong>second maintenance</strong> release of the
<a href="https://github.com/modelica/ModelicaStandardLibrary">Modelica Standard Library</a> 3.2.3.
This release does not include new features but 8 smaller fixes. For all the details, see the
<a href="https://htmlpreview.github.io/?https://raw.githubusercontent.com/modelica/Modelica/maint/3.2.3/Modelica/Resources/Documentation/Version-3.2.3+build.3/ResolvedGitHubIssues.html">release notes</a>.</p>

<p>Many organizations and individuals have now signed the
<a href="https://www.modelica.org/licenses/ModelicaAssociationCLA_1.1/at_download/file">Modelica Association Contributor License Agreement (MA CLA)</a>.
A few are still missing. In case you did not yet do it, please do not forget to print and sign it, especially if you plan to contribute to
one of the Modelica Association projects in the future. Simplest is to send a scan of the signed CLA to the
Modelica Association Backoffice via email (backoffice@modelica.org).</p>

<p>A <strong>Russian Modelica User’s Group</strong> is currently being formed. In case you would like to 
contribute, please send an email to igor.timofeyev@mail.ru.</p>

<p>If you have interesting news for the Modelica, FMI, SSP and DCP communities, please 
follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.
The deadline for articles for the next newsletter is Fr. March 13, 2020.</p>

<p>Martin Otter on Nov. 21, 2019  <br>
<em>Chairman of the Modelica Association</em></p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="future-directions-of-system-modeling-and-simulation">Future Directions of System Modeling and Simulation</h2>
<p><img src="symposium2019b.png" alt="symposium"></p>

<p>The <a href="https://www.modelica.org/">Modelica Association</a>, Modelica companies in Lund and
<a href="https://lunduniversity.lu.se/">Lund University</a> organized a free Jubilee Symposium
on Sept. 30, 2019, to celebrate the 100th Modelica Design Meeting that took place in Lund
on October 1-2, 2019. The first Modelica Design Meeting was organized in Lund in September 1996.</p>

<p>In nine presentations, invited researchers and industrial practitioners from different communities 
with a common interest in modeling and simulation presented their view on 
status, trends and forthcoming developments in this field. 
The very nice lecture auditorium of Medicon Village near Lund University was a perfect location
for this event. With 140 available seats for the 140 registered participants, the room was fully occupied.</p>

<p><strong>Slides</strong> and <strong>videos</strong> of the presentations are available from the 
<a href="https://modelica.github.io/Symposium2019/program.html">Symposium Program</a> web page.</p>

<p>In the evening a Modelica history session took place during the dinner.
Inspirations, events and persons have been presented from Modelicas’ root in 1861 until today. 
The slides of this session and pictures of the event are also available from the
<a href="https://modelica.github.io/Symposium2019/program.html">Symposium Program</a>.</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a> and <a href="https://www.dlr.de/sr/en/desktopdefault.aspx/tabid-11579/">DLR-SR</a>)</em></p>

<h2 id="news-from-the-msl-project">News from the MSL project</h2>
<h4 id="msl-version-323-build-3-released">MSL version 3.2.3 Build 3 released</h4>

<p>After approval by both the MAP-LIB members and the Modelica Association members, version 3.2.3 Build 3 of the Modelica Standard Library has been released.
This is the second maintenance release for MSL version 3.2.3 containing eight back-ported bug-fixes that were resolved during the development of the upcoming new major release MSL version 4.0.0. If you are a user or distributor of the MSL version 3.2.3 it is recommended to update to this new maintenance release.</p>

<p>The release notes and the Modelica package can be downloaded from <a href="https://github.com/modelica/ModelicaStandardLibrary/releases/tag/v3.2.3%2Bbuild.3">GitHub</a>.</p>

<h4 id="towards-msl-version-400">Towards MSL version 4.0.0</h4>

<p>The upcoming new major version 4.0.0 of the Modelica Standard Library will be the first new major version in ten years. This version will be based on the recent Modelica language standard version 3.4, i.e., the MSL finally can be upgraded to drop deprecated features and to utilize new features such as <a href="https://specification.modelica.org/v3.4/Ch16.html">synchronous language elements</a>, <a href="https://specification.modelica.org/v3.4/Ch3.html#getinstancename">getInstanceName</a>, <a href="https://specification.modelica.org/v3.4/Ch3.html#spatialdistribution">spatialDistribution</a> or the <a href="https://specification.modelica.org/v3.4/Ch12.html#pure-modelica-functions">pure/impure</a> function notation. Backward-compatibility is no longer given, but a tested conversion script will be provided such that MSL users and library developers can easily upgrade their packages to the new version. All deprecated functionality will be either replaced by new features or still be available in a new additional package of obsoleted classes.</p>

<p>Additionally, it is a major goal to further improve the overall quality of the MSL with respect to class naming and package structuring, conventions and style guide-lines, icons, documentation style and improved example models.</p>

<p>As usual, you can follow the development or even participate on <a href="https://github.com/modelica/ModelicaStandardLibrary">GitHub</a> using the <a href="https://github.com/modelica/ModelicaStandardLibrary/milestone/4">MSL4.0.0</a> milestone. New contributors are very welcome and requested to sign the <a href="https://www.modelica.org/licenses/ModelicaAssociationCLA_1.1">CLA</a> of the Modelica Association.</p>

<p>It is planned to release an alpha version of the MSL version 4.0.0 to the public early next year and to have the final release available by Q2/2020.</p>

<p><em>This article is provided by MAP-LIB</em></p>

<h2 id="news-from-the-fmi-project">News from the FMI Project</h2>
<h4 id="fmi-201-released">FMI 2.0.1 released</h4>

<p>After approval by the FMI Steering Committee and the Modelica Association members, version 2.0.1 of the FMI Specification 
has been released on Oct 31st 2019.
This is a maintenance release for FMI 2.0 with no new features, but bug fixes and clarifications to more than 50 issues.
FMUs created according to the FMI 2.0.1 specification are valid FMI 2.0 FMUs and vice versa.</p>

<p>The release notes and files to download can be found <a href="https://github.com/modelica/fmi-standard/releases/tag/v2.0.1">here</a>.</p>

<h4 id="towards-fmi-30">Towards FMI 3.0</h4>
<p>All FMI Change Proposals described in the <a href="https://fmi-standard.org/faq/">FMI 3.0 features list</a> have now already been merged into the master branch of the <a href="https://github.com/modelica/fmi-standard">FMI standard repository</a>. With this step, the API of the coming FMI 3.0 standard has been stabilized, so that prototyping of tools and improvement of the standard text can start now.
At their meeting in October in Lund the FMI Steering Committee accepted one new feature for FMI 3.0: the FMU ZIP Archive can now contain an additional folder with meta data to travel with the FMU, which can be modified by different tools, allowing for layered standards.</p>

<p>The development of the FMI standard can be followed on <a href="https://github.com/modelica/fmi-standard">GitHub</a> for the sources 
of the standard text, headers and schema files, see also the <a href="https://fmi-standard.org/docs/3.0-dev/">generated documentation</a> for
the latest devlopment version.
You are welcome to comment and contribute to the FMI 3.0 standard. Please note: you have to sign the <a href="https://svn.fmi-standard.org/fmi/branches/public/FMI_CCLA_v1.0_2016_06_21.pdf">CCLA</a> of the FMI project or the <a href="https://www.modelica.org/licenses/ModelicaAssociationCLA_1.1">CLA</a> of the Modelica Association in order to do so.</p>

<p><em>This article is provided by MAP FMI</em></p>

<h1 id="related-projects">Related projects</h1>

<h2 id="enob-fmi4bim-standardized-interface-for-analytical-models-of-buildings-their-systems-and-controllers-for-bim-based-design-and-operation">EnOB: FMI4BIM - standardized Interface for analytical models of buildings, their systems and controllers for BIM-based design and operation</h2>
<p><img src="FMI4BIM_Logo.png" alt="FMI4BIM Logo"></p>

<p>The project focuses on improving co-simulation technology for coupled simulation of indoor climate, HVAC systems and their controllers with the goal to enhance the energy performance of buildings. Simulation results can help to improve design and operation of buildings. Yet, first the obstacles for every day use in the design process need to be adressed.</p>

<p>The FMI4BIM project will improve existing models of indoor climate, HVAC systems and their controllers with special respect to coupling via the well established FMI standard.
Currently model generation is a cumbersome task. Different actors are creating different models for different issues using different datasets and interfaces, therefore reuse is hardly possible. FMI4BIM will push forward the application of existing models from the BIM based design workflow for Building Energy Performance simulation by analyzing and harmonizing them.
Goal of the project is a solution applicable for the design engineer. The projects will thus contribute to the digitalization in the building sector.</p>

<p>The project has started in January 2019 and will end by December 2021.
Project partners are:</p>

<ul>
  <li>ESI ITI GmbH: software vendor of SimulationX</li>
  <li>EA Systems Dresden GmbH: building simulation consultants and developers of the GreenCityLibrary</li>
  <li>Innius GTD GmbH: MEP consultants</li>
  <li>Fraunhofer IIS/EAS Institute for Integrated Circuits, Division Engineering of Adaptive Systems</li>
  <li>Technische Universität Dresden - Institute of Building Climatology</li>
</ul>

<p><em>This article is provided by Elisabeth Eckstädt, <a href="https://www.eas.iis.fraunhofer.de">Fraunhofer-Institut für Integrierte Schaltungen IIS Institutsteil</a></em></p>

<h1 id="conferences-and-user-meetings">Conferences and user meetings</h1>

<h2 id="asian-modelica-conference">Asian Modelica Conference</h2>
<p><img src="asian_conference.png" alt=""></p>

<p>Previously known as the Japanese Modelica Conference, the Asian Modelica Conference 2020, will be held at Nihonbashi Takashimaya Mitsui Building, Tokyo, Japan from May 13–14, 2020.</p>

<p>The Call for Papers is now available and the deadline for submission is January 31, 2020. For guidelines on paper submissions review the <a href="https://2020.asian.conference.modelica.org/">conference website, here</a>.</p>

<p>This conference is organized by <a href="https://www.modelon.com/">Modelon</a> in cooperation with the <a href="https://www.modelica.org/">Modelica Association</a>.</p>

<p><em>This article is provided by <a href="https://www.modelon.com/">Jocelyn Paslowski, Modelon</a></em></p>

<h2 id="american-modelica-conference-2020">American Modelica Conference 2020</h2>
<p>The American Modelica Conference 2020 will be held at the University of Colorado in Boulder, Colorado, the United States of America from March 23 - 25, 2020. It is organized by the Modelica Association and the North American Modelica User Group NAMUG.</p>

<p>The Modelica Conference is the main event for users, library developers, tool vendors and researchers to share their knowledge and learn about the latest scientific and industrial progress related to all of the system simulation standards developed and maintained by the Modelica Association, in particular Modelica , the Functional Mockup Interface (FMI), the System Structure and Parameterization (SSP) standard and the The Distributed Co-simulation Protocol (DCP) standard.</p>

<p>The program will cover modeling of complex physical and cyber-physical systems, as well as tools, for a wide range of research and industrial applications. All contributions are peer-reviewed and selected by the Program Committee. This conference is co-organized by NAMUG, the North American Modelica Users’ Group, and the Modelica Association.</p>

<p>This conference will have one or several conference tracks with presentations of peer-reviewed papers as all Modelica conferences, but it will, in addition, have one track of industrial user-oriented presentations as user meetings by NAMUG have had for the last 5 years, that does not need to be accompanied by a full scientific paper. The abstracts of the presentations will also be peer-reviewed by the conference board.</p>

<p>We are looking forward to seeing you in Boulder, CO.</p>

<p>Dr. Michael Tiller and Associate Professor Luigi Vanfretti, PhD</p>

<p>General Chair (<a href="https://ricardo.com/">Ricardo</a>) and Program Chair (<a href="https://www.rpi.edu/">Rensselaer Polytechnical Institute</a>)</p>

<p><em>This article is provided by Hubertus Tummescheit, <a href="https://www.modelica.org/users-groups">North American Modelica Users Group</a></em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="graphical-network-modeling-added-to-open-source-co-sim-master-program-mastersim">Graphical network modeling added to open-source co-sim master program MasterSim</h2>
<p>With version 0.8 of the co-simulation master tool <em>MasterSim</em> (<a href="https://bauklimatik-dresden.de/mastersim">bauklimatik-dresden.de/mastersim</a>) it is now possible to illustrate and manage simulation scenarios in a graphical network view.</p>

<p><img src="MasterSim_0.8.2_screenshot_with_network.png" alt="MasterSim with network view"></p>

<p>Also, and that is probably more relevant to the growing number of users, a comprehensive manual is now available (<a href="https://bauklimatik-dresden.de/mastersim/documentation.php">MasterSim Documentation</a>). It covers the user interface, implemented algorithms and the project file specification, thus giving all relevant information on controlling and running <em>MasterSim</em> in a scripted environment, for example when running systematic parameter studies.</p>

<p><em>MasterSim</em> is an open-source software that was created with the aim to create a reference implementation for FMI co-simulation algorithms, giving developers of master tools and FMI slaves a transparant implementation to check and optimize their own implementations. The code and release installers are hosted on <a href="https://sourceforge.net/projects/mastersim">sourceforge.net/projects/mastersim</a>.</p>

<p>The tool is now considered mature enough for production use and as such is already used in a couple of projects. Since translation of the Qt-based user interface is fairly easy to do, we would appreciate help of native speakers of other languages (besides english and german) to help in translating the user interface (contact: <a href="mailto:andreas.nicolai@tu-dresden.de">andreas.nicolai@tu-dresden.de</a>.</p>

<p><em>This article is provided by Andreas Nicolai, <a href="https://bauklimatik-dresden.de">TU Dresden</a></em></p>

<h2 id="cfp-openmodelica-modprod-workshops-2020">CFP OpenModelica/MODPROD Workshops 2020</h2>
<p>Call for participation for the OpenModelica workshop and the MODPROD workshop on model-based cyber-physical product development. The OpenModelica workshop is concerned with tooling and applications of OpenModelica, whereas the MODPROD workshop covers general cyber-physical system modeling and system development using multiple tools and formalisms. Several tutorials will be given including topics such as Modelica and FMI.</p>

<p>The workshops are organized in cooperation with ICES, INCOSE Sweden and IEEE Computer Society Swedish Chapter</p>

<p>Location: Linköping University, Linköping, Sweden</p>
<ul>
  <li>12th OpenModelica Annual Workshop, February 3, 2020</li>
  <li>14th MODPROD Workshop on Model-Based Cyber-Physical Product Development, February 4-5, 2020</li>
</ul>

<p>Theme for this year: Digital Meets Reality</p>

<p>Keynotes for MODPROD2020 Workshop (preliminary):</p>

<ul>
  <li>Peter Gorm Larsen, Professor at Aarhus University, Head of Digit Centre. “A Cloud-based Collaborative Platform for Model-Based development of Cyber-Physical Systems”</li>
  <li>Richard Romano, Professor at University of Leeds, Chair in Driving Simulation. “Model based design of Automated Vehicles”</li>
  <li>Gunnar Cedersund, Associate Professor at Linköping University, leader of Systems Biology group, “A digital twin for the human body: from data and validation to end-usage in healthcare and drug development”.</li>
  <li>Juan Llorens, Professor at the Informatics Dept., Univ of Madrid, President of INCOSE Spain, CTO of REUSE company. “Knowledge Management and reuse in the context of Systems Engineering”.</li>
</ul>

<p>For more information and previous workshops see www.modprod.se and www.openmodelica.org</p>

<p><em>This article is provided by Peter Fritzson <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h2 id="powering-education-with-wolfram-virtual-labs">Powering Education with Wolfram Virtual Labs</h2>
<p>How can you make teaching come alive and be more engaging? For many educators, the answer turns out to be not so much a single solution, but rather a set of tools that can vary according to subject and even by student. Wolfram has now added a new tool to the pedagogical toolkit: <a href="https://www.wolfram.com/system-modeler/libraries/">Wolfram Virtual Labs</a>.</p>

<p><img src="SystemModeler-VirtualLabs.jpg" alt="alt text" title="Powering Education with Wolfram Virtual Labs"></p>

<p>These are:</p>

<ul>
  <li>Open education resources (OER).</li>
  <li>Designed to encourage student curiosity by allowing students to test ideas with immediate feedback in a programmatic environment.</li>
  <li>Created to make memorization easier.</li>
</ul>

<p>The following Virtual Labs libraries are now available for download from the <a href="https://www.wolfram.com/system-modeler/libraries/">SystemModeler library store</a>:</p>

<ul>
  <li><a href="https://www.wolfram.com/system-modeler/libraries/college-thermal/">CollegeThermal</a>: Developed in collaboration with <a href="https://www.polito.it/?lang=en">Politecnico di Torino</a>. Contains interactive thermal labs related to heat transfer and thermal engineering courses.</li>
  <li><a href="https://www.wolfram.com/system-modeler/libraries/high-school-biology/">HighSchoolBiology</a>: Developed in collaboration with <a href="https://liu.se/">Linköping University</a> and <a href="https://www.education.vic.gov.au/about/programs/learningdev/vicstem/Pages/wolframsoftware.aspx">VicSTEM</a>. Contains interactive biology labs related to cell transport phenomena, population models and food metabolism.</li>
  <li><a href="https://www.wolfram.com/system-modeler/libraries/high-school-chemistry/">HighSchoolChemistry</a>: Developed in collaboration with <a href="https://liu.se/">Linköping University</a>. Contains interactive chemistry labs related to rate laws, homogenous reactions and heterogenous reactions.</li>
</ul>

<p>Stay tuned for upcoming libraries, including:</p>

<ul>
  <li>HighSchoolPhysics</li>
  <li>CollegeElectricalAnalog</li>
  <li>CollegeMechanicalEngineering</li>
</ul>

<p>The labs are developed using Mathematica notebooks with Modelica models running in the background. For more information, please read the <a href="https://blog.wolfram.com/2019/10/08/powering-engineering-education-with-wolfram-virtual-labs/">CollegeThermal release blog</a>.</p>

<p><a href="https://www.wolfram.com/system-modeler/what-is-new/">Click here</a> to read the latest SystemModeler news.</p>

<p><em>This article is provided by Ankit Naik <a href="http://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="simcenter-amesim-2019-2-released">Simcenter Amesim 2019.2 released</h2>
<p><a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a> is proud to announce the recent release of <a href="https://youtu.be/o7iZYtLF1a0">Simcenter Amesim 2019.2</a>. 
Among the key features introduced in this release, we can highlight two neural network related capabilities:</p>

<ul>
  <li><strong>The Neural Network Builder tool</strong> that allows to create CPU-efficient dynamical non-linear surrogate models, based on time series generated with detailed Simcenter Amesim models. These surrogate models can then be reused as Simcenter Amesim components for speed-up and/or model reduction purposes. They can also be exported as <a href="https://onnx.ai/">ONNX</a> files.</li>
  <li><strong>The Neural Network Import tool</strong> that enables the import of pretrained neural networks or other machine learning algorithms described as <a href="https://onnx.ai/">ONNX</a> files into Simcenter Amesim.</li>
</ul>

<p>The neural network components coming from Simcenter Amesim itself or from other <a href="https://onnx.ai/">ONNX</a> compatible software can then be exported as 1.0 or 2.0 FMUs for co-simulation or model exchange.</p>

<p><img src="amesim_banner.png" alt=""></p>

<h4 id="extended-modelica-language-support">Extended Modelica language support</h4>
<p>The version of <a href="https://www.modelon.com/products-services/modelon-creator-suite/optimica-compiler-toolkit">Modelon’s OPTIMICA Compiler Toolkit</a> used to create and/or include Modelica models within your native Simcenter Amesim models has been upgraded to version 1.12.6, providing increased stability and compatibility to Modelica users. Recognized open-source libraries such as <a href="https://modelica-buildingsystems.de/">BuildingSystems</a> and <a href="https://simulationresearch.lbl.gov/modelica/">Buildings</a> have been successfully tested in Simcenter&nbsp;Amesim&nbsp;2019.2 in their latest versions. For more detail on our Modelica support, please check our dedicated <a href="https://blogs.sw.siemens.com/simcenter/whats-new-in-our-modelica-editor-in-simcenter-amesim-2019-2/">blog post</a>.</p>

<h4 id="export-of-hybrid-models-as-fmus">Export of hybrid models as FMUs</h4>

<p>Under Windows or Linux, Simcenter Amesim models containing Modelica or Simulink models can now be seamlessly exported as FMUs with a fully automated management of FMU internal resources.
The same goes for statecharts and the neural network models created with the <strong>Neural Network Builder</strong> or imported with the <strong>Neural Network Import</strong> (as mentioned above). These models can additionally be exported <em>via</em> “source-code FMUs” to FMI compatible real-time targets such as dSPACE&nbsp;SCALEXIO, FEV&nbsp;xMOD, ETAS&nbsp;LABCAR or Concurrent SIMulation&nbsp;WorkBench.</p>

<p>For more information on Simcenter Amesim, please visit our <a href="https://www.plm.automation.siemens.com/global/en/products/simcenter/simcenter-amesim.html">website</a>.</p>

<p><em>This article is provided by Bruno Loyer (<a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a>)</em></p>

<h2 id="siemens-digital-industries-software-2019-simcenter-conference-europe">Siemens Digital Industries Software 2019 Simcenter Conference - Europe</h2>
<h4 id="join-us-on-december-24-for-the-2019-simcenter-conference---europe">Join us on December 2–4 for the 2019 Simcenter Conference - Europe</h4>

<p>Join us on December 2–4 for the 2019 Simcenter Conference - Europe, an exciting event that will bring together simulation, test and design exploration in an industry themed agenda. 
Together we will explore how simulation and test are contributing to the realization of the Digital Twin, and examine how adopting a holistic approach to predictive engineering analytics is essential in developing innovative products that exceed customer expectations.</p>

<p>The Digital Twin, for product ideation, realization and utilization, is the state of the art approach companies follow to deliver innovation. Digitally mirroring the product over its entire life cycle can present several advantages, such as more effective development, better manufacturing precision, smarter product behavior and much more. The Simcenter simulation and testing solutions portfolio, built on the legacy of LMS solutions, CD-Adapco, Tass and Mentor, allows manufacturers to build and maintain a Digital Twin in support of performance engineering during product development.</p>

<p><img src="Simcenter_Conference_Europe.png" alt=""></p>

<p>To register for this conference, please visit this dedicated <a href="http://www.cvent.com/events/siemens-plm-software-2019-simcenter-conference/event-summary-57db22d8a4f14cc2b5f7a462366674cb.aspx">page</a>.
For more information on Simcenter conferences in general, please visit our <a href="https://blogs.sw.siemens.com/simcenter/tag/simcenter-conference/">blog</a>.</p>

<p><em>This article is provided by Bruno Loyer (<a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a>)</em></p>

<h2 id="openmodelica-1-14-0-release">OpenModelica 1.14.0 Release</h2>
<p>OpenModelica is the most complete open-source Modelica-based cyber-physical mathematical modeling,
simulation and optimization environment intended for industrial and academic usage.
Its long-term development is supported by a non-profit organization – the Open Source Modelica Consortium <a href="https://www.openmodelica.org/">OSMC</a>
with many company, institute, and university members.</p>

<p><img src="https://openmodelica.github.io/OpenModelica-Resources/images/2015-OpenModelica-V6Engine-3x4-cropped-400x287.png" alt=""></p>

<p>The figure shows OpenModelica with a plot from a simulation of the V6Engine model.</p>

<p>The most dramatic enhancement in the 1.14.0 release is the of the OpenModelica Compiler New Frontend (NF), which on the average gives a factor of 10-20 speed improvement in the flattening phase of compilation. The new frontend is default in this release. See www.openmodelica.org for download.</p>

<p>The speed of the OMEdit GUI has only slightly increased in this version, since it is still dependent mostly on the old frontend. Further GUI speed increases are available in the coming OpenModelica.1.15.0.</p>

<p>Some highlights:</p>

<ul>
  <li>Implementation of expandable connectors completed in NF.</li>
  <li>The New Frontend (NF) is on the average about 20 times faster on flattening.</li>
  <li>A new more efficient and more correct implementation of arrays and records.</li>
  <li>The FMI OMSimulator API calls are now also available in the OMC API functions.</li>
  <li>Added possibility to generate analytic Jacobians for linear strong components.</li>
  <li>Added output language options for linearization: matlab, python, julia.</li>
  <li>Unified Jacobian evaluation from DASSL and IDA integrators.</li>
  <li>Added result check for linear solvers Lis, Klu, Total Pivot and Umfpack if a residual function is available.</li>
  <li>Improved debug dumping.</li>
  <li>Improved warning for iteration variables.</li>
  <li>OMMatlab  - A complete implementation is now available.</li>
</ul>

<p>OMEdit:</p>

<ul>
  <li>Drag and drop for the text layer.</li>
  <li>Auto completion of class names, components and annotations.</li>
  <li>Improved duplication functionality for copying classes.</li>
  <li>Better handling of Compiler flags.</li>
  <li>Support for connectorSizing annotation</li>
  <li>Documentation is available <a href="https://openmodelica.org/doc/OpenModelicaUsersGuide/latest/omedit.html">here</a></li>
  <li>Autocomplete annotations.</li>
  <li>Support for Icon/Diagram map annotation</li>
  <li>Model copy paste functionality</li>
  <li>Reset OMEdit settings/options.</li>
  <li>Array plots update on re-simulation</li>
  <li>Support for connectorSizing annotation.</li>
  <li>Drag and drop class names to text layer in OMEdit</li>
  <li>OMPlot: Improved plotting e.g., top and bottom margins for better view, snap to curve etc.</li>
</ul>

<p>OMSimulator/FMI Simulation:</p>

<ul>
  <li>Improvements in error control and numeric stability</li>
  <li>Added adaptive step-size control based on roll-back mechanism</li>
  <li>Improved handling of output/input derivatives</li>
  <li>Provide first order derivatives for all continuous outputs of lookup tables</li>
  <li>Fixed various C-API calls and scripting bindings (lua, python)</li>
  <li>Fixed some command line options</li>
  <li>Improved various error messages</li>
  <li>Fixed signal filter for result files</li>
  <li>New functionality to add cpu time to the results for each simulation component</li>
  <li>Improved FMI export from OpenModelica (further improvements ongoing)</li>
</ul>

<p><em>This article is provided by Peter Fritzson <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h2 id="modelon-2019-2-released">Modelon 2019.2 Released</h2>
<p><img src="https://user-images.githubusercontent.com/37085155/68780008-91435900-0603-11ea-94d7-de1d8a316be5.jpg" alt="2019 2 Release Notes"></p>

<p>Modelon is pleased to announce the release of 2019.2. Updates to the Modelica libraries within the <a href="https://www.modelon.com/products-services/modelon-library-suite-modelica-libraries/">Modelon Library Suite</a>, and OPTIMICA Compiler Toolkit within <a href="https://www.modelon.com/products-services/modelon-creator-suite/">Modelon Creator Suite</a> are now available. A comprehensive list of release notes can be found <a href="https://www.modelon.com/modelon-release-2019-2/">here. </a></p>

<p>To access the new release, <a href="https://www.modelon.com/contact-us/">contact our team.</a></p>

<h3 id="highlights-include"><strong>Highlights Include:</strong></h3>

<p><strong>Automotive</strong></p>
<ul>
  <li>Validated battery models based on Rimac battery test cell, including thermal aspects, limits and the battery cycler power de-rating algorithm</li>
  <li>New two-stage vapor injection compressor</li>
  <li>New user-friendly sensors visualizing the flow, enthalpy, temperature, and pressure inside components</li>
  <li>Updated truck models with the new chassis experiment</li>
</ul>

<p><strong>Aerospace</strong></p>
<ul>
  <li>Intercontinental flight trajectory simulation capability added</li>
  <li>Improved post-processing</li>
  <li>New three-wheel-bootstrap air conditioning cycle with temperature control</li>
  <li>Added ability to scale turbine maps</li>
  <li>New fuel tank sensors measuring a fuel tank fluid level and the center of gravity</li>
</ul>

<p><strong>Energy &amp; Power</strong></p>
<ul>
  <li>New microgrid example including solar, wind, water reservoir production and consumer sources developed, equipped by a simple control strategy</li>
  <li>New ancillary services and control strategy developed for the coal-fired power plant</li>
  <li>A gas turbine model and control strategy added to the combined cycle power plant including mechanical and thermal stress estimation</li>
</ul>

<p><em>This article is provided by Jocelyn Paslowski, <a href="https://www.modelon.com/">Modelon</a></em></p>

<h2 id="dymola-2020x">Dymola 2020x</h2>
<p>On 29 November 2019, Dymola 2020x will become generally available.</p>

<h4 id="new-user-interface">New user interface</h4>

<p>The user interface of Dymola has been modernized to the benefit of both novice and experienced users. The new interface provides
easier access to all operations and has been re-grouped to better support the natural workflow of model development and simulation. 
The command interface is now ribbon-based with improved icons. All existing Dymola functionality is kept.</p>

<p><img src="Dymola2020x-UI-newsletter.png" alt=""></p>

<h4 id="simulation">Simulation</h4>

<p>Greatly improved translation and simulation time for certain types of large real-world models, due to better equation analysis. 
The updated code generation reduces memory requirement for the C-compilers and reduces compilation time by up to 60%.</p>

<p>Improved handling of algebraic loops decreases the simulation time up to 30−40 % for industrial models.</p>

<h4 id="fmi-kit-for-simulink">FMI-Kit for Simulink</h4>

<p>The FMI Kit for Simulink is now freely downloadable from GitHub, including source code: <a href="https://github.com/CATIA-Systems/FMIKit-Simulink">link</a> . This is unsupported free software.</p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h1 id="education-news">Education news</h1>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2016/04/claytex-logo.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.claytex.com/category/tech-blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<p>Modelling a flushing toilet in Dymola using Modelica Fluids</p>

<p>The humble toilet accounts for the majoirty of a person’s water consumption on a daily basis. It can be analysed easily using Modelica Fluids! Read the complete article <a href="https://www.claytex.com/blog/methods/modelling-a-flushing-toilet-in-dymola/">here</a></p>

<p><img src="https://www.claytex.com/wp-content/uploads/2019/07/cisternModel.jpg" alt="connector plotting" title=" connector plotting "></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

</section>
{{</rawhtml>}}
