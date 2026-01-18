---
title: Newsletter 2023-03
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
          <p><img src="Modelica.svg" alt="Modelica newsletter 2023-03 logo"></p>

<h1 class="no_toc" id="table-of-contents">Table of contents</h1>

<ul id="markdown-toc">
  <li><a href="#letter-from-the-board" id="markdown-toc-letter-from-the-board">Letter from the Board</a></li>
  <li><a href="#modelica-association" id="markdown-toc-modelica-association">Modelica Association</a>    <ul>
      <li><a href="#fmi-news" id="markdown-toc-fmi-news">FMI news</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#orchideo-easyssp-v1-2-8-now-available" id="markdown-toc-orchideo-easyssp-v1-2-8-now-available">orchideo | easySSP v1.2.8 now available</a></li>
      <li><a href="#xrg-product-news-and-contributions-to-the-international-modelica-conference-2023" id="markdown-toc-xrg-product-news-and-contributions-to-the-international-modelica-conference-2023">XRG Product News and Contributions to the International Modelica Conference 2023</a></li>
      <li><a href="#simcenter-amesim-2310-released" id="markdown-toc-simcenter-amesim-2310-released">Simcenter Amesim 2310 released</a></li>
      <li><a href="#openmodelica-1-22-0-released" id="markdown-toc-openmodelica-1-22-0-released">OpenModelica 1.22.0 Released</a></li>
      <li><a href="#modelon-news" id="markdown-toc-modelon-news">Modelon News</a></li>
      <li><a href="#dymola-2024x" id="markdown-toc-dymola-2024x">Dymola 2024x</a></li>
    </ul>
  </li>
  <li><a href="#news-from-libraries" id="markdown-toc-news-from-libraries">News from libraries</a>    <ul>
      <li><a href="#tlk-til-suite-new-version-3-15-0" id="markdown-toc-tlk-til-suite-new-version-3-15-0">TLK TIL Suite - New version 3.15.0</a></li>
      <li><a href="#processmodelling-library" id="markdown-toc-processmodelling-library">ProcessModelling library</a></li>
      <li><a href="#upcoming-free-rotating-machinery-library" id="markdown-toc-upcoming-free-rotating-machinery-library">Upcoming - Free Rotating Machinery Library</a></li>
      <li><a href="#testing-library-1-7-0-introducing-clocked-tests" id="markdown-toc-testing-library-1-7-0-introducing-clocked-tests">Testing Library 1.7.0: Introducing clocked tests</a></li>
      <li><a href="#upcoming-free-aircraft-library" id="markdown-toc-upcoming-free-aircraft-library">Upcoming - Free Aircraft Library</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#efmi-tutorial-from-modelica-conference-available" id="markdown-toc-efmi-tutorial-from-modelica-conference-available">eFMI® Tutorial from Modelica Conference available</a></li>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>The <a href="https://2023.international.conference.modelica.org/">International Modelica Conference 2023</a>
took place on Mo. Oct. 9 - Wed. Oct. 11, 2023, in Aachen, Germany, as a face-to-face conference.
It was a pleasure to meet many of you in person again, exchange ideas and getting a lot of information.
The local organizers from <a href="https://www.ebc.eonerc.rwth-aachen.de/cms/E-ON-ERC-EBC/~dnac/Das-Institut/?lidx=1">RWTH Aachen University</a>
provided a perfectly organized event in a nice, spacious conference center.</p>

<p>The scientific papers of the conference are available from the <a href="https://www.conftool.com/modelica2023/sessions.php">conference tool</a> 
by scrolling down and clicking on a particular session.</p>

<p>The slides of the <strong>Modelica Association News</strong> session are available <a href="https://2023.international.conference.modelica.org/Documents/MA-News_Modelica2023.pdf">here</a> providing
information about the status of the Modelica Association projects, 
large research projects in the Modelica Association community and the <a href="https://ma-merch.myspreadshop.de/">Modelica Association Spreadshirt Shop</a>.</p>

<p><strong>Upcoming Modelica Conferences</strong></p>

<ul>
  <li>The American Modelica Conference 2024 will be held October 14-16 2024 in Storrs, Connecticut, organized by the North American Modelica Modelica Users Group NAMUG, The University of Connecticut and the Modelica Association.</li>
  <li>The Asian Modelica Conference 2024 will be held November 21-22 2024 in Seoul, South Korea, and is organized by the Institute of Vehicle Engineering, iVH and the Modelica Association.</li>
  <li>The Modelica Association Board is currently reviewing applications for the International Modelica Conference 2025</li>
</ul>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities, please 
follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.<br>
The deadline for articles for the next newsletter is Friday, February 9, 2024.</p>

<p>Martin Otter on November 13, 2023</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="fmi-news">FMI news</h2>

<p><img src="FMI.png" alt="FMI"></p>

<h4 id="fmi-at-the-modelica-conference">FMI at the Modelica Conference</h4>

<p>It was great to meet the FMI users and developers again in person at the Modelica Conference in Aachen!
The papers are avaialable as preprints in the <a href="https://www.conftool.com/modelica2023/sessions.php">conference session overview</a>.</p>

<h4 id="fmi-beginners-tutorial-available">FMI Beginners’ Tutorial available</h4>

