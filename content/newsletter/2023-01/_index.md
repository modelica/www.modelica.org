---
title: Newsletter 2023-01
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
          <p><img src="Modelica.svg" alt="Modelica newsletter 2023-01 logo"></p>

<h1 class="no_toc" id="table-of-contents">Table of contents</h1>

<ul id="markdown-toc">
  <li><a href="#letter-from-the-board" id="markdown-toc-letter-from-the-board">Letter from the Board</a></li>
  <li><a href="#modelica-association" id="markdown-toc-modelica-association">Modelica Association</a>    <ul>
      <li><a href="#fmi-3-0-implementers-guide-jointly-published-by-prostep-ivip-and-modelica-association-project-fmi" id="markdown-toc-fmi-3-0-implementers-guide-jointly-published-by-prostep-ivip-and-modelica-association-project-fmi">FMI 3.0 Implementers Guide jointly published by prostep ivip and Modelica Association Project FMI</a></li>
      <li><a href="#modelica-conference-2023-call-for-papers" id="markdown-toc-modelica-conference-2023-call-for-papers">Modelica Conference 2023 - Call-for-Papers</a></li>
      <li><a href="#modelica-language-3-6-being-released" id="markdown-toc-modelica-language-3-6-being-released">Modelica Language 3.6 being released</a></li>
    </ul>
  </li>
  <li><a href="#related-projects" id="markdown-toc-related-projects">Related projects</a>    <ul>
      <li><a href="#ibpsa-approves-modelica-working-group" id="markdown-toc-ibpsa-approves-modelica-working-group">IBPSA Approves Modelica Working Group</a></li>
    </ul>
  </li>
  <li><a href="#conferences-and-user-meetings" id="markdown-toc-conferences-and-user-meetings">Conferences and user meetings</a>    <ul>
      <li><a href="#openmodelica-workshop-2023" id="markdown-toc-openmodelica-workshop-2023">OpenModelica Workshop 2023</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#orchideo-124-easyssp-v1-2-now-available" id="markdown-toc-orchideo-124-easyssp-v1-2-now-available">orchideo | easySSP v1.2 now available</a></li>
      <li><a href="#model-aircraft-dynamics-using-the-new-aircraft-library-free" id="markdown-toc-model-aircraft-dynamics-using-the-new-aircraft-library-free">Model Aircraft Dynamics Using the New Aircraft Library (Free)</a></li>
      <li><a href="#announcing-simcenter-amesim-2304" id="markdown-toc-announcing-simcenter-amesim-2304">Announcing Simcenter Amesim 2304</a></li>
      <li><a href="#openmodelica-1-20-release" id="markdown-toc-openmodelica-1-20-release">OpenModelica 1.20 Release</a></li>
      <li><a href="#modelon-updates" id="markdown-toc-modelon-updates">Modelon updates</a></li>
      <li><a href="#altair-activate-is-going-to-support-fmi-3-0" id="markdown-toc-altair-activate-is-going-to-support-fmi-3-0">Altair Activate is going to support FMI 3.0</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#simulation-of-frosting-and-defrosting-with-til-suite" id="markdown-toc-simulation-of-frosting-and-defrosting-with-til-suite">Simulation of frosting and defrosting with TIL Suite</a></li>
      <li><a href="#new-system-modeler-blogs" id="markdown-toc-new-system-modeler-blogs">New System Modeler Blogs</a></li>
      <li><a href="#modelon-updates" id="markdown-toc-modelon-updates">Modelon updates</a></li>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>The <strong><a href="https://2023.international.conference.modelica.org/">International Modelica Conference 2023</a></strong> will take place <strong>Mo. Oct. 9 - Wed. Oct. 11, 2023, in Aachen, Germany</strong>, as a <strong>face-to-face conference</strong>. Deadline for scientific paper and industrial user presentation submissions is <strong>May 26, 2023</strong>. For more details, see <a href="#modelica-conference-2023-call-for-papers">article</a>.<br>
If you are interested to organize the next International Modelica Conference in 2025, please contact me.</p>

<p><strong><a href="https://specification.modelica.org/master/">Version 3.6 of the Modelica Language</a></strong> is finalized and will be soon formally released. It contains new features such as <em>multilingual support of Modelica</em> or <em>inheriting a model and removing some parts</em>. For more details, see <a href="#modelica-language-3-6-being-released">article</a>.</p>

<p>The <strong><a href="https://modelica.github.io/fmi-guides/main/fmi-guide/">FMI 3.0 implementers’ guide</a></strong> has been released. It gives non-normative recommendations for providing FMI 3.0 support in tools, but also using it. As an example, have a look at <a href="https://modelica.github.io/fmi-guides/main/fmi-guide/#adjointDerivatives">section 9.1.2</a> that shows how to efficiently compute gradients of FMI 3.0 models for artificial intelligence (AI) frameworks via <em>adjoint derivatives</em>. Teasers for some FMI 3.0 features are available as <a href="https://github.com/t-sommer/fmi3-features">Jupyter notebooks with Python code</a>. You can <a href="https://mybinder.org/v2/gh/t-sommer/fmi3-features/HEAD">run these notebooks in your browser</a> without any installation. We see more and more tools that support FMI 3.0. For the actual status, see <a href="https://fmi-standard.org/tools/">FMI tools</a> and select <em>FMI Version 3.0</em>.</p>

