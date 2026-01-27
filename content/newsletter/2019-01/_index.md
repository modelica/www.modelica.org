---
title: Newsletter 2019-01
---

# Modelica Association Newsletter 2019-01

issued on 25 March 2019

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
      <li><a href="#dcp-version-1-0-released-at-13th-modelica-conference-2019" id="markdown-toc-dcp-version-1-0-released-at-13th-modelica-conference-2019">DCP version 1.0 released at 13th Modelica Conference 2019</a></li>
      <li><a href="#13th-international-modelica-conference-2019" id="markdown-toc-13th-international-modelica-conference-2019">13th International Modelica Conference 2019</a></li>
    </ul>
  </li>
  <li><a href="#conferences-and-user-meetings" id="markdown-toc-conferences-and-user-meetings">Conferences and user meetings</a>    <ul>
      <li><a href="#openmodelica-annual-workshop-2019" id="markdown-toc-openmodelica-annual-workshop-2019">OpenModelica Annual Workshop 2019</a></li>
      <li><a href="#modprod-workshop-2019" id="markdown-toc-modprod-workshop-2019">MODPROD Workshop 2019</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#modelica-serves-as-a-cornerstone-for-altair-s-system-simulation-tools" id="markdown-toc-modelica-serves-as-a-cornerstone-for-altair-s-system-simulation-tools">Modelica serves as a cornerstone for Altair’s system simulation tools</a></li>
      <li><a href="#systemmodeler-and-mathematica-12-modelica-to-millions" id="markdown-toc-systemmodeler-and-mathematica-12-modelica-to-millions">SystemModeler and Mathematica 12-Modelica to Millions</a></li>
      <li><a href="#siemens-as-committed-as-ever-to-supporting-modelica-and-fmi" id="markdown-toc-siemens-as-committed-as-ever-to-supporting-modelica-and-fmi">Siemens as committed as ever to supporting Modelica and FMI</a></li>
      <li><a href="#openmodelica-1-13-2-release" id="markdown-toc-openmodelica-1-13-2-release">OpenModelica 1.13.2 Release</a></li>
      <li><a href="#omsimulator-2-0-final-release-with-ssp" id="markdown-toc-omsimulator-2-0-final-release-with-ssp">OMSimulator 2.0 final release with SSP</a></li>
      <li><a href="#modelon-march-2019-updates" id="markdown-toc-modelon-march-2019-updates">Modelon March 2019 Updates</a></li>
      <li><a href="#new-user-interface-for-dymola" id="markdown-toc-new-user-interface-for-dymola">New user interface for Dymola</a></li>
      <li><a href="#dymola-2020" id="markdown-toc-dymola-2020">Dymola 2020</a></li>
    </ul>
  </li>
  <li><a href="#news-from-libraries" id="markdown-toc-news-from-libraries">News from libraries</a>    <ul>
      <li><a href="#tlk-til-suite-new-version-3-7-0" id="markdown-toc-tlk-til-suite-new-version-3-7-0">TLK TIL Suite - New version 3.7.0</a></li>
      <li><a href="#industrial-process-simulation" id="markdown-toc-industrial-process-simulation">Industrial Process Simulation</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#claytex-technical-blog" id="markdown-toc-claytex-technical-blog">Claytex technical blog</a></li>
      <li><a href="#new-book-on-modelica-for-electrical-engineers" id="markdown-toc-new-book-on-modelica-for-electrical-engineers">New book on Modelica for electrical engineers</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP interested,</p>

<p>The Modelica Association is expanding its standardization portfolio.  As of March 2019, the first versions of two new standards have been released:</p>

<ul>
  <li>
    <p>The <a href="https://ssp-standard.org">System Structure and Paramerization (SSP)</a> standard describes in a logical way (using xml-files and other information in a zip-file container) how model components are connected and possibly (hierarchically) composed into composite components, as well as how model parameterization data is stored and exchanged between them. For example, this can then be used to define the hierarchical connection and parameterization of a set of connected <a href="https://fmi-standard.org">Functional Mock-up Unit (FMI)</a> components.</p>
  </li>
  <li>
    <p>The <a href="https://dcp-standard.org">Distributed Co-simulation Protocol (DCP)</a> standard is an application layer protocol that allows integration of real-time and non-real-time systems. It enables exchange of simulation related configuration information and data by use of an underlying transport protocol (such as UDP, TCP, or CAN) with no overhead during run time. For more information, check out the <a href="https://newsletter.modelica.org/2019-01/index#dcp-version-1-0-released-at-13th-modelica-conference-2019">release announcement in this newsletter</a>.</p>
  </li>
</ul>