<p>Watch the recording of the “FMI Beginners’ tutorial” from the Modelica Conference 2023 in Aachen <a href="https://www.youtube.com/watch?v=RlAafdCKCHU">on YouTube</a>, material available <a href="https://github.com/modelica/fmi-beginners-tutorial-2023">here</a>. 
Thanks to Cinzia Bernardeschi, Christian Bertsch, Cláudio Gomes, Maurizio Palmieri, Torsten Sommer for jointly preparing and holding this tutorial!</p>

<h4 id="fmi-compatibility-information-provided-in-the-fmi-tools-list">FMI Compatibility Information provided in the FMI Tools List</h4>

<p><img src="FMI_tools_page.png" alt="FMI tools page"></p>

<p>The <a href="https://fmi-standard.org/tools/">FMI tools page</a> now lists 192 tools supporting tools!</p>

<p>The tools listed on top and marked with the golden star now provide “compatibility information”: 
They document how the tool vendors have tested their FMU import and export capabilities and standard compliance with other tools. 
Exporting tools also provide example FMUs, that can be tested by other importing tools.
This information is provided on an external webpage or repository in the responsibility of the tool vendors.</p>

<h4 id="fmi-design-meeting-in-nov-2023-in-sindelfingen-stuttgart">FMI Design Meeting in Nov 2023 in Sindelfingen, Stuttgart</h4>

<p><img src="fmi-design-23-sindelfingen.jpg" alt="FMI Design Meeting Sindelfingen"></p>

<p>FMI developers from Akkodis, AVL, Bosch, Dassault Systemes, dSPACE, EKS-INTEC, ESI, ETAS, PMSF, Synopsys, and Wolfram MathCore participated.
Thanks to Akkodis for the great hospitality!</p>

<p>We focused on layered standards to FMI 3.0</p>

<ul>
  <li><a href="https://github.com/modelica/fmi-ls-xcp">FMI-LS-XCP</a> for XCP support (v1.0RC2 in preparation)</li>
  <li><a href="https://github.com/modelica/fmi-ls-bus">FMI-LS-BUS</a> for network communication (v1.0alpha in preparation)</li>
  <li><a href="https://github.com/modelica/fmi-ls-struct">FMI-LS-STRUCT</a> for maps and structuring of variables (concept work)</li>
  <li>and new ideas for layered standards reference source models, reference solutions, parameters sets</li>
</ul>

<p>Additionally we discussed possible efficiency optimizations for data transfer and access that can be addressed in FMI 3.1 (see also next paragraph).</p>

<h4 id="call-for-problems">Call for Problems</h4>

<p>Currently the FMI project starts working on FMI 3.1 and would like the to ask the FMI user community to <strong>report their current pain points and ideas for future development</strong>.
We currrently have the idea to work on efficiency: we have identified that for FMUs that handle a large amount of data communication compared to internal calculations, the current desig of FMI leads to overhead due to copy operation of data. 
This could be either due to a very large amount of scalar variables, or large data amounts in form of array or binary variables. Several solution approaches are in discussion, but currently the problem itself his not yet fully clear and has not yet been described in detail.
So, if you face efficiency problems in the simulation of FMUs that can be traced back to communication overheaed, please report them to us in form of use case descrption and problem statement.</p>

<p>More generally, <strong>if you have problems w.r.t. model exchange and co-simulation that cannot yet be solved well with FMI 3.0</strong>, please describe and send them either in the form of an <a href="https://github.com/modelica/fmi-standard/issues">Github issue</a> or via e-mail to <a href="contact@fmi-standard.org">contact@fmi-standard.org</a>.</p>

<h5 id="other-resources-and-discussion-forums-for-fmi-related-questions">Other Resources and Discussion Forums for FMI related Questions</h5>

<ul>
  <li>Join the <a href="https://www.linkedin.com/groups/7477473/">LinkedIn FMI community</a> to get the latsted news on FMI, FMI supporting tools and discussions within the user community.</li>
  <li>Follow the <a href="https://www.linkedin.com/company/modelica-association?originalSubdomain=se">Modelica Association on LinkedIn</a> to keep up to date w.r.t. the Modelica language and libraries, and the #FMI, #SSP, #DCP and #eFMI standards.</li>
  <li>Ask technical questions and discuss topics on the usage of FMI on <a href="https://stackoverflow.com/questions/tagged/fmi">Stackoverflow tagged “FMI”</a>.</li>
  <li>Report problems of the standard itself or suggestions for new features in form of issues on on <a href="https://github.com/modelica/fmi-standard/issues">fmi-standard.org</a>.</li>
</ul>

<p><em>This article is provided by MAP FMI</em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="orchideo-easyssp-v1-2-8-now-available">orchideo | easySSP v1.2.8 now available</h2>
<p><img src="easySSP-1_2_8.png" alt="alt text" title="orchideo \| easySSP v1.2.8">
orchideo | easySSP v1.2.8 is now available with a new documentation area, new integration options and extended support for Simulation Resource Metadata (SRMD).</p>

<h4 id="new-documentation">New Documentation</h4>

<p>easySSP now includes a new <a href="https://docs.easy-ssp.com/">Documentation area</a>, where you can find help and information to get started with easySSP.</p>