<p>The MAP (Modelica Association Project) FMI currently works mainly on <strong>layered standards</strong> for certain extensions of FMI 3.0, e.g., for simulation of network communication. Also, <a href="https://efmi-standard.org/">eFMI</a> can be seen as an extremly powerful layered standard extension of FMI. Layered standards are a concept first introduced in the SSP standard, and then adopted to FMI. See <a href="https://fmi-standard.org/docs/3.0/#VersioningLayered">FMI 3.0, section 2.6</a> for more information. It allows to perform open source and commercial extensions of the FMI standard in a backwards compatible way, in particular also by third parties that have no relation to MAP FMI.</p>

<p><img align="right" src="ma-t-shirt.png"></p>

<p>The MA (Modelica Association) board has finally decided to base the MA web pages technically on the static site generator <a href="https://gohugo.io/">Hugo</a> using the <a href="https://fmi-standard.org/">fmi-standard.org</a> web page as a template. Hugo has the advantage that it is simple to use (just download and run the executable for your platform; provide content especially with markdown files), has a modern layout and is actively maintained. For more info, see the <a href="https://github.com/modelica/fmi-standard.org">sources of the fmi-standard.org website</a> and the <a href="https://github.com/modelica/ma-hugo-theme">ma-hugo-theme</a>. In the near future, all other MAPs and the MA entry web page will be based on Hugo.</p>

<p>Recall that Modelica Association has now a <a href="https://ma-merch.myspreadshop.de/">Spreadshirt Shop</a> where you find T-Shirts, hoodies, coffee cups and stickers with various logos from the Modelica Association and its standards.</p>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities, please follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>. Consider also providing articles on how Modelica Association standards, associated tools and libraries are helping to address the <strong>climate and energy crisis</strong> to reduce net greenhouse gas emissions and to exploit energy savings in areas that used to be ignored due to low energy prices in the past. We see a large increase of using Modelica Association standards, tools and libraries for this purpose (e.g., optimizing energy production/submission, green hydrogen production/submission, factories, buildings, supermarkets, heat pumps, electrical cars). For example, see ABB’s online optimization tool chain <a href="https://new.abb.com/power-generation/energy-management/optimax-solution-suite/optimax-for-green-hydrogen">OPTIMAX</a>®  which is based on <em>the Modelica language, FMI, OpenModelica</em> and helps improving energy production and reducing greenhouse gas emissions world-wide in large scale. Also, <em>Modelica language and Modelons Impact</em> is helping Honda Motor Company to <a href="https://modelon.com/support/becoming-carbon-neutral-with-system-simulation-honda/">transition automotive production plants to be carbon neutral</a>. <br>
The deadline for articles for the next newsletter is Friday, July 7, 2023.</p>

<p>Martin Otter on March 3, 2023</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="fmi-3-0-implementers-guide-jointly-published-by-prostep-ivip-and-modelica-association-project-fmi">FMI 3.0 Implementers Guide jointly published by prostep ivip and Modelica Association Project FMI</h2>

<div style="float: right">
  <p><img src="FMI_logo_horizontal.svg" alt="fmi-logo"></p>
</div>

<div style="float: right">
  <p><img src="prostep_logo.svg" alt="prostep-logo"></p>
</div>

<h4 id="fmi-30-implementers-guide-jointly-published-by-prostep-ivip-and-modelica-association-project-fmi">FMI 3.0 Implementers’ Guide jointly published by prostep ivip and Modelica Association Project FMI</h4>

<p>The <a href="https://modelica.github.io/fmi-guides/main/fmi-guide/">FMI 3.0 Implementers’ Guide</a> is a free resource intended to give non-normative recommendations and guidance to implementers of the Functional Mock-up Interface (FMI) standard version 3.0.
It has been developed jointly by the prostep ivip Smart Systems Engineering project and the Modelica Association Project FMI.
The FMI 3.0 Implementers’ Guide provides best practice recommendations to implementers of FMI, focusing on FMI 3.0, derived from the industrial experience of the prostep Smart Systems Engineering project members and the FMI community in employing FMI.</p>

<p>The overarching goal of the recommendations is to aid interoperability of FMI implementations and ensure good ease-of-use for end users in employing FMI. 
The FMI 3.0 Implementers’ Guide is intended for tool vendors planning to support FMI in their products, for importing and exporting FMUs.
It assumes a technical audience familiar with the specification documents and tries to give further information and hints in areas where either the relevant specification documents have been found less clear than expected or where user expectations are relevant to implementation choices.
It also considers errors and bugs encountered in the practical use of existing FMI implementations and guides to avoid common pitfalls.
It is intended as a living document and will be maintained and expanded over time as new issues or needs for clarification appear.
All of the content is to be considered non-normative and shall not be considered to supplant any normative statement in the FMI 3.0 standard.</p>