<p>The new version 3.2.3 of the Modelica Standard Library was released at the end of January 2019, containing more as <strong>100 new model components</strong> and fixing about <a href="https://htmlpreview.github.io/?https://raw.githubusercontent.com/modelica/Modelica/maint/3.2.3/Modelica/Resources/Documentation/Version-3.2.3/ResolvedGitHubIssues.html">550 reported issues</a>. Furthermore, the license of the library has been changed to the <a href="https://modelica.org/licenses/modelica-3-clause-bsd">BSD 3-clause license</a> in order to simplify the usage of the library. For more detailed information, see the <a href="http://htmlpreview.github.io/?https://github.com/modelica/Modelica/blob/maint/3.2.3/Modelica/Resources/ReleaseNotes/Modelica.UsersGuide.ReleaseNotes.Version_3_2_3.html">release notes</a>.
Unfortuntely, some minor regressions with regards to incorrect <em>obsolete messages</em> had been detected after this release. For this reason a second build of version 3.2.3 was released on March 20, to address these minor inconveniences.</p>

<p>The Modelica Association is very pleased about the successful 13th International Modelica Conference, held in Regensburg, Germany on March 4-6, 2019. The conference had 89 papers, 2 sessions with industrial user presentations, 17 exhibitors and about 320 attendees. As always, the open access conference proceedings are available from <a href="http://www.ep.liu.se/ecp/contents.asp?issue=157">Linköping University Electronic Press</a>. For more information, see the article <a href="https://newsletter.modelica.org/2019-01/index#13th-international-modelica-conference-2019">below</a>.</p>

<p>The next International Modelica Conference will take place in two years, most likely in Linköping, Sweden. Next year local Modelica Conferences shall take place outside of Europe. If you would like to organize such a Modelica Conference, please inspect the <a href="https://www.modelica.org/publications/ModelicaConference">Modelica Conference series</a> for instructions. There is already interest in organizing local conferences for 2020 in China, Japan and North-America.</p>

<p>If you have interesting news for the Modelica, FMI, SSP and DCP communities, please follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>. The deadline for articles for the next newsletter is Fr. July 12, 2019.</p>

<p>Martin Otter on March 24, 2019  <br>
<em>Chairman of the Modelica Association</em></p>

<p><em>This article is provided by Martin Otter (Modelica Association)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="dcp-version-1-0-released-at-13th-modelica-conference-2019">DCP version 1.0 released at 13th Modelica Conference 2019</h2>
<p>The <strong>Distributed Co-Simulation Protocol (DCP) version 1.0</strong> was released at the <a href="https://modelica.org/events/modelica2019/">13th International Modelica Conference 2019</a>, which took place in Regensburg, Germany, from March 4-6.</p>

<p>To learn what the DCP is, how to get it, how it can be used, and which applications can benefit from it, check out www.dcp-standard.org!</p>

<p>The following items are available <strong>under open-source licenses</strong>:</p>
<ul>
  <li>DCP specification document 1.0</li>
  <li>DCP slave description schema files</li>
  <li>DCP reference implementation (C++)</li>
</ul>

<p>In case of any questions send an e-mail to <a href="mailto:contact@dcp-standard.org">contact@dcp-standard.org</a>.</p>

<p><em>This article is provided by Martin Krammer (<a href="http://www.v2c2.at/">VIRTUAL VEHICLE</a>)</em></p>

<h2 id="13th-international-modelica-conference-2019">13th International Modelica Conference 2019</h2>
<p>The <strong><a href="https://modelica.org/events/modelica2019">13th International Modelica Conference</a></strong> has been held at <strong>OTH Regensburg, Germany, March 4-6, 2019</strong>. 
It has been organized by OTH Regensburg / Faculty of Electrical Engineering and Information Technology, in cooperation with the Modelica Association.</p>

<p><img src="201901_Modelica2019Welcome.jpg" alt="">
Prof. Wolfgang Baier, President of OTH Regensburg welcomed the participants.</p>

<h4 id="conference-venue">Conference Venue</h4>
<p>The conference took place at Ostbayerische Technische Hochschule (Eastbavarian Technical University) Regensburg near the center of Regensburg, 
only 30 minutes to walk from the historical centre of Regensburg.  <br>
<strong>Venue Address</strong>: OTH Regensburg  <br>
Seybothstr. 2, 93053 Regensburg, Germany</p>

<h4 id="welcome">Welcome</h4>
<p>The <strong>Modelica Conference</strong> is the main event for users, library developers, tool vendors and language designers to share their knowledge 
and learn about the latest scientific and industrial progress related to Modelica and to the Functional Mockup Interface.
The program will cover modeling of complex physical and cyber-physical systems, as well as tools, for a wide range of research and industrial applications. 
In addition to paper presentations and poster sessions, the conference features several Modelica tutorials for beginners and advanced users, as well as vendor presentations, and an exhibition.</p>