<h4 id="integration-api">Integration API</h4>

<p>easySSP’s Import/Export API allows to seamlessly integrate easySSP’s editor and simulation capabilities into existing tools and processes.</p>

<p>Additional, a new Simulation API lets you simulate SSP files with integrated FMI components in the easySSP Cloud, such as different model variants, parameterizations, input stimuli and targets (Windows/Linux 32/64).
All these aspects can be freely combined and the simulations started can be conveniently managed in a dedicated UI.</p>

<p>You can find more information about the easySSP Integration API in our public <a href="http://easy-ssp.gitlab-ext-pages.exxcellent.de/docs/integration-api/v1/">API Documentation</a>.</p>

<h4 id="extended-srmd-and-mic-core-support">Extended SRMD and MIC Core Support</h4>

<p>easySSP now offers an greatly improved SRMD editor with template and validation support for the new <a href="https://mic-core.github.io/MIC-Core/main/">MIC Core Standard</a> for efficient exchange of simulation model metadata published by <a href="https://www.irt-systemx.fr/en/">IRT SystemX</a> and <a href="https://www.prostep.org/en/">prostep ivip</a>.</p>

<p>Furthermore the new release includes many smaller new features and usability improvements such as:</p>

<ul>
  <li><a href="https://ssp-standard.org/">SSP</a> compliant System Structure Description (SSD) file import and export</li>
  <li>Support for placeholder resources in the SSP Traceability process documentation</li>
</ul>

<p>easySSP is completely based on open standards like FMI, SSP and SSP Traceability. Check out <a href="https://easy-ssp.com">easy-ssp.com</a> for more information!</p>

<p><em>This article is provided by Gregor Hermann, Peter Lobner <a href="https://www.exxcellent.de/">eXXcellent solutions</a></em></p>

<h2 id="xrg-product-news-and-contributions-to-the-international-modelica-conference-2023">XRG Product News and Contributions to the International Modelica Conference 2023</h2>
<h4 id="our-product-news">Our Product NEWS</h4>
<h5 id="xrg-humancomfort-and-fluiddynamics-library">XRG HumanComfort and FluidDynamics Library</h5>

<p>XRG offers two unique Modelica libraries that enable Navier-Stokes-based CFD coarse grid simulations in Dymola and Modelica. Profit from seamless coupling with system models and less computational effort for transient simulations.</p>

<p>Pre-processing and post-processing is provided by our <strong>Score lite</strong> Application which is a complementary feature of <a href="https://www.xrg-simulation.de/en/products/xrg-library/humancomfort">HumanComfort</a> and <a href="https://www.xrg-simulation.de/index.php/en/products/xrg-library/fluiddynamics">FluidDynamics Library</a>. If you already hold licenses of one or both libraries and do not have Score yet: Get in touch with us and <a href="mailto:humancomfort@xrg-simulation.de?subject=Request%20for%20Score%20lite">request</a> your <strong>free</strong> license of Score lite today.</p>

<p><img src="https://www.xrg-simulation.de/sites/default/files/inline-images/ScoreLite900.png" alt="XRG Coarse Grid CFD Tool-Chain" title="XRG Coarse Grid Tool-Chain using FREE Score lite"></p>

<h5 id="xrg-hvac-library">XRG HVAC Library</h5>

<p>The newest version 3.0.0 of our <a href="https://www.xrg-simulation.de/en/products/xrg-library/xrg-hvac-library">HVAC Library</a>, offering the fastest HVAC simulations on the market, is now available for</p>

<ul>
  <li>Dymola (Dassault Systèmes)</li>
  <li>OpenModelica</li>
  <li>Impact (Modelon)</li>
</ul>

<p><img src="HVAC_3.jpg" alt="HVAC Library 3.0.0" title="HVAC Library 3.0.0 offers multi-tool support"></p>

<p>The HVAC Library&nbsp;includes components to model conventional energy systems with gas or oil boilers, as well as sustainable, CO2-neutral systems with heat pumps, solar thermal collectors, photovoltaics&nbsp;and storage units. 
By using a pressure-free modelling approach, simulation results can be delivered very fast, even for complex systems. This makes the models ideal for annual simulations and automated optimization techniques.</p>

<p>The new version 3.1.0 of the HVAC Library got a comprehensive update and improvement of many component models which will be presented in the XRG vendor session on Mon., 9th (see above).</p>

<h5 id="xrg-score-application">XRG Score Application</h5>

<p><a href="https://www.xrg-simulation.de/en/products/applications/score">XRG Score</a> executes parallel Dymola or FMU simulations, imports <strong>large</strong> Dymola or OpenModelica result files and lets you filter and interpolate them. Our Score Application allows you to define and save all your simulation settings, model parameters and any results you require in a workbook and directly share them with others. You can run, import and report on any number of simulations over one of these workbooks. You can automatically transfer the results in Excel spreadsheet templates along with integrated charts and formulas.</p>

<p><img src="https://www.xrg-simulation.de/sites/default/files/2018-05/XRG-Grafik-Score-Kompatibilitaet-e-20180514.png" alt="XRG Score Add-in" title="XRG Score interaction with Excel and Dymola or FMU"></p>