<p>Releases and issues can be found on <a href="https://github.com/modelica/fmi-guides/tree/main/fmi-guide">github.com/modelica/fmi-guides</a>.</p>

<h5 id="modelica-assocation-project-fmi">Modelica Assocation Project FMI</h5>

<p>Webpage: <a href="https://fmi-standard.org/">https://fmi-standard.org/</a>,  Email: <a href="mailto:contact@fmi-standard.org">contact@fmi-standard.org</a></p>

<h4 id="about-prostep-ivip-and-the-smart-systems-engineering-project">About prostep ivip and the Smart Systems Engineering project</h4>

<p>The prostep ivip association is an international association committed to the development of innovative approaches to solving problems and modern standards for product data management and virtual product creation.
It bundles the interests of manufacturers and suppliers in manufacturing industry as well as IT vendors, in close cooperation with research and science institutes, to provide its members with the long-term competitive advantages that more efficient processes, methods and systems provide.
The prostep ivip Smart Systems Engineering project develops recommendations for process design, promotes technical standards for the cooperative development of complex mechatronic systems, and supports the creation of transparency with regard to systems engineering objects both within and across companies.</p>

<p>Webpage: prostep ivip association: <a href="https://www.prostep.org/">http://prostep.org</a>, Smart Systems Engineering Project: <a href="https://www.prostep.org/projekte/smart-systems-engineering/">www.prostep.org/projekte/smart-systems-engineering/</a></p>

<p><em>This article is provided by <a href="https://fmi-standard.org/">MAP FMI</a></em></p>

<h2 id="modelica-conference-2023-call-for-papers">Modelica Conference 2023 - Call-for-Papers</h2>
<p><img src="ModelicaConference2023.png" alt="Modelica2023Logo"></p>

<p>The <strong><a href="https://2023.international.conference.modelica.org/">15th International Modelica Conference 2023</a></strong> will be back <strong>in person</strong> in <strong>Aachen, Germany, Mo. Oct. 9 - Wed. Oct. 11, 2023</strong>, as a <strong>face-to-face conference</strong>. Organized by Prof. Dirk Müller and his team from <a href="https://www.ebc.eonerc.rwth-aachen.de/cms/~dmzz/E-ON-ERC-EBC/?lidx=1">RWTH Aachen University / Institute for Energy Efficient Buildings and Indoor Climate</a>, in cooperation with <a href="https://www.fz-juelich.de/en/iek/iek-10">Jülich Forschungszentrum</a> and the <a href="https://modelica.org/">Modelica Association</a>, the conference will take place at the location “das Liebig” in <a href="https://www.aachen-tourismus.de/en">Aachen</a>, Germany. We are excited to have the Modelica Association community back together in an International Modelica Conference since 2019 and have the opportunity to talk in person to each other about Modelica language/libraries, FMI, eFMI, SSP, DCP, applications and more. Besides the scientific program, there will be an exhibition, tutorials, vendor sessions, FMI workshop, industrial user presentations, and a best Modelica library award.</p>

<p>Check out the  <a href="https://2023.international.conference.modelica.org/call2023.html">call for paper</a>. You are encouraged to submit</p>

<ul>
  <li>a <strong>full scientific paper</strong> of at least 4 pages with a maximum of 10 pages, and/or</li>
  <li>an extended abstract of 1-2 pages for an <strong>industrial user presentation</strong>.</li>
</ul>

<p><strong>Submission deadline is May 26, 2023</strong>. The paper submission will open soon. Acceptance of scientific papers is based on a peer-review process with 3 experts per article.</p>

<p>If you would like to present a tutorial on Monday Oct. 9, 13:00 - 16:00, please send title, presenters, short abstract to <a href="mailto:mc15@eonerc.rwth-aachen.de">“mc15@eonerc.rwth-aachen.de”</a></p>

<p>After the conference, there will be a Modelica Association meeting on Thursday, Oct. 12 at the E.ON Energy Research Center in Aachen. Guests are welcome. Preliminary agenda:</p>

<ul>
  <li>9:00 - 12:00: Coordination meeting of Modelica Association Projects (MAPs)</li>
  <li>13:00 - 16:00: Parallel MAP meetings (FMI, Modelica language)</li>
</ul>

<p><em>This article is provided by Dominik Hering (<a href="https://www.ebc.eonerc.rwth-aachen.de/cms/~dmzz/E-ON-ERC-EBC/?lidx=1">RWTH Aachen University</a>)</em></p>

<h2 id="modelica-language-3-6-being-released">Modelica Language 3.6 being released</h2>
<h4 id="modelica-language-specification-36-being-released-on">Modelica Language Specification 3.6 being released on</h4>