<p>Starting with this conference, you will notice some changes:</p>

<p>First, we are going to organize the International Modelica Conference every two years in spring. 
In the years between International Modelica Conferences, Modelica Conferences are organized on other continents with country specific focus.</p>

<p>Second, additional to the tutorials and vendor presentations on the first day of the conference, 
we are going to have Industrial User Presentations related to the Modelica Association Projects. 
These presentations are not included in the proceedings, but they should provide a nucleus for discussions and broadening the users groups.</p>

<h4 id="facts">Facts:</h4>
<ul>
  <li>2 sessions with industrial user presentations</li>
  <li>7 tutorials</li>
  <li>14 vendor presentations</li>
  <li>17 sponsors and exhbitors</li>
  <li>101 submissions, 76 oral presentations and 13 posters</li>
  <li>2 keynotes held by Dr. Chistian Kral, Vienna and Dr. Gerd Rösel, Continental Regensburg</li>
  <li>320 attendees / 570 together with American and Japanese Modelica Conference within 10 months!</li>
  <li>Proceedings available at the <a href="https://modelica.org/events/modelica2019/subpages/modelica-conference-2019-proceedings">Modelica Website</a> and <a href="http://www.ep.liu.se/ecp/contents.asp?issue=157">Linköping University Electronic Press</a></li>
</ul>

<h4 id="modelica-library-award">Modelica Library Award</h4>
<p>We proudly announce the winners of the Modelica Library Award 2019:</p>

<p>The first price was awarded to Queralt Altes-Buch and her co-authors for her submission <a href="https://modelica.org/events/modelica2019/proceedings/html/papers/Modelica2019paper5A2.pdf"><strong>Greenhouses</strong>: A Modelica Library for the Simulation of Greenhouse Climate and Energy Systems</a>
<img src="201901_Modelica2019LibraryAward1.jpg" alt=""></p>

<p>The second price was awarded to Christian Kral and his co-authors for his submission <a href="https://modelica.org/events/modelica2019/proceedings/html/papers/Modelica2019paper1B1.pdf">Open Source <strong>PhotoVoltaics</strong> Library for Systemic Investigations</a>
<img src="201901_Modelica2019LibraryAward2.jpg" alt=""></p>

<p>We encourage <strong>you</strong> to submit your work for the Library Award at the next Modelica Conference!</p>

<h4 id="conference-board">Conference Board</h4>
<ul>
  <li>Prof. Anton Haumer, OTH Regensburg (Conference Chair)</li>
  <li>Prof. Francesco Casella, Politecnico di Milano, Italy</li>
  <li>Dr. Hilding Elmqvist, Mogram, Lund, Sweden</li>
  <li>Prof. Peter Fritzson, Linköping University, Sweden</li>
  <li>Prof. Martin Otter, DLR, Germany</li>
  <li>Dr. Michael Tiller, Xogeny, Michigan, USA</li>
</ul>

<p><strong>Many thanks to all that supported the conference!</strong>
<strong>Thank you all for coming - hope to meet you at the next conference!</strong></p>

<h4 id="contact">Contact</h4>
<p>Prof. Anton Haumer, OTH Regensburg (Conference Chair)  <br>
<strong>In case of questions, please send an email to</strong>: <a href="mailto:modelica2019@modelica.org">modelica2019@modelica.org</a></p>

<p><em>This article is provided by Anton Haumer <a href="https://www.oth-regensburg.de/en.html">OTH Regensburg</a></em></p>

<h1 id="conferences-and-user-meetings">Conferences and user meetings</h1>

<h2 id="openmodelica-annual-workshop-2019">OpenModelica Annual Workshop 2019</h2>
<p>The 11th OpenModelica Annual Workshop organized by the Open Source Modelica Consortium was held successfully in Linköping, Sweden, on February 4, 2019.
New results and applications regarding the OpenModelica platform were presented, including the new fast OpenModelica compiler frontend, vectorized applications for digital platforms, unified simulation interface, FPGA simulations, initialization with dynamic state selection, simulation for an X-ray space observatory, OpenModelica technical overview, unit testing, OMSimulator 2.0 for FMI simulation, teaching Modelica using OpenModelica.</p>

<p>The program and the 13 presentations are available from <a href="https://www.openmodelica.org/events/openmodelica-workshop/openmodelica-program-2019">Workshop Program</a></p>

<p><img src="Chairpersons.JPG" alt=""> <img src="FrancescoAdrian.JPG" alt=""></p>

<p>Left:Lennart Ochel and Lena Buffoni, OpenModelica workshop chairpersons (Linköping University) opening the workshop.</p>