<p>More technical features of Score:</p>
<ul>
  <li><strong>Multi-Threading</strong> (parameter sweeps on multiple CPU cores) of Dymola or FMU simulations</li>
  <li><strong>Automatized</strong> simulation process</li>
  <li>Import, filtering and interpolation of complex result files (Dymola, FMU and OM) in Excel</li>
  <li><strong>Easy exchange</strong> of Excel workbooks</li>
  <li>Template reports</li>
  <li>Broad support of MS Office versions through COM add-in</li>
</ul>

<p>The new version 1.9 incorporates some interesting features about post-processing of HumanComfort and FluidDynamics CFD results and more. Please attend the XRG vendor session on Mon., 9th (see above).</p>

<h5 id="claraplus-library">ClaRaPlus Library</h5>

<p>Well established <a href="https://www.claralib.com/index.php?lang=en">ClaRaPlus Modelica library</a> provides its users with the capability to proficiently tackle tasks in the disciplines of thermal hydraulics, instrumentation and control pertaining to power plants and other kind of energy systems. Based on the needs of steadily growing community of ClaRaPlus users community, it has broadened its scope over the years of its development, transcending the original focus on conventional power plants to encompass renewable power plants, waste heat utilization, general process plants, refrigeration cycles, heat pumps and beyond.</p>

<p>The recent version 1.7.1 of ClaRaPlus brings an exciting addition to the already impressive suite of features - support for the utilization of various artificial intelligence models in Modelica simulation tools.</p>

<p>Some of the key features are:</p>
<ul>
  <li>Detailed models of turbo machinery, 4Q pump/compressor, piping, valves, heat exchangers, furnace, fluidized bed, drum, coal mill</li>
  <li>Demonstrators for <strong>Coal/Combined/ORC power plant</strong></li>
  <li><strong>DCS package</strong> – ready-to-use state of the art control blocks and controller examples</li>
  <li><strong>Grid package</strong> – enables investigations of interactions with the electrical grid</li>
  <li>Flexible and user-friendly with efficient means for simplified <strong>steady state analysis</strong> (via StaticCycles models) for the calculation of consistent initial values for states to smooth the initialisation of complex thermodynamic cycles</li>
  <li>Well defined model design principles including level of detail, level of insight, naming conventions, limited inheritance depth, comprehensive documentation, and more</li>
  <li><strong>Extensive Media Library</strong> – including ORC Media and steel data base</li>
  <li><strong>Support for AI</strong> (see SMARTIInt Library)</li>
  <li>Validated against literature and measurement data</li>
</ul>

<h5 id="xrgs-open-source-products">XRG’s open-source products</h5>

<p>We have moved all our current open-source products to <a href="https://github.com/xrg-simulation">Github</a>. <strong>You are welcome to start collaborating today!</strong></p>

<p><img src="XRGGithub.jpg" alt="Our Open-Source Products on GITHUB" title="Our Open-Source Products on GITHUB"></p>

<p><strong>SMARTIInt</strong><br>
SMARTIInt provides a user-friendly interface between Modelica and data-based AI models. With its first release the SMARTIInt Modelica library provides integration of TensorFlow neural networks (feed forward and recurrent) as Modelica functions. SMARTIInt can be found on <a href="https://github.com/xrg-simulation/SMArtIInt">Github</a>. 
We intend to support further data formats and network structures in the future. Community feedback and help are highly welcome!</p>

<p><strong>ClaRaDelay</strong><br>
Unlike the Modelica delay operator, ClaRaDelay also supports vectorized delay time inputs. This is especially useful when it comes to convolution integrals or other control applications. See <a href="https://github.com/xrg-simulation/ClaRaDelay">Github</a> for details.</p>

<p><strong>ClaRa Library goes GITHUB</strong><br>
The open-source library ClaRa enables detailed analysis of power plant processes in Modelica and now broadens its scope towards renewable energies. Its official releases are now also available from <a href="https://github.com/xrg-simulation/ClaRa-official">Github</a>. With the newly established <a href="https://github.com/xrg-simulation/ClaRa-openDevelopment">ClaRa Open Development Repository</a> we encourage the community not only to give feedback but also to participate in ClaRa’s development by contributing models. Don’t miss our presentation <strong>“Status of the ClaRa Library: Detailed Transient Simulation of Complex Energy Systems”</strong>(<a href="https://www.conftool.com/modelica2023/index.php?page=browseSessions&amp;form_session=45">Link to session</a>) at the 15th Modelica conference!</p>

<p><em>This article is provided by Stefan Wischhusen <a href="https://www.xrg-simulation.de/en">XRG Simulation GmbH</a></em></p>

<h2 id="simcenter-amesim-2310-released">Simcenter Amesim 2310 released</h2>
<p><a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a> is pleased to announce that <strong>Simcenter&nbsp;Amesim&nbsp;2310</strong> has been released on October 27, 2023, as part of its <a href="https://blogs.sw.siemens.com/simcenter/whats-new-in-simcenter-systems-2310/">system simulation solutions</a>. This release brings noticeable improvements to exported FMUs, for an easier deployability of system simulation models in a wide variety of simulation contexts. It also strenghtens the interoperability of Simcenter Amesim models with artificial intelligence (AI) frameworks.</p>