<p>The new Modelica Language Specification has been accepted by MAP-Lang and will later be voted on by Modelica Association.</p>

<p>It provides three main new highlights to ease the development of Modelica models, and 100+ minor improvements.
https://specification.modelica.org/master/modelica-revision-history.html#main-changes-in-modelica-3-6</p>

<p>The following is a short description of those highlights, but each comes with a rationale giving more details and additional uses.</p>
<ul>
  <li><a href="https://specification.modelica.org/master/inheritance-modification-and-redeclaration.html#removing-modifiers-break">Undefined modification</a> - this allows making a parameter undefined, e.g., to force users of the model to explicitly set it.</li>
  <li><a href="https://specification.modelica.org/master/inheritance-modification-and-redeclaration.html#selective-model-extension">Selective Model Extension</a> - this allows inheriting a model and removing some parts, e.g., to remove a simple connection to replace it by a filter. See also the <a href="https://ep.liu.se/en/conference-article.aspx?series=ecp&amp;issue=157&amp;Article_No=29">conference paper</a>.</li>
  <li><a href="https://specification.modelica.org/master/packages.html#multilingual-descriptions">Multilingual support of Modelica</a> - this allows providing for instance a German translation of a Modelica Library without changing the Library itself.</li>
</ul>

<p>Several tools have already developed full implementations or protypes for these features, including the user experience (e.g., making modifiers undefined or deselecting components in the user interface).</p>

<p>The Multilingual support in the language is intended as a first step to allow library developers to provide translations in a tool-independent way.</p>

<h4 id="modelica-assocation-project-language">Modelica Assocation Project Language</h4>

<p>Webpage: <a href="https://github.com/modelica/ModelicaSpecification">Github page</a>.</p>

<p><em>This article is provided by MAP Lang</em></p>

<h1 id="related-projects">Related projects</h1>

<h2 id="ibpsa-approves-modelica-working-group">IBPSA Approves Modelica Working Group</h2>
<p><img src="https://user-images.githubusercontent.com/46685675/219879093-1a1e27a4-9d9d-4799-b141-593797732797.png" width="250"></p>

<p>The <a href="http://www.ibpsa.org/">International Building Performance Simulation Association (IBPSA)</a> approved on January 25, 2023, the
formation of the <em>IBPSA Modelica Working Group</em>.
The IBPSA Modelica Working Group will further develop the <a href="https://github.com/ibpsa/modelica-ibpsa">Modelica IBPSA Library</a>,
a library that originated from the <a href="https://https://www.iea-annex60.org/">International Energy Agency (IEA) Annex 60</a>
and the subsequent <a href="https://ibpsa.github.io/project1/">IBPSA Project 1</a>.
The group will meet monthly to coordinate the development of the library.</p>

<p>The library is used as the core of the following Modelica library:</p>