<p>Right:OpenModelica workshop, Francesco Casella and Adrian Pop making a live demo of OMEdit with the new frontend based API with an impressive 20x faster performance.</p>

<p><em>This article is provided by Peter Fritzson (<a href="https://openmodelica.org">Open Source Modelica Consortium</a>)</em></p>

<h2 id="modprod-workshop-2019">MODPROD Workshop 2019</h2>
<p>The 13th international MODPROD Workshop on Model-Based Cyber-Physical Product Development, organized by the MODPROD competence center at Linköping University, was successfully held at Linköping University, Linköping, Sweden, February 5-6, 2019.
Three tutorials were held in the morning the first day on the topics: Introduction to Modelica modeling, debugging, and Julia interoperability; FMI for composite modeling, co-simulation and model-exchange; Modeling software processes and practices with the ESSENCE standard.</p>

<p>The following keynotes were presented:</p>

<p>Lars Ydreskog, Deputy CEO, Combitech, Sweden. ”Model-Based Systems Engineering, an Enabler for Digital Product Creation
Henrik Lönn, Technology Specialist, Embedded Software, AB Volvo. ”Model Based Continuous Integration of Automotive Embedded Systems”
Charlotta Johnsson, Professor, Department of Automatic Control, Lund University. ”International Standards and their Relevance for Model-Based Development”</p>

<p>The program and the presentations are available from <a href="www.modprod.liu.se">modprod program</a></p>

<p><img src="peterandniclas.jpg" alt=""> <img src="supercomputer.jpg" alt=""></p>

<p>Left:Peter Fritzson (Linköping University) (left) leaves as MODPROD director after 13 years, becomes vice director, and hands over the directorship to Niclas Fock (RISE Research Institutes of Sweden).</p>

<p>Right:Visit to the National Supercomputer Center in Linköping (<a href="www.nsc.liu.se">www.nsc.liu.se</a> ) where the new supercomputer TetraLith has just been installed.</p>

<p><em>This article is provided by Peter Fritzson (<a href="https://openmodelica.org">Open Source Modelica Consortium</a>)</em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="modelica-serves-as-a-cornerstone-for-altair-s-system-simulation-tools">Modelica serves as a cornerstone for Altair’s system simulation tools</h2>
<p><img src="altair_activate.jpg" alt="Altair Activate with Modelica built-in" title="Altair Activate with Modelica built-in"></p>

<p>What do Schneider Electric, thyssenkrupp Elevators, and Mabe all have in common? Their engineering teams are designing better products, faster, through their use of Altair Activate™ as their open platform for multi-disciplinary system simulation.</p>

<p>Activate provides built-in access to specialized Modelica libraries facilitating the 1D physical modeling of mechanical, thermal, electrical, hydraulic, and magnetic subsystems. Hybrid <strong>1D modeling</strong> can be achieved by using any combination of models defined with a physical-based approach, with a signal-based approach, and/or with SPICE.</p>

<p>This approach also enables equation-based <strong>0D modeling</strong> directly, by leveraging the OpenMatrix Language (OML). And it enables sophisticated <strong>0D/1D/3D combined modeling</strong> by easily coupling and co-simulating with 3D models – obtained from Altair tools directly (e.g., for electromagnetics or mechanics) and/or from third-party tools through the Functional Mockup Interface (FMI) standard. Linearization and optimization are also available in the same modeling environment.</p>

<p>Download your own free Basic Edition of Activate at <a href="https://www.altair.com/mbd2019/activate">https://www.altair.com/mbd2019/activate</a> to discover what systems you can simulate today!</p>

<p>Send us an email via <a href="mailto:info@altair.com">info@altair.com</a> if you would like to obtain the presentation and model files associated with the informative tutorial recently provided at the 2019 International Modelica Conference titled “Connecting Separated Worlds for True Multi-disciplinary System Simulation – by Using Altair Activate”.</p>

<p><em>This article is provided by Jim Ryan (<a href="www.altair.com">Altair Engineering Inc.</a>)</em></p>

<h2 id="systemmodeler-and-mathematica-12-modelica-to-millions">SystemModeler and Mathematica 12-Modelica to Millions</h2>
<p><em>SystemModeler and Mathematica 12 will be released during spring 2019.</em></p>

<h4 id="mathematica-12">Mathematica 12</h4>

<p>Version 12 of Mathematica comes with built-in simulation engine of SystemModeler. This means millions of Wolfram language users world-wide can model, simulate and analyze any Modelica model and make use of all the system modeling functionality.</p>

<p><img src="SystemModeler12.jpg" alt="alt text" title="Unleash Your Models with the Wolfram Language"></p>