<p><img src="amesim_banner_2310.png" alt=""></p>

<p><img src="amesim_features_2310.png" alt=""></p>

<h4 id="improved-capabilities-of-exported-fmus">Improved capabilities of exported FMUs</h4>
<p>With <strong>Simcenter&nbsp;Amesim&nbsp;2310</strong>, the capabilities of exported FMUs have been improved, which is especially useful for Hardware-in-the-Loop (HiL) but also for the overall robustness of FMI based simulations and workflows.</p>
<ul>
  <li><strong>A deployed FMU model can now be reinitialized during the simulation (“hot reinit”)</strong>, optionally with new parameter values applied, without having to unload it. This allows calibration engineers to chain maneuvers or scenarios easily within their test sequencing software and/or on their real-time systems (e.g. successfully tested on <a href="https://www.dspace.com/en/ltd/home/products/hw/simulator_hardware/scalexio.cfm">dSPACE&nbsp;SCALEXIO</a> with 2.0 and 3.0 FMUs).</li>
  <li><strong>More meaningful constant values can now be defined as default inputs of models intended to be exported as FMUs</strong>, which greatly improves the usability of open-loop simulations (for validating models before export), and the robustness of FMU initializations later on, when performed by non-expert users. As these more meaningful start values get automatically stored in exported FMUs, enabling their silent reuse, “lazy” FMI importing tools can indeed start simulations with a much higher degree of confidence.</li>
  <li><strong>Exported 3.0 FMUs can now optionally provide the adjoint derivatives</strong>, in addition to the directional derivatives, which is typically needed for backpropagation in gradient-based training of artificial intelligence (AI) models. Users can thus encapsulate and train AI models more efficiently with Simcenter Amesim 3.0 FMUs, thus connecting the system simulation world to the Python/Julia tool world more easily. It also becomes possible to combine physics-based and AI-based models (e.g. neural ODEs) and training in a unified framework.</li>
</ul>

<h4 id="easier-reduction-andor-hybridization-of-physical-models-with-ai">Easier reduction and/or hybridization of physical models with AI</h4>
<p>In addition to the improved capabilities of exported FMUs, <strong>Simcenter&nbsp;Amesim 2310 tightens the links between the Open Neural Network Exchange (<a href="https://onnx.ai/">ONNX</a>) and the Functional Mock-up Interface (<a href="https://fmi-standard.org/">FMI</a>) standards</strong>. Thanks to the support of additional ONNX nodes that make sense for system simulation applications (35 nodes currently supported), the handling of pretrained neural networks is more robust for model reduction and/or hybridization purposes: <strong>users can either replace CPU time-consuming parts of their physical models by pretrained neural networks, or convert these Reduced Order Models (ROMs) directly as lightweight FMUs for reuse</strong>. They benefit from a higher compatibility with other recognized ONNX compatible software, such as <a href="https://plm.sw.siemens.com/en-US/simcenter/integration-solutions/reduced-order-modeling/">Simcenter Reduced Order Modeling</a>, <a href="https://www.tensorflow.org/">Tensorflow</a>, <a href="https://pytorch.org/">PyTorch</a> or <a href="https://julialang.org/">Julia</a>.</p>

<p>More will come in future releases. Stay tuned!</p>

<p>For more information on Simcenter Amesim, please visit our <a href="https://www.plm.automation.siemens.com/global/en/products/simcenter/simcenter-amesim.html">website</a>.</p>

<p><em>This article is provided by Bruno Loyer (<a href="https://www.sw.siemens.com/">Siemens Digital Industries Software</a>)</em></p>

<h2 id="openmodelica-1-22-0-released">OpenModelica 1.22.0 Released</h2>
<p>Version 1.22.0 of OpenModelica was released on Nov 8 2023.</p>

<p>The main highlight of the new release is a significant improvement of the OMEdit GUI,
made possible by the new instance-based architecture for the interaction between the OMEdit GUI and the underlying OMC compiler.
Thanks to that, OMEdit can now handle parameter-dependent conditional connectors and parameter inputs, as well as replaceable components and classes with parameter editing for the redeclared object.
Connection rendering was also improved, showing branching nodes in connection sets and improving the rendering of overlapping connections.</p>

<p><img src="omedit-replaceable-support.png" alt="OMEdit replaceable support" title="OMEdit replaceable support"></p>

<p>Several improvements were made to the C++ runtime:</p>
<ul>
  <li>Support for ExternalMedia library (fix record inputs of external functions and bindings of records to scalar variables).</li>
  <li>Support for ThermofluidStream library (fix array dimensions of created temporary variables).</li>
  <li>Preliminary support for DAE mode.</li>
  <li>Fixed issue with start attributes for iteration variables of implicit nonlinear systems, which were previously lost.</li>
</ul>

<p>The compiler frontend and backend has been further improved and many bugs were also fixed, leading to a much improved user experience, compared to the previous 1.21.0 release.</p>

<p>For further details, please check the <a href="https://github.com/OpenModelica/OpenModelica/releases/tag/v1.22.0">release notes</a>.</p>

<p><em>This article is provided by Adeel Asghar, Francesco Casella <a href="https://www.openmodelica.org/">Open Source Modelica Consortium</a></em></p>