<ul>
  <li>AixLib, from RWTH Aachen University, Germany, (https://github.com/RWTH-EBC/AixLib),</li>
  <li>Buildings, from LBNL, Berkeley, CA, USA, (https://simulationresearch.lbl.gov/modelica),</li>
  <li>BuildingSystems, from UdK Berlin, Germany, (https://www.modelica-buildingsystems.de), and</li>
  <li>IDEAS, from KU Leuven, Belgium, (https://github.com/open-ideas/IDEAS).</li>
</ul>

<p>These libraries extend the Modelica IBPSA Library and user support is typically provided through
the distributions of the above libraries.</p>

<p>A further purpose of the group is to
coordinate the needs of the IBPSA community with the Modelica Association and
with Modelica modeling and simulation environment developers.</p>

<p>Participation in the working group is open to anyone who intends to contribute.
See the
<a href="https://github.com/ibpsa/modelica-working-group/wiki/Meetings">meeting schedule</a> for upcoming meetings,
and see the <a href="https://github.com/ibpsa/modelica-working-group/blob/main/reports/2023-proposal-approved/build/latex/ibpsa_modelica.pdf">approved proposal</a>
for further details.</p>

<p><em>This article is provided by Michael Wetter (<a href="https://www.lbl.gov/">Lawrence Berkeley National Laboratory</a>)</em></p>

<h1 id="conferences-and-user-meetings">Conferences and user meetings</h1>

<h2 id="openmodelica-workshop-2023">OpenModelica Workshop 2023</h2>
<p>The 15th OpenModelica Annual Workshop organized by the Open Source Modelica Consortium was held successfully in Linköping, Sweden, on February 6, 2023. Workshop chairs were Lena Buffoni and Lennart Ochel. New results and applications regarding the OpenModelica platform were presented, including Status and directions of OpenModelica, modeling and simulation of large-scale models, Techniques for dynamic overconstrained connectors, Power system Var compensator model, Translator from system dynamics to Modelica, Library for batch chemical processing, A bolted joint model in Modelica, Technical overview of OpenModelica status, Generic Bi-rate ODE solver, Status of the new Backend, The new OpenModelica Instance-based API, OpenModelica applications at VTI, Green hydrogen and model-based applications for the energy transition.</p>

<p>The program and the presentations are available <a href="https://openmodelica.org/events/openmodelica-workshop/2023/">here</a></p>

<p><a href="casella.png"><img src="casella_s.jpg" alt=""></a></p>

<p>Francesco Casella, OSMC director presents new results on simulation of large-scale Modelica Models with array-preserving technology using OpenModelica.</p>

<p><a href="lennart.png"><img src="lennart_s.jpg" alt=""></a></p>

<p>Lennart Ochel (VTI), workshop chairperson, presents directions and usage of OpenModelica technology for driving simulators at the Swedish Road and Traffic Institute (VTI).</p>

<p><em>This article is provided by Peter Frtizson <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="orchideo-124-easyssp-v1-2-now-available">orchideo | easySSP v1.2 now available</h2>
<p><img src="easySSP-newsletter.png" alt="alt text" title="orchideo | easySSP v1.2">
orchideo | easySSP v1.2 is available and comes with an updated UI and new features for model editing, Cloud-based simulation and process documentation.</p>

<h4 id="easy-fmi-component-implementation-and-ssp-integration">Easy FMI Component Implementation and SSP Integration</h4>
<p><img src="fmu-hull-export-ssp-navigation.png" alt="alt text" title="FMI hull export in orchideo | easySSP">
easySSP now offers the ability to export FMI component hulls for your SSP System Structures. These component hulls contain all relevant interface information and then can be imported to any FMI compliant modeling tool and act as a starting point for implementation.</p>

<p>Moreover a new navigation header facilitates navigating the model hierarchy, when integrating existing SSP files into a SSP model.</p>

<h4 id="extended-ssp-traceability-support">Extended SSP Traceability Support</h4>
<p><img src="sbdp-edition-page.png" alt="alt text" title="New easySSP Process Edition">
orchideo | easySSP let’s you document simulation processes based on the upcoming SSP Traceability Layered Standard (release planned end of Q2/2023) and share this information as part of your SSP files. The new version adds support for the Simulation based Decision Process which fills the gap between the higher-level Product Development Process and concrete Credible Simulation Processes. All SSP Traceability documentation capabilities are offered in a brand new Process Edition of easySSP.</p>

<p>easySSP is completely based on open standards like FMI, SSP and SSP Traceability. Check out <a href="https://easy-ssp.com">easy-ssp.com</a> for more information!</p>

<p><em>This article is provided by Gregor Hermann, Peter Lobner <a href="https://www.exxcellent.de/">eXXcellent solutions</a></em></p>

<h2 id="model-aircraft-dynamics-using-the-new-aircraft-library-free">Model Aircraft Dynamics Using the New Aircraft Library (Free)</h2>
<p><img src="SystemModeler_Aircraft.png" alt="Alt text" title="Aircraft library"></p>

<p>The library allows you to model an aircraft design and simulate its flight through air for a given flight mission. You can test your design for its flight mechanics, controllability and performance (when it comes to fuel efficiency and maneuverability).</p>

<p>Some of the key features are:</p>
<ul>
  <li>Built-in weight estimation method to set up new aircraft models from a small set of parameters</li>
  <li>Numerous example models that show the wide variety of scenarios that can be modeled with the library, such as aircraft failures, electric aircraft performance and launch of a towed glider</li>
  <li>Quickly configurable aircraft components</li>
</ul>

<p><a href="https://www.wolfram.com/system-modeler/libraries/aircraft/">Click here</a> to download the library.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="announcing-simcenter-amesim-2304">Announcing Simcenter Amesim 2304</h2>
<p><a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a> is pleased to announce that Simcenter Amesim 2304 is expected to be released on April 28, 2023, as part of its system simulation solutions. 
This release will be the first to introduce the export of FMUs for co-simulation, complying with version 3.0 of the FMI specification.</p>

<p><img src="amesim_banner_2304.png" alt=""></p>

<h4 id="introducing-30-fmus-for-co-simulation">Introducing 3.0 FMUs for co-simulation</h4>
<p>With Simcenter Amesim 2304, users will be able to export their models as 3.0 FMUs for co-simulation. 
As before, in addition to native Simcenter Amesim components, models can be hybridized with Modelica blocks, pretrained neural networks, Statecharts or previously imported Simulink models. 
The following 3.0 specific features will be supported:</p>
<ul>
  <li><a href="https://fmi-standard.org/docs/3.0/#fmiTerminalsAndIcons">“FMI terminals”</a>, with the following <a href="https://newsletter.modelica.org/2021-03/index#fmi-physical-terminals-between-simcenter-amesim-and-simcenter-flomaster">example</a> of concrete application.</li>
  <li><a href="https://fmi-standard.org/docs/3.0/#BuildConfiguration">“Build configurations”</a>, to automate the handling of the FMUs specifically generated for the real-time targets supported by Simcenter Amesim.</li>
</ul>

<p>All capabilities that are currently supported by 2.0 FMUs will also be available with 3.0 FMUs, notably the recently introduced Windows to Linux cross-compilation, as already presented <a href="https://newsletter.modelica.org/2022-03/amesim_details.html">here</a>. Stay tuned!</p>

<p>For more information on Simcenter Amesim, please visit our <a href="https://www.plm.automation.siemens.com/global/en/products/simcenter/simcenter-amesim.html">website</a>.</p>

<p><em>This article is provided by Bruno Loyer (<a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a>)</em></p>

<h2 id="openmodelica-1-20-release">OpenModelica 1.20 Release</h2>
<p>The Open Source Modelica Consortium is happy to announce the recent OpenModelica 1.20 release.</p>

<p>The first most notable feature of this release is the automatic installation of the Modelica Standard Library (MSL), which is now fully integrated with the Package Manager. Every time any tool of the OpenModelica suite (e.g. OMEdit, OMNotebook, OMShell, etc.) attempts to load a version of the MSL, it checks if it has already been installed in the user’s set of system libraries, which is handled by the Package Manager and is located in the user’s .openmodelica directory. If that directory is empty, either because of a fresh install, or because it has been deleted, then the MSL is automatically installed in the user’s system libraries from cached zip files in the OpenModelica installation directory; in fact, both MSL 3.2.3 (which is backwards compatible with 3.2.2 and 3.2.1) and 4.0.0 are installed, so that any library created during the last ten years can run out of the box.</p>

<p><img src="packagemanager.png" alt=""></p>

<p>This automatic installation does not require any Internet connection, so it also works behind corporate firewalls or in situations with limited available bandwidth. This solution uses the same package manager that is also used to install other system libraries, contrary to the solution implemented in versions 1.18.0 and 1.19.x, which used two different directories in the MODELICAPATH, one for the package manager and one for the preinstalled MSL, leading to slightly confusing duplicate installations of MSL.</p>

<p>OMEdit loads MSL 4.0.0 by default in the Libraries Browser. However, if one then loads a package using MSL 3.2.3, it is possible to unload MSL 4.0.0 and load MSL 3.2.3 just with a click of a button.</p>

<p>The second most notable feature is that a new general purpose ODE solver, named gbode, was introduced. This solver is a fully configurable single-step solver, supporting many different integration methods, both explicit and implicit, using either fixed time step or variable time step with error control, handling event detection and dense output for accurate resampling over a regular time grid. Implemented methods include Euler, Heun, Dormand-Prince, Gauss, Radau, Lobatto, Adams-Moulton, Fehlberg, SDIRK, ESDIRK, etc. Adaptive multi-rate algorithms are also available within this solver, although this feature is still experimental. This solver replaces previously available solvers like euler, impeuler, trapezoid, etc., which are now deprecated and will be removed in future versions of the tool.
The gbode solver is currently only available via simulation flags, which can be set in OMEdit under Simulation Setup | Simulation Flags | Additional Simulation Flags (optional). It will be supported via drop-down menus in future releases. See the User’s Guide under <a href="https://openmodelica.org/doc/OpenModelicaUsersGuide/1.20/solving.html">Solving Modelica Models</a> for further information.</p>

<p><em>This article is provided by Francesco Casella <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h2 id="modelon-updates">Modelon updates</h2>
<h4 id="modelon-20231-release">Modelon 2023.1 release</h4>

<p><img src="Modelon_Release_2023.1_v1.jpg" alt="Modelon 2023.1 release"></p>

<p>The Modelon 2023.1 Release contains support for FMU cross-compilation to Windows, improved diagnostics, updated libraries, and more! Check out the details in the <a href="https://help.modelon.com/latest/release_notes/impact_2023_1/">Modelon Help Center</a>.</p>

<h4 id="video-testimonials">Video Testimonials</h4>

<p><img src="Modelon Video Testimonials.png" alt="Modelon Video Testimonials"></p>

<p>The Modelon team has conducted videos with customers detailing why they chose Modelon, their use cases, and how their experience has been working with Modelon Impact. <a href="https://modelon.com/support-learning/resources/?_resource_type=testimonial">Watch the videos here</a>.</p>

<h4 id="upcoming-events">Upcoming Events</h4>

<p><img src="Modelon Upcoming Events.jpg" alt="Modelon Upcoming Events"></p>

<p>Visit Modelon teams onsite at The Distributed Energy Show in Telford and World Smart Energy Week in Tokyo! For more event information, <a href="https://modelon.com/company/events/">click here</a>.</p>

<p><em>This article is provided by Kenzie Maurice, Modelon (https://modelon.com)</em></p>

<h2 id="altair-activate-is-going-to-support-fmi-3-0">Altair Activate is going to support FMI 3.0</h2>
<p>Altair is pleased to announce FMI 3.0 support in the next release of the system simulation software Activate (version 2022.3) as part of its Model Based Design product solution. 
This release will be the first to introduce the import and the export of FMUs for Model Exchange and Co-Simulation supporting the new FMI-3.0 specification.</p>

<p>All features supported for FMI-2.0 import/export in previous Activate releases will also be supported in FMI-3.0 import/export.</p>

<h4 id="fmi-30-for-modelexchange-co-simulation-and-source-code">FMI-3.0 for ModelExchange, Co-Simulation, and source code</h4>
<p>With Altair Activate 2022.3, continuous-time and clocked based models can be exported as 3.0 FMUs for ModelExchange and Co-Simulation, as well as the source code.</p>

<p>The following 3.0 specific features will be supported:</p>
<ul>
  <li><a href="https://fmi-standard.org/docs/3.0/#Clock">“Clock”</a>, to handle clocked and discrete-time models for ModelExchange and CoSimulation.</li>
  <li><a href="https://fmi-standard.org/docs/3.0/#fmu-variables">“Variables”</a>, to handle 1D and 2D input/output variables and variables with new integer data-types.</li>
  <li><a href="https://fmi-standard.org/docs/3.0/#BuildConfiguration">“Source code and build description”</a>, to enable automatic compilation of exported FMUs for real-time and different operating systems.</li>
</ul>

<p>For more information on Altair Activate, please visit our <a href="https://www.altair.com/activate">website</a>.</p>

<p><em>This article is provided by Masoud Najafi <a href="https://altair.com/activate">Altair</a></em></p>

<h1 id="education-news">Education news</h1>

<h2 id="simulation-of-frosting-and-defrosting-with-til-suite">Simulation of frosting and defrosting with TIL Suite</h2>
<p>TIL Suite is suitable for the stationary and transient simulation of all types of thermodynamic systems. Thanks to the fast calculation of thermophysical properties (TILMedia) and many other numerical optimizations, complex thermal systems such as reversible heat pump systems can be dynamically simulated.</p>

<p><img src="tlk-tilsuite-frostdefrost.png" alt="TIL frosting"></p>

<p>The next release <strong>TIL Suite 3.14.0</strong> in April 2023 features a typical air-water heat pump example with propane as the refrigerant. It includes a plate heat exchanger as condenser, which can heat water either for the house heating system or the hot water tank, shown as the two blue circuits with the three-way valve for switching. On the low-pressure side of the green refrigerant circuit is a fin-and-tube evaporator. The moisture of the ambient air flow (orange) through the evaporator can condense and freeze at low temperatures. Due to a partial blockage of the air-side heat exchanger by frost and ice, the system efficiency / COP (coefficient of performance) will decrease. By reversing the refrigerant flow using a four-way valve the evaporator is defrosted.</p>

<p>With such a TIL Suite model, it is possible to</p>

<ul>
  <li>conduct parameter studies e.g., using <a href="https://www.tlk-thermo.com/index.php/en/software/moba-automation">MoBA Automation</a></li>
  <li>analyse the system behaviour e.g., using thermo-dynamic visualization in <a href="https://www.tlk-thermo.com/index.php/en/software/dave">DaVE</a></li>
  <li>optimize control strategies and parameters e.g., using <a href="https://www.tlk-thermo.com/index.php/en/software/optimization-suite">Optimization Suite</a></li>
</ul>

<p>For further information visit <a href="https://www.tlk-thermo.com/index.php/en/til-suite">www.tlk-thermo.com</a> or contact us at <a href="mailto:til@tlk-thermo.com">til@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Ingo Frohböse <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="new-system-modeler-blogs">New System Modeler Blogs</h2>
<h4 id="develop-a-growth-strategy-for-a-saas-company">Develop a Growth Strategy for a SaaS Company</h4>

<p><img src="SM_SaaS_blog.png" alt="Alt text" title="SaaS blog"></p>

<p>Watching Shark Tank and wondering what terms like “growth rate” or “market size” say about a company’s performance? See how to model a business in Wolfram System Modeler and analyze different business strategies. <a href="https://blog.wolfram.com/2023/02/10/develop-a-growth-strategy-for-a-saas-company-with-wolfram-system-modeler/">Read more…</a></p>

<h4 id="formation-flight-with-the-wolfram-system-modeler-aircraft-library">Formation Flight with the Wolfram System Modeler Aircraft Library</h4>

<p><img src="SM_FlightFormation_blog.png" alt="Alt text" title="Aircraft blog"></p>

<p>The Swedish Air Force has an annual tradition of greeting the people of Sweden at the end of the year by flying their fighter jets in a formation shaped like a Christmas tree. Check out this blog where we define a flight mission and simulate a formation flight using an autopilot. <a href="https://blog.wolfram.com/2023/02/16/formation-flight-with-the-wolfram-system-modeler-aircraft-library/">Read more…</a></p>

<p><a href="https://www.wolfram.com/system-modeler/what-is-new/">Click here</a> to read the latest System Modeler news.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="modelon-updates">Modelon updates</h2>
<h4 id="modelon-resource-driving-towards-carbon-neutrality-with-system-simulation">Modelon Resource: Driving Towards Carbon Neutrality With System Simulation</h4>

<p><img src="Modelon_co_neutral.jpg" alt="Modelon CO neutrality"></p>

<p>As part of Honda’s mission to become carbon neutral by 2050, their engineering team was tasked with assessing a variety of carbon reduction options on an existing production plant to make strategic system design and cost-effective decisions. <a href="https://modelon.com/support/becoming-carbon-neutral-with-system-simulation-honda/">Read more here</a>.</p>

<h4 id="modelon-blog-2023-sustainable-aircraft-technology-and-trends">Modelon Blog: 2023 Sustainable Aircraft Technology and Trends</h4>

<p><img src="Modelon_Sustainable_Aviation.jpg" alt="Sustainable Aircraft Technology and Trends"></p>

<p>With current trends in the aerospace industry, we’re getting closer to more sustainable aviation. In this blog, we look at emerging trends like SAF, ultra-high bypass ratio geared turbofan, and partially electric (“hybrid”) propulsion. <a href="https://modelon.com/blog/aircraft-technology-trends-improvements-2023/">Read more here</a>.</p>

<h4 id="knowledge-pages">Knowledge Pages</h4>

<p><img src="HVACR page.svg" alt="HVAC&amp;R page"></p>

<p>Visit the new <a href="https://modelon.com/industries/hvac-and-refrigeration-system-simulation-solution/">HVAC&amp;R page</a> and <a href="https://modelon.com/services/">Modelon Services page</a> to learn more about HVAC&amp;R simulation applications and ways Modelon can help speed up your engineering design process.</p>

<p><em>This article is provided by Kenzie Maurice, Modelon (https://modelon.com)</em></p>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2022/05/Claytex-TECHNIA-COMPANY-RGB-217-90.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.linkedin.com/showcase/our-technical-blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<h4 id="documentation-in-your-dymola-models">Documentation in your Dymola Models</h4>

<p>I spend a lot of time looking at Dymola models created by others, and a big factor in a model’s user friendliness is the quality of the documentation included. So, in this blog post, I’m going to take a look at the documentation options available in Dymola.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/02/Documentation-Image-1_Modelica-NL.png" alt="Documentation Image1" title="Documentation Image1"></p>

<p>Read the complete article <a href="https://www.claytex.com/blog/methods/documentation-in-your-dymola-models/">here</a></p>

<h4 id="improve-performance-by-using-different-compilers-in-dymola">Improve performance by using different compilers in Dymola</h4>

<p>Sometimes using a different C compiler can result in a model simulating faster. In this post we look at how the different Windows compilers, Visual Studio, Visual Studio with Clang, MinGW and MinGW with Clang can be used to compile a Dymola model and potentially create executables that simulate the models faster.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/02/Improve-performance-Image-2_Modelica-NL.png" alt="Improve performance Image2" title="Improve performance Image2"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/improve-performance-by-using-different-compilers-in-dymola/">here</a></p>

<h4 id="what-can-you-get-out-of-a-detailed-simulation-taking-a-look-at-a-fuel-cell-electric-bus-model">What can you get out of a detailed simulation? Taking a look at a Fuel Cell electric bus model</h4>

<p>Last year as part of the 2022.1 release of the VehicleDemos library, Claytex added a Hydrogen Fuel Cell Electric (FCEV) bus model. Created out of the existing EV bus example, it showcased integrating models from the Hydrogen Library with VeSyMA vehicle models. Ambitiously, a high level of detail was included. Physical air and hydrogen supply models were built, coupling with a fuel cell stack model where current production was dependent upon the pressure and temperature of the reactants.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/02/Fuel-Cell-Electric-Bus-Image-3_Modelica-NL.png" alt="Fuel Cell Electric Bus Image3" title="Fuel Cell Electric Bus Image3"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/what-can-you-get-out-of-a-detailed-simulation-taking-a-look-at-a-fuel-cell-electric-bus-model/">here</a></p>

<h4 id="simulating-knc-rigs">Simulating KnC Rigs</h4>

<p>The Suspensions library is full of experiments that test the full vehicle dynamics. However, it can be very difficult to validate models using full vehicle experiments, such as the common Kinematic and Compliance (KnC) test. This kind of test, as the name suggests, details the suspension kinematics (force and movement as the result of regular suspension operation) and the compliance (amount of force and movement in directions that aren’t bump or steering) of a vehicle.
These tests are conducted on KnC rigs, which are large experiment platforms with actuators and measuring equipment, normally designed to test full vehicles. How this is done is dependent on the tests carried out, but in its simplest form it consists of 4 pads that support the vehicle, which can be moved up and down to simulate road input. This tests suspension reaction to known inputs, such as sinusoidal sweeps or measured road inputs.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/02/Simulation-KnC-Rigs-Image-4_Modelica-NL.png" alt="Simulation KnC Rigs Image4" title="Simulation KnC Rigs Image4"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/simulating-knc-rigs/">here</a></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

</section>
{{</rawhtml>}}