<p>Integration with the Wolfram language makes it easier to perform complex tasks such as:</p>
<ul>
  <li><em>Designing and optimizing components of a system</em>, e.g. designing guidance system of a rocket</li>
  <li><em>Obtaining real-world data</em>, e.g. comparing energy consumption for house heating</li>
  <li><em>Creating custom visualization</em>, e.g. visualizing a satellite path</li>
</ul>

<h4 id="systemmodeler-12">SystemModeler 12</h4>

<p>The latest version of SystemModeler contains many new features to make your design process more efficient. Some of the significant features are:</p>
<ul>
  <li><em>Symbolic Linearization</em>–Linearize your model symbolically around any operating point and use it for your study of dynamical systems.</li>
  <li><em>Equation Browser</em>–Debug your models, understand simulation behavior and eliminate performance bottlenecks with the equation browser.</li>
  <li><em>Full FMI support</em>–Share models with any other FMI compliant tool for further analysis such as software-in-the-loop testing, CFD analysis and more.</li>
</ul>

<p><a href="http://www.wolfram.com/system-modeler/what-is-new">Click here</a> to read the latest SystemModeler news.</p>

<p><em>This article is provided by Ankit Naik <a href="http://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="siemens-as-committed-as-ever-to-supporting-modelica-and-fmi">Siemens as committed as ever to supporting Modelica and FMI</h2>
<p><img src="Simcenter_Amesim.png" alt=""></p>

<h4 id="modelon--siemens-partnership-outcome-reflected-in-the-shortly-available-version-of-simcenteramesim">Modelon – Siemens partnership: outcome reflected in the shortly available version of Simcenter&nbsp;Amesim</h4>
<p>As a result of the previously announced partnership between <a href="https://www.siemens.com/plm">Siemens</a> and <a href="https://www.modelon.com/">Modelon</a>, Siemens confirms that the forthcoming release of <strong>Simcenter&nbsp;Amesim</strong> (expected April 2019) will be the first version to officially include <a href="https://www.modelon.com/products-services/modelon-creator-suite/optimica-compiler-toolkit">Modelon’s OPTIMICA Compiler Toolkit</a> as its <strong>standard Modelica engine</strong> to create and/or reuse Modelica models within native <strong>Simcenter&nbsp;Amesim</strong> models. Thanks to this revamped Modelica support, it will be possible to combine the strengths of <em>causal</em> and <em>acausal</em> modeling techniques within a unique platform.</p>

<h4 id="fmi-still-at-the-core-of-siemens-product-strategy">FMI still at the core of Siemens’ product strategy</h4>

<p>As since day one, <a href="https://www.siemens.com/plm">Siemens PLM Software</a> actively contributes to the <strong>FMI 3.0</strong> specification and more generally to the promotion of the FMI standard to its industrial customers. In this spirit, the up-coming release of <strong>Simcenter&nbsp;Amesim</strong> will bring many improvements to the FMI support. In short, these enhanced capabilities will allow for:</p>
<ul>
  <li>the use of <strong>additional advanced co-simulation techniques</strong>,</li>
  <li>an <strong>increased protection of the intellectual property contained in Simcenter&nbsp;Amesim FMUs</strong>,</li>
  <li>performing the <strong>virtual calibration of imported FMUs</strong> directly within the <strong>Simcenter&nbsp;Amesim</strong> GUI.</li>
</ul>

<p>Moreover, users will be able to export their <strong>Simcenter&nbsp;Amesim</strong> multiphysical models to <strong>additional FMI compatible real-time targets</strong>. These new capabilities will serve the needs of the automotive, aerospace and marine industries as well as the emerging—and exciting—applications of <strong>the Industrial Internet of Things (IIoT)</strong>, in total coherence with <strong>the Industry 4.0 vision embodied by Siemens</strong>.</p>

<p>Stay tuned on the <a href="https://community.plm.automation.siemens.com/t5/Simcenter-Blog/bg-p/Simcenter_blog">Simcenter Blog</a>. In the meantime and for more information on <strong>Simcenter&nbsp;Amesim</strong>, do not hesitate to visit our <a href="https://www.siemens.com/plm/simcenter-amesim">website</a>.</p>

<p><em>This article is provided by Bruno Loyer (<a href="https://www.siemens.com/plm">Siemens PLM Software</a>)</em></p>

<h2 id="openmodelica-1-13-2-release">OpenModelica 1.13.2 Release</h2>
<p>OpenModelica is the most complete open-source Modelica-based cyber-physical mathematical modeling,
simulation and optimization environment intended for industrial and academic usage.
Its long-term development is supported by a non-profit organization – the Open Source Modelica Consortium <a href="https://www.openmodelica.org/">OSMC</a>
with many company, institute, and university members.</p>