<h2 id="modelon-news">Modelon News</h2>
<h4 id="cogeneration-power-plants-improving-operations-in-complex-conditions">Cogeneration Power Plants: Improving Operations in Complex Conditions</h4>

<p>Designing and implementing cogeneration power plants is inherently complex. Not only do engineers need to consider varying load changes over time, but, also, the cost to keep up this technology. Modelon explores 
the promise of model-based systems engineering to design <a href="https://modelon.com/blog/cogeneration-power-plants-improving-operations-in-complex-conditions/">flexible and cost-efficient cogeneration power plants</a> using <a href="https://modelon.com/modelon-impact/">Modelon Impact</a>.</p>

<h4 id="modelon-impact-for-heat-pump-design">Modelon Impact for Heat Pump Design</h4>

<p>Engineers and HVAC professionals face unique challenges when designing residential heat pumps that are environmentally friendly and cost-effective. Modelon’s cloud-based platform, Modelon Impact, comes equipped with the right components, example models, media models, and workflows within its Modelica-based libraries to help system engineers design and simulate state-of-the-art heat pumps. With Modelon Impact you can:</p>

<p>✅ Assess new refrigerants</p>

<p>✅ Size components and systems</p>

<p>✅ Predict efficiency variability</p>

<p>✅ Retrofit existing systems</p>

<p>✅ Optimize system design</p>

<p>✅ Evaluate operational flexibility</p>

<p>Watch the demo to see how Modelon Impact can help you design and improve residential heat pump systems: Modelon Impact Demo for the <a href="https://www.youtube.com/watch?v=u3fvxqAmipU">Design of Residential Heat Pump Systems</a></p>

<p><img src="heatpumpdesign.png" alt=""></p>

<p>To get an understanding of the Modelica-based libraries and resources that Modelon Impact comes equipped with for residential heat pump design, download our <a href="https://modelon.com/support/revolutionizing-residential-heat-pump-design-brochure/">application brochure</a></p>

<h4 id="modelon-innovate-2024">Modelon Innovate 2024</h4>

<p>Modelon’s highly anticipated system simulation conference, Modelon Innovate, is back next year. Join us and other system modeling and simulation professionals around the globe in Copenhagen, Denmark to discuss the latest trends, success stories, and guides for getting the most out of Modelica-based system simulation technology. To be one of the first to find out when registration opens, sign up at (<a href="https://modelon.com/innovate2024/">Innovate 2024</a>)</p>

<hr>

<p><em>This article is provided by Swati Tyagi (<a href="https://www.modelon.com/">Modelon</a>)</em></p>

<h2 id="dymola-2024x">Dymola 2024x</h2>
<p><img src="Dymola2024x-versioning-small.png" alt="Dymola 2024x" title="Dymola 2024x model lifecycle management."></p>

<p>On 24 November 2023, Dymola 2024x becomes available for ordering and delivery.</p>

<h4 id="model-editing">Model editing</h4>

<p>The Dymola standalone program has been connected to the 3DEXPERIENCE platform.
Models can be version controlled in 3DEXPERIENCE, and the complete lifecycle is
integrated with PLM tools. Furthermore, tools such as 2D/3D design and Project
Planning are available and can launch Dymola.</p>

<p>Support for Git has been improved, including modification status visible in the
Dymola package browser and a better model publishing dialog.</p>

<h4 id="simulation">Simulation</h4>

<p>Using a sparse solver for system of equations and a revised Jacobian approximation,
faster simulation of many large systems is possible.</p>

<p>FMI 3 support includes early return when an event occurs, intermediate input and input interpolation.
Variable step co-simulation make it possible to control the FMU step from the model.</p>

<h4 id="process-modeling-library">Process Modeling Library</h4>

<p>The library contains models to simulate thermal separa¬tion processes based on
multi-phase multi-component equilibria. It allows you to predict the behavior of
separation units, analyze heat and mass transfer processes, and to optimize operating
conditions to maximize efficiency and minimize energy consumption. Using the
Thermodynamics Connector library, complex media models available.</p>

<p>The library is used to troubleshooting complex systems, improve product quality,
and reduce the environmental impact.</p>

<p><em>This article is provided by Dag Brück (<a href="https://www.dymola.com/">Dymola webpage</a>)</em></p>

<h1 id="news-from-libraries">News from libraries</h1>

<h2 id="tlk-til-suite-new-version-3-15-0">TLK TIL Suite - New version 3.15.0</h2>
<p>The TIL Suite is a comprehensive Modelica library for stationary and transient simulations of thermodynamic systems. In November the <strong>TIL Suite 3.15.0</strong> will be released and among others, the following new features are included:</p>
<ul>
  <li>4-way reversing valves for refrigerants are now available. The TIL example of a reversible air-to-water heat pump with periodic freezing and defrosting now uses a 4-way reversing valve.</li>
  <li>The provision of all function derivations in TIL and TILMedia for the use of the analytic Jacobian matrix in Modelica solvers has been improved, especially for TIL HD. This can increase computing speed.</li>
</ul>

<p>We are also continually improving frosting models in the TIL Suite and provide well documented models, which can be simple and easy to parametrize or use more detailed approaches with flexible settings for ice formation.</p>

<p><img src="tilsuite-model.png" alt="tilsuite-model"></p>

<p>In addition to components and example systems already contained in TIL, many other add-on libraries are available. We provide add-ons for hydrogen energy systems, thermal storages like hot water tanks, and automotive applications, among others.</p>

<p>For further information about TIL Suite see <a href="https://til.tlk-thermo.com">www.tlk-thermo.com</a> or contact us at <a href="mailto:til@tlk-thermo.com">til@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Ingo Frohböse <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="processmodelling-library">ProcessModelling library</h2>
<p>The library is designed to model separation processes with backflow streams, evaporation, condensation and control. The library provides rectification columns, tanks, pipes, pumps, units or gravitational separation tanks. Develop an integrated digital twin for design, simulation, training, and operations. The Process Modelling and Engineering Library includes dynamic models for separation processes. The PME library uses the Multiflash® software by <a href="https://www.kbc.global/software/advanced-thermodynamics/">KBC</a> to calculate phase equilibrium of multi-phase multi-component fluids. The Thermodynamics Connector library is used as an interface between the PME library and Multiflash®.</p>

<p>Many models of the Process Modelling and Engineering library come with animations in order to visualize key system parameters, for example liquid levels and temperature distributions in rectification columns, or the filling levels in a tank. Visualization during simulation and postprocessing allows for a quick overview about the current state of the simulated system.</p>

<p><img src="dassaultsystemes_process-modelling.png" alt="dassaultsystemes_process-modelling.png" title="The Process Modelling Library"></p>

<p><em>This article is provided by Maren Titze (<a href="https://www.3ds.com/">Dassault Systemes Deutschland GmbH</a>)</em></p>

<h2 id="upcoming-free-rotating-machinery-library">Upcoming - Free Rotating Machinery Library</h2>
<p><img src="SystemModeler_RotatingMachinery.png" alt="Alt text" title="Rotating Machinery library"></p>

<p>The Rotating Machinery library allows you to test novel designs or identify faults in rotating machineries such as turbines, motors and drivelines. Within the library, you’ll find fundamental components of a rotating machinery, such as gears, shafts and bearings. These components are designed to be flexible, enabling you to observe deformations and accurately capture real-world responses under different loads.</p>

<p>Rotating Machinery library will be released later this year. <a href="https://www.wolfram.com/system-modeler/libraries">Click here</a> to go the System Modeler Modelica library store.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="testing-library-1-7-0-introducing-clocked-tests">Testing Library 1.7.0: Introducing clocked tests</h2>
<p>Dymola 2024x comes with an updated Testing library.
In this version we introduce clocked test blocks
to enable a new way of recording and comparing signals.</p>

<p>Previously all comparisons were done continuously,
but now tests can also be performed in a predefined interval using Modelica clocks.
This is not only beneficial for test of clocked models.
It also simplifies regression tests of continuous signals,
when recorded results with limited resolution are used as reference.</p>

<p><img src="Dassault_ClockedTesting.png" alt="Clocked test model"></p>

<p>The screenshot shows how to check the output of a switched boost converter against a recording.
Due to the voltage ripple, we use a mean filter to average the measured
voltage and check the filtered signal once in the middle of every period.</p>

<p>The new clocked blocks include check blocks, recorders and clocked tables
for boolean, real and integer from scalar up to 3 dimensions.
Tick based tolerances are also available, to compare signals which might
be shifted by one tick or more.</p>

<p>To get started with clocked tests, load the library in Dymola and check out
the new examples in <code class="language-plaintext highlighter-rouge">Testing.Examples</code> or read the guide at <code class="language-plaintext highlighter-rouge">Testing.Clocked.UsersGuide</code>.</p>

<p><em>This article is provided by Marco Keßler (<a href="https://www.3ds.com/">Dassault Systèmes Austria GmbH</a>)</em></p>

<h2 id="upcoming-free-aircraft-library">Upcoming - Free Aircraft Library</h2>
<p><img src="SystemModeler_Aircraft.png" alt="Alt text" title="Aircraft library"></p>

<p>A new version of the Aircraft library will soon be released. This version adds the possibility to model drones and includes models of quadrotors. Furthermore, the library has been restructured for easier on-boarding, and providing further insights for mid &amp; late stages of fixed-wing aircraft conceptual design.</p>

<p><a href="https://www.wolfram.com/system-modeler/libraries">Click here</a> to go the System Modeler Modelica library store.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h1 id="education-news">Education news</h1>

<h2 id="efmi-tutorial-from-modelica-conference-available">eFMI® Tutorial from Modelica Conference available</h2>
<p><img src="eFMI-tutorial.png" alt="eFMI® Tutorial" title="eFMI® Tutorial"></p>

<p>The recording and slides of the eFMI® Tutorial presented at the <a href="https://2023.international.conference.modelica.org/">15th International Modelica Conference</a> (9th of October 2023) are now public available on <a href="https://youtu.be/oCDH-8mXeNw">YouTube</a> (videos) and the <a href="https://www.efmi-standard.org/">eFMI website</a> (slides &amp; videos).</p>