<p><img src="https://openmodelica.github.io/OpenModelica-Resources/images/2015-OpenModelica-V6Engine-3x4-cropped-400x287.png" alt=""></p>

<p>The figure shows OpenModelica with a plot from a simulation of the V6Engine model.</p>

<p>The OpenModelica 1.13.2 is mainly a bug fix release compared to the previous 1.13.0, as well as providing small enhancements in OMEdit, FMI export, increased performance and stability, etc.
Moreover, model encryption is part of the release and available to OSMC members.</p>

<p><em>This article is provided by Peter Fritzson (<a href="https://openmodelica.org">Open Source Modelica Consortium</a>)</em></p>

<h2 id="omsimulator-2-0-final-release-with-ssp">OMSimulator 2.0 final release with SSP</h2>
<p>OMSimulator 2.0 provides a co-simulation and simulation environment for FMUs. The OMSimulator 2.0 final release is part of OpenModelica 1.13.2 and supports both ordinary signal connections and TLM (transmission line modelling) connections. Composite model structure and parameterization are stored according to the SSP standard, also allowing some extensions, e.g. bus connections. The figure shows the simulation of a composite FMI model.</p>

<p><img src="https://openmodelica.github.io/OpenModelica-Resources/images/2019-OpenModelica-OMSimulator.png" alt="OMSimulator and OMEdit"></p>

<p>The following are highlights of OMSimulator 2.0:</p>

<ul>
  <li>Efficient simulation of composite models based on model exchange and co-simulation FMUs</li>
  <li>Graphical composition of FMUs and visualization of simulation results</li>
  <li>Scripting interface, e.g. Python and Lua.</li>
  <li>Distributed simulations utilizing TLM master algorithm</li>
  <li>Increased numerical stability during co-simulation in various applications due to TLM connectors</li>
  <li>SSP (System Structure and Parameterization) support for composite models</li>
  <li>Modeling bus connections</li>
</ul>

<p><em>This article is provided by Lennart Ochel and Adeel Asghar (<a href="https://openmodelica.org/">Open Source Modelica Consortium</a>)</em></p>

<h2 id="modelon-march-2019-updates">Modelon March 2019 Updates</h2>
<p><img src="Modelon_Orange_400.jpg" alt=""></p>

<p>Modelon provides software solutions and expert services to organizations that use model-based simulation tools to design and develop technical systems. Modelon’s <a href="https://www.modelon.com/products-services/modelon-library-suite/">libraries</a>, <a href="https://www.modelon.com/products-services/modelon-creator-suite/">solver</a>,and <a href="https://www.modelon.com/products-services/modelon-deployment-suite/">deployment solutions</a> are leading products available in the market today for modeling, simulation, and optimization. Our products enable companies to focus on delivering a unified picture of product system interaction and performance - from product concept to operation.</p>

<p>Visit www.modelon.com for more information.</p>

<p>Follow us on <a href="https://www.linkedin.com/company/modelon">LinkedIn.</a></p>

<h4 id="now-available-modelon-authored-papers-from-the-13th-international-modelica-conference">Now Available: Modelon Authored Papers from the 13th International Modelica Conference</h4>

<p><a href="https://www.modelon.com/support/webinar-integrating-carbon-capture-storage-technology-using-simulation/"><img src="WP_20190304_002.jpg" alt="International Modelica Conference" width="400px"></a></p>

<p>Thank you to everyone who attended Modelon’s vendor session, paper presentations, and visited the Modelon booth at the 13th International Modelica Conference. Proceedings from the following presentations are now available:</p>

<h5 id="model-based-controls-development-and-implementation-for-hydroelectric-power-system">Model-Based Controls Development and Implementation for Hydroelectric Power System</h5>
<p><em>By Authors Anh Nguyen and John Batteh</em></p>

<p>This paper describes the model-based control system development for a hydroelectric power plant to ensure water level control and mitigate spillage risk.  The modeling of both the flume system and prototype controls is described.  The integrated model is run over a suite of tests to verify the calibration of the control strategy.  Results from the plant commissioning are compared with the virtual tests.  The model proved capable of accurate predictions of the waterway dynamics, and the model-based calibration was successfully verified on the actual plant.</p>

<p><a href="https://www.modelica.org/events/modelica2019/proceedings/html/papers/Modelica2019paper4A3.pdf">Read the full publication here.</a></p>

<h5 id="diesel-cooling-system-modeling-for-electrification-potential">Diesel Cooling System Modeling for Electrification Potential</h5>
<p><em>By Authors John Batteh, Ashok Kumar Ravi, and Dale Pickelman</em></p>

<p>Electrification of automotive systems presents significant opportunities for improvements in cooling system efficiency and performance.  This paper describes an effort to develop an analytic platform for Hanon Systems to evaluate the electrification potential for powertrain cooling systems.  The paper describes the development of a baseline diesel cooling system model based on the Ford 6.7L Power Stroke diesel. A variant of the system with electric pumps is also modeled.  Performance of the baseline conventional and electric pump system are compared on a typical automotive drive cycle to quantify potential benefits of the electric pump system and advanced controls.</p>

<p><a href="https://www.modelica.org/events/modelica2019/proceedings/html/papers/Modelica2019paper1D3.pdf">Read the full publication here.</a></p>

<h4 id="on-demand-webinar-integrating-carbon-capture--storage-technology-using-simulation">On-Demand Webinar: Integrating Carbon Capture &amp; Storage Technology Using Simulation</h4>

<p><a href="https://www.modelon.com/support/webinar-integrating-carbon-capture-storage-technology-using-simulation/"><img src="Webinar Header Website.jpg" alt="CCS Webinar" width="600px"></a></p>

<p>In this free webinar, Modelon teams up with researchers from the Norwegian University of Science and Technology (NTNU) to explore Carbon Capture and Storage technology for reducing powerplant emission levels by up to 90%. Our presenters walk through their study of building a scalable plant model with Modelon’s <a href="https://www.modelon.com/library/thermal-power-library/">Thermal Power Library</a>, using data from a large-scale pilot plant to validate their model, designing control structures, and effectively integrating Carbon Capture &amp; Storage (CCS) technology with a flexible operation plant.  <a href="https://www.modelon.com/support/webinar-integrating-carbon-capture-storage-technology-using-simulation/">Watch the webinar now.</a></p>

<h4 id="new-blog-propagating-replaceable-medium-automatically">New Blog: Propagating Replaceable Medium Automatically</h4>

<p>Users of Modelon libraries in Dymola can activate a new feature that will automatically update the Medium in each component. Learn how to implement this new feature in our recent tips and tricks blog.</p>

<p><a href="https://www.modelon.com/propagating-replaceable-medium-automatically/">Read the blog.</a></p>

<p><em>This article is provided by Swati Tyagi, <a href="https://www.modelon.com/">Modelon</a></em></p>

<h2 id="new-user-interface-for-dymola">New user interface for Dymola</h2>
<p>The user interface of Dymola has not changed much for several years, but now it’s time for a major overhaul. 
Dassault Systèmes is working on a new ribbon-based user interface that both looks more modern and is more
task-focused to increase productivity. Development is in full progress, and we seek test pilots for the first
beta-release in May this year. The core of the beta-version will be compatible with Dymola 2020.</p>

<p>If you are interested in becoming one of the early test pilots, please contact Dag Brück (dag.bruck@3ds.com).</p>

<p><img src="DymolaNU-edit-newsletter.png" alt=""></p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h2 id="dymola-2020">Dymola 2020</h2>
<p>At the recent Modelica Conference, Dassault Systèmes revealed the upcoming Dymola 2020 release. Key improvements include:</p>

<ul>
  <li>Running simulations on multiple CPU cores, which is automatically applied to parameter sweeps. In addition, it is possible to set an option to only write variables to the result file at stop time, significantly reducing system overhead.</li>
  <li>Improved steady state initialization and advanced options for controlling start guess values. These improvements improves initialization of large systems.</li>
  <li>The model diagram layer can be used to directly select plot variables in components or in connections.</li>
  <li>New commercial library for industrial process simulation, developed by Optimation AB.</li>
  <li>Uses Modelica Standard Library 3.2.3.</li>
</ul>

<p><img src="Dymola2020-process-newsletter.jpg" alt=""></p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h1 id="news-from-libraries">News from libraries</h1>

<h2 id="tlk-til-suite-new-version-3-7-0">TLK TIL Suite - New version 3.7.0</h2>

<div style="float: right">
  <p><img src="tlk-tilsuite-logo.png" alt="tlk-tilsuite logo"></p>
</div>

<p>The TIL Suite is used to generate stationary and transient simulation results. It is based on technical experience with our test benches, and theoretical experience with services in the field of modelling and simulation. The next <strong>version 3.7.0</strong> will be available in <strong>April 2019</strong> and includes new and improved components and system models. Among other things, we would like to draw your attention to the following innovations:</p>
<ul>
  <li>New VLEFluid-Volume model with fixed or variable volume including heat port.</li>
  <li>WallCell: Heat connections between wall cells with east-west orientation (along the channel) are now optional and disabled by default to reduce the sizes of the linear system of equations.</li>
  <li>Summaries: Property-calculations were changed, now using new TILMedia classes (object function based), which improve the compatibility to the Modelica specification.</li>
  <li>New VLEFluid-InlineBoundary model to set mass flow rate, temperature or heat flow rate at a certain position.</li>
  <li>New Watchdog model to terminate simulations after a defined time.</li>
  <li>VLEFluid-Pump2ndOrder: An improved energy balance for zero mass flow rate and the consideration of density by the affinity laws were added.</li>