<p>We had about 50 participants from 20 organizations and the feedback has been great! Close to all participants managed to follow the hands-on, for which we provided a portable Dymola &amp; CATIA ESP with all required tooling like compilers, libraries etc included. Many of the participants got really excited and used the unique opportunity provided by the conference to discuss the feasability of eFMI in their application domain. <strong>We like to thank each participant for joining the tutorial and your kind feedback!</strong></p>

<p>The complete tutorial is split into several independent parts:</p>
<ul>
  <li><a href="https://youtu.be/oCDH-8mXeNw">Part 1: eFMI® motivation and overview</a></li>
  <li><a href="https://youtu.be/ghalwWlbSOA">Part 2: Running use-case introduction</a></li>
  <li><a href="https://youtu.be/n-aIFpxDtWE">Part 3: Hands-on demonstration in Dymola and CATIA ESP</a></li>
  <li><a href="https://youtu.be/XeBVj6-_w0Q">Part 4: Live demonstration in TargetLink</a></li>
  <li><a href="https://youtu.be/GF_YNonNMYs">Part 5: Short presentation of further tooling</a></li>
</ul>

<p>It covers the current state-of-the-art of available eFMI tooling, including a high-level introduction to the <em>eFMI Standard</em> (Part 1), and a hands-on experience of eFMI technology for selected Modelica example models (Parts 2 &amp; 3). It shows how to configure a tooling workflow from acausal physics models in Modelica down to embedded target code (Parts 3 &amp; 4) and investigates the generated eFMUs and their various intermediate model representations. The focus is on the non-functional quality criteria satisfied by the generated solutions, like traceability within eFMUs, MISRA C:2012 conformance of generated production code and other code quality criteria like static memory allocation and error handling.</p>

<p>If you have any general questions or feedback on what you think we need to improve or also cover in such tutorial, please contact us on our <em>public</em> mailing list, <a href="https://groups.google.com/g/efmi-info"><code class="language-plaintext highlighter-rouge">efmi-info@googlegroups.com</code></a> (no Google account required) or write a <em>private</em> mail to <code class="language-plaintext highlighter-rouge">Christoff.Buerger@3ds.com</code>.</p>

<p><strong>Your feedback is very welcome!</strong></p>

<p><em>This article is provided by Christoff Bürger (<a href="https://www.3ds.com">Dassault Systèmes</a>)</em></p>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2022/05/Claytex-TECHNIA-COMPANY-RGB-217-90.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.linkedin.com/showcase/our-technical-blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<p><strong>Removing events from models to improve real-time performance</strong></p>

<p>When running a model as part of Hardware in the Loop (HIL) testing, it is important that the model simulates fast enough so that overruns do not occur. Unfortunately, when events occur this can cause a model to run significantly slower for that simulation time. A workaround is to remove events from the model. This post looks at different ways this can be done.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/09/Claytex-Blog_Removing-events-from-models-to-improve-real-time-performance.png" alt="Real-time Image1" title=" Real-time Image1"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/removing-events-from-models-to-improve-real-time-performance/">here</a></p>

<p><strong>Resolving between Multibody Frames</strong></p>

<p>The vehicle models in our VeSyMA suite of libraries are multibody models, so when using them it is helpful to understand some of the basics of working with 3-dimensional mechanical systems. In a previous blog post we explained about multibody orientations, so in this post we look at how variables in the mechanical systems can be resolved in different multibody frames.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/09/Claytex-Blog_Resolving-Between-Multi-body-Frames.png" alt="Multibody Frames Image2" title=" Multibody Frames Image2"></p>

<p>Read the complete article <a href="https://www.claytex.com/tech-blog/resolving-between-multibody-frames/">here</a></p>

<p><strong>Claytex Sponsor The 15th International Modelica Conference – 9th to 11th October 2023</strong></p>

<p>We exhibit and present at the 15th International Modelica Conference, organized by the Institute for Energy Efficient Buildings and Indoor Climate, RWTH Aachen University, in collaboration with the Modelica Association.</p>

<p><strong>Paper title:</strong> Race Car Cooling System Model for Real Time use in a Driving Simulator</p>

<p><strong>Abstract:</strong> Powertrain performance optimization is one of main targets in racecar and road hypercar development. A key activity needed for both endothermal and electric powertrains is the cooling system sizing through simulation to make sure that the temperature limits are not exceeded in the most aggressive conditions minimizing or avoiding power derating. This article describes the implementation of a 1D cooling system simulation model integrated with a vehicle multibody model to be used in real time in the Dallara dynamic driving simulator with human driver. This activity is the result of a collaboration between Dallara which uses the model implemented to develop and optimize the cooling system architecture of its vehicles, and Claytex who develop the libraries used to generate these simulation models. The model has been validated through comparison with real data of an existing vehicle yielding a RMSE of 0.99 °C.</p>

<p><img src="https://www.claytex.com/wp-content/uploads/2023/09/Claytex-Paper-Racecar-Cooling-System-Model-for-RealTime-use-in-a-Driving-Simulator.png" alt="Dallara Image 3" title="Dallara Image3"></p>

<p>Learn more about our paper <a href="https://www.claytex.com/news-and-events/the-15th-international-modelica-conference-9th-to-11th-october-2023-aachen-germany/">here</a></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

</section>
{{</rawhtml>}}