</ul>

<p>For further information see <a href="https://www.tlk-thermo.com/index.php/en/software-products/til-suite">www.tlk-thermo.com</a>, <a href="https://www.tlk-thermo.com/images/tlk/content/presentations/TIL_Suite_presentation.pdf">download the TIL presentation</a> or contact us at <a href="mailto:til@tlk-thermo.com">til@tlk-thermo.com</a>.</p>

<p><em>This article is provided by Matthias Kwak <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="industrial-process-simulation">Industrial Process Simulation</h2>
<p>A new library focusing on industrial process simulation will be released for Dymola 2020. Developed by the Swedish company Optimation AB, the library offers models commonly used to create a virtual representation of processes for paper and pulp, as well as steam networks. The library has been used for several years in heavy industrial applications, opening possibilities for significant cost reductions:</p>

<ul>
  <li>Correct design of new plants and upgrades of existing ones.</li>
  <li>Controller tuning and optimization before plant is even started.</li>
  <li>Reduced commissioning time and improved quality from get-go.</li>
  <li>Operator training capturing correct plant dynamics using a virtual twin.</li>
</ul>

<p><img src="IndustrialProcessSimulation-newsletter.jpg" alt=""></p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h1 id="education-news">Education news</h1>

<h2 id="claytex-technical-blog">Claytex technical blog</h2>
<p><img src="https://www.claytex.com/wp-content/uploads/2016/04/claytex-logo.png" alt="Claytex logo" title="Claytex logo"></p>

<p>Claytex publishes a <a href="https://www.claytex.com/category/tech-blog/">technical blog</a> covering all things Modelica and Dymola.</p>

<p>Here is our latest technical blog post:</p>

<h4 id="can-an-f1-car-drive-on-the-ceiling">Can an F1 car drive on the ceiling?</h4>

<p>I don’t know about you, but I’ve heard “a Formula One car has enough downforce that it can drive upside down on the ceiling” so many times but have never had any proof of this. I, for one, would love to see this put to the test, but I doubt that a Formula One team would risk their hard work by running it upside down just to settle an idle curiosity. I would love to test this myself but not having full, unbridled access to a Formula One team is just the start of problems with this plan. But, here at Claytex, I have access to a Motorsports grade vehicle dynamics simulation suite that is used extensively throughout Formula One. Read the complete article <a href="https://www.claytex.com/tech-blog/can-an-f1-car-drive-on-the-ceiling/">here</a></p>

<p><img src="https://www.claytex.com/wp-content/uploads/2016/05/Chassis_New.png" alt="F1 car" title="F1 Car"></p>

<p><em>This article is provided by Mahdieh Mehrabi (<a href="https://www.claytex.com/">Claytex</a>)</em></p>

<h2 id="new-book-on-modelica-for-electrical-engineers">New book on Modelica for electrical engineers</h2>
<p><img src="ModelicaBookChristianKral.png" alt="Modelica book"></p>

<p>The book (published in German by <a href="https://www.hanser-fachbuch.de/buch/Modelica+Objektorientierte+Modellbildung+von+Drehfeldmaschinen/9783446455511">Hanser</a>) is written for electrical engineers, since all examples are related with electrical power engineering and electrical machines. After a summary of the fundamental principles the first steps on creating and simulation Modelica models are provided. Each simulation example shown in the book is based on the open source library <a href="https://github.com/christiankral/HanserModelica">HanserModelica</a>. This library is fully tested with <a href="https://www.openmodelica.org/">OpenModelica</a> so that the reader can perform all the simulation examples of the book solely on open source software.</p>

<p>Modelica is introduced based on both, the underlying theoretical concepts and practical applications. Engineering examples cover transient and quasi stationary electric circuits, and electrical systems coupled to the magnetic, thermal and mechanical models. The theory and the implementation of the polyphase electrical machine models released in the <a href="https://github.com/modelica/ModelicaStandardLibrary">Modelica Standard Library</a> are explained and discussed in detail. Typical lab experiments of polyphase electrical machines are provided for induction and synchronous machines.</p>

<p>One chapter of the book presents a tutorial on <a href="https://github.com/">GitHub</a> using <a href="https://www.gitkraken.com/">GitKraken</a>. In this chapter the author explains how a Modelica project can be initiated, developed and maintained through GitHub.</p>

<p><em>This article is provided by Christian Kral</em></p>

</section>
{{</rawhtml>}}
