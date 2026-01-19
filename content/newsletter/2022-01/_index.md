---
title: Newsletter 2022-01
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
      <li><a href="#fmi-3-0-release-plan" id="markdown-toc-fmi-3-0-release-plan">FMI 3.0 Release Plan</a></li>
    </ul>
  </li>
  <li><a href="#related-projects" id="markdown-toc-related-projects">Related projects</a>    <ul>
      <li><a href="#fmi-t-shirts-and-hoodies" id="markdown-toc-fmi-t-shirts-and-hoodies">FMI T-shirts and hoodies</a></li>
    </ul>
  </li>
  <li><a href="#conferences-and-user-meetings" id="markdown-toc-conferences-and-user-meetings">Conferences and user meetings</a>    <ul>
      <li><a href="#american-modelica-conference-2022" id="markdown-toc-american-modelica-conference-2022">American Modelica Conference 2022</a></li>
    </ul>
  </li>
  <li><a href="#vendor-news" id="markdown-toc-vendor-news">Vendor news</a>    <ul>
      <li><a href="#tlk-dave-new-version-2-5" id="markdown-toc-tlk-dave-new-version-2-5">TLK DaVE - New version 2.5</a></li>
      <li><a href="#orchideo-easyssp-v1-0-now-available" id="markdown-toc-orchideo-easyssp-v1-0-now-available">orchideo | easySSP V1.0 now available</a></li>
      <li><a href="#wolfram-system-modeler-upcoming-events" id="markdown-toc-wolfram-system-modeler-upcoming-events">Wolfram System Modeler: Upcoming Events</a></li>
      <li><a href="#modelon-news-2022-1-release-help-centre-online-and-modelon-innovate-2022" id="markdown-toc-modelon-news-2022-1-release-help-centre-online-and-modelon-innovate-2022">Modelon news - 2022.1 release, Help Centre online and Modelon Innovate 2022</a></li>
      <li><a href="#bouncing-ball-physics-app-based-on-modelica-language" id="markdown-toc-bouncing-ball-physics-app-based-on-modelica-language">Bouncing Ball Physics app based on Modelica language</a></li>
      <li><a href="#announcing-dymola-2023" id="markdown-toc-announcing-dymola-2023">Announcing Dymola 2023</a></li>
    </ul>
  </li>
  <li><a href="#news-from-libraries" id="markdown-toc-news-from-libraries">News from libraries</a>    <ul>
      <li><a href="#aviation-demos" id="markdown-toc-aviation-demos">Aviation Demos</a></li>
    </ul>
  </li>
  <li><a href="#education-news" id="markdown-toc-education-news">Education news</a>    <ul>
      <li><a href="#modelica-playground" id="markdown-toc-modelica-playground">Modelica Playground</a></li>
      <li><a href="#modelon-blog-aircraft-fuel-systems" id="markdown-toc-modelon-blog-aircraft-fuel-systems">Modelon blog: Aircraft fuel systems</a></li>
    </ul>
  </li>
</ul>

<h2 id="letter-from-the-board">Letter from the Board</h2>
<p>Dear Modelica, FMI, SSP, DCP, eFMI interested,</p>

<p>The Modelica Association plans to organize the next International Modelica Conference in <strong>March or April 2023</strong> as hybrid event.
We are looking for a <strong>local organizer</strong>. In case you are interested, please contact me.
Note, the Modelica Association Backoffice can provide technical support, especially with the proceedings.</p>

<p>The <strong><a href="https://2022.american.conference.modelica.org/">American Modelica Conference 2022</a></strong> will take place in Dallas, U.S.A., 
<strong>Oct. 26-28, 2022</strong> as a <strong>hybrid</strong> conference event. Full papers to be reviewed should be sent by <strong>May 1, 2022</strong>.
For more details, see the <a href="https://newsletter.modelica.org/2022-01/index#american-modelica-conference-2022">article in this newsletter</a>.</p>

<p>The <strong>Asian Modelica Conference 2022</strong> will take place as an <strong>online</strong> conference <strong>Nov. 24-25, 2022</strong>.
In case the COVID-19 restriction is lifted, the organizers try to keep an option
for a hybrid conference by adding one or half a day on-site workshop/tutorials before the conference
at Sophia University in Tokyo, Japan. More information will follow soon.</p>

<p>The release of <strong>FMI 3.0</strong>, with its many <a href="https://github.com/modelica/fmi-standard/blob/master/docs/1___overview.adoc">new features</a>, 
is planned for <strong>May 2022</strong>. For more details, see the <a href="https://newsletter.modelica.org/2022-01/index#fmi-3-0-release-plan">FMI 3.0 Release Plan</a> in this newsletter.</p>

<p>The Modelica Association is planning to vote on a <a href="https://github.com/modelica/MA-Bylaws/pull/7/files/85143d4ec67c3ae3ce50300897d9c052cab94545">Compliance and anti trust statement</a> 
(based on corresponding guidelines in the ISO standards development process) at the Annual Modelica Association meeting
on May 10, 2022. Feel free to inspect and comment the <a href="https://github.com/modelica/MA-Bylaws/pull/7">pull request #7</a>.</p>

<p>If you have interesting news for the Modelica, FMI, SSP, DCP, eFMI communities,
please follow the <a href="https://newsletter.modelica.org/submission-guidelines.html">submission guidelines</a>.
The deadline for articles for the next newsletter is Fr. July 15, 2022.</p>

<p>Martin Otter on March 28, 2022</p>

<p>Chairperson of the Modelica Association</p>

<p><em>This article is provided by Martin Otter (<a href="https://www.modelica.org/">Modelica Association</a>)</em></p>

<h1 id="modelica-association">Modelica Association</h1>

<h2 id="fmi-3-0-release-plan">FMI 3.0 Release Plan</h2>

<div style="float: right">
  <p><img src="fmi_logo.png" alt="fmi-logo"></p>
</div>

<p>The FMI 3.0 standard is currently in Beta.5 stage. 
The release candididate RC.1 is in preparation and shall be published beginning of April 2022.</p>

<p>Everyone is encouraged to perform a final inspection to the current version of the FMI 3.0 standard (see https://github.com/modelica/fmi-standard) and report findings NOW.</p>

<p>In a (7th and last) FMI 3.0 plugfest on April 5th/6th final tests of protoype implementations will be performed. Tool vendors are very welcome to participate.</p>

<p>The release of FMI 3.0 is planned for May 2022.</p>

<p><em>This article is provided by MAP FMI</em></p>

<h1 id="related-projects">Related projects</h1>

<h2 id="fmi-t-shirts-and-hoodies">FMI T-shirts and hoodies</h2>
<h4 id="well-be-printing-fmi-t-shirts-and-hoodies">We’ll be printing FMI T-shirts and hoodies!</h4>

<p>The the prefect way to show your support for the FMI Standard at work, in meetings, and conferences.</p>

<p><img src="https://user-images.githubusercontent.com/2453858/159464699-709d9f3c-6c1b-4dda-abac-494dc6539c68.jpg" width="200" height="260"><img src="https://user-images.githubusercontent.com/2453858/159464757-1166ddc0-a1b9-42eb-8ad6-03af4bb77b49.jpg" width="200" height="260"></p>

<p>If you’re interested in an FMI T-shirt (20 €) or hoodie (45 €), please add yourself to the <a href="https://github.com/modelica/fmi-design/blob/master/Merchandising/2022-T-Shirts.md">list</a> (if you are an FMI project member) or send an e-mail torsten.sommer@3ds.com.</p>

<p>Disclaimer: This is a private initiative by Andreas Junghanns and Torsten Sommer. Articles are subject to availability.</p>

<p><em>This article is provided by Torsten Sommer (@-tsommer)</em></p>

<h1 id="conferences-and-user-meetings">Conferences and user meetings</h1>

<h2 id="american-modelica-conference-2022">American Modelica Conference 2022</h2>
<h4 id="american-modelica-conference-2022">American Modelica Conference 2022</h4>

<p>The American Modelica Conference 2022 will be a hybrid conference event, the first opportuntity since the 2019 conference to meet your Modelica colleagues in person, and can also be attended remotely via streaming. The conference will take place at the University of Texas in Dallas at the <a href="https://davidson-gundy.utdallas.edu/davidson-gundy/spaces/">Davidson-Gundy Alumni Center</a> October 26–28, 2022. It is organized by <a href="https://namug.org/">NAMUG</a>, the North American Modelica Users Group in cooperation with the <a href="https://modelica.org/association">Modelica Association</a>. Join us in person in Dallas or from the comfort of your own home. The ability to watch streamed talks from the conference virtually will be provided for a reduced virtual conference admission fee.</p>

<p>This conference will have one or more conference tracks with presentations of peer-reviewed papers as all Modelica conferences, as well as a track of industrial user-oriented presentations with peer-reviewed abstracts that do not need to be accompanied by a full scientific paper. We also plan to introduce a Best Paper award for the first time at this conference. Please see the <a href="https://2022.american.conference.modelica.org/call2022.html">Call for Papers</a> for details about paper submissions, as well as the calls for industrial user presentations, tutorials, and vendor presentations. The submission deadlines are as follows:</p>

<ul>
  <li>May 1, 2022: Submission of full papers for reviewed papers</li>
  <li>June 1, 2022: Submission of extended abstracts for presentation-only contributions and tutorials</li>
  <li>August 1, 2022: Notification of acceptance for papers and presentations</li>
  <li>September 1st, 2022: Submission of final papers and one-page abstracts</li>
  <li>September 5th, 2022: Submission of final presentations</li>
</ul>

<p>More information about the conference can be found in <a href="https://2022.american.conference.modelica.org/">this announcement</a>.  Early bird registration is already open <a href="https://www.eventbrite.com/e/american-modelica-conference-2022-tickets-193515990537">on our EventBrite page</a>.  This year’s Platinum Sponsor is <a href="https://software.ricardo.com/">Ricardo Software</a>, but Gold and Silver sponsorships are also still available.</p>

<p><img src="https://2022.american.conference.modelica.org/images/ConferenceLogoSmall.png" alt="AMC 2020 Logo"></p>

<p><em>This article is provided by Michael Tiller</em></p>

<h1 id="vendor-news">Vendor news</h1>

<h2 id="tlk-dave-new-version-2-5">TLK DaVE - New version 2.5</h2>
<p>DaVE is a visualization and an FMI-based simulation environment for both the post-processing and the online display of dynamic data sets. It is specifically suitable to analyse and compare simulation results of Modelica models.</p>

<p>Besides standard plot instruments, such as 2D-plot, vector plots or bar charts, DaVE includes various thermodynamic state diagrams, as for instance Pressure-enthalpy (ph) or Temperature-enthalpy (Th) diagrams of refrigerants, but also hx-charts for moist air. The cycle points from Modelica simulations can automatically be loaded into the diagrams, which makes DaVE specifically suitable to analyse refrigeration and heat pump systems.</p>

<p>DaVE supports the creation of P&amp;I flow diagrams. The connecting lines between the individual symbols can be linked with variables and thus dynamically change their width and direction. Furthermore, the connecting lines can be (de)activated, which is for instance suitable to analyse reversible heat pump systems.</p>

<p><strong>Example of a reversible heat pump configuration in DaVE</strong></p>

<p><img src="tlk-dave-22-01.jpg" alt="Example of a reversible heat pump configuration in DaVE"></p>

<p>The new version 2.5 of DaVE include the following new features:</p>
<ul>
  <li>Comfort zones of summer and winter can be added to hx-Chart</li>
  <li>Topology of systems in P&amp;I flow diagrams can be (de)activated using variables coming from Modelica or FMU simulation</li>
  <li>New fluid property data, using TILMedia 3.11.0</li>
</ul>

<p>For further information see <a href="https://www.tlk-thermo.com/index.php/en/dave">www.tlk-thermo.com</a>, <a href="https://www.tlk-thermo.com/images/tlk/content/presentations/DaVE_EN_2020_September.pdf">download the DaVE presentation</a> or contact us at <a href="mailto:dave@tlk-thermo.com">dave@tlk-thermo.com</a></p>

<p><em>This article is provided by Roland Kossel <a href="https://www.tlk-thermo.com/">TLK-Thermo GmbH</a></em></p>

<h2 id="orchideo-easyssp-v1-0-now-available">orchideo | easySSP V1.0 now available</h2>
<p><img src="easySSP-newsletter.png" alt="alt text" title="orchideo  easySSP X-Mas Edition">
<strong>orchideo | easySSP</strong> V1.0 now available</p>

<h4 id="orchideo--easyssp-v10">orchideo | easySSP v1.0</h4>

<p>orchideo | easySSP v1.0 is now available. 
Besides the well known easy simulation architecture modeling, orchideo | easySSP now provides cloud-based simulation and support for traceable &amp; credible simulation processes.</p>

<h4 id="cloud-based-simulation">Cloud-based simulation</h4>
<p>orchideo | easySSP now offers cloud-based simulation. 
Simulate your SSP &amp; FMI models with flexible hardware resource options in parallel in the cloud with no load on your computer and compare and export the results in the integrated simulation results view.
This feature is most powerful when using several parameter variants which have to be simulated in parallel.</p>

<h4 id="credible-simulation">Credible simulation</h4>
<p>Simulation needs trust - along the whole process. Therefore orchideo | easySSP now offers support for the so called “Credible Simulation Process” (CSP).
The CSP lets you create a gapless process information chain that helps others trace and therefore trust the simulation process and the simulation results. 
All based on the open STMD format and integrated into SSP.</p>

<p>More information on how this process is working using tools of different vendors along the simulation process you can find in the the video of the ProSTEP iViP web seminar titled: “Traceable simulation results in heterogenous environment”.</p>

<p>Check out <a href="https://easy-ssp.com">easy-ssp.com</a> and start with the free Community-Edition to leverage the benefits of SSP!</p>

<p><em>This article is provided by Gregor Hermann, Peter Lobner <a href="https://www.exxcellent.de/">eXXcellent solutions</a></em></p>

<h2 id="wolfram-system-modeler-upcoming-events">Wolfram System Modeler: Upcoming Events</h2>
<p><em>Participate and meet us in person during the upcoming events.</em></p>

<p><img src="System-Modeler-Events.png" alt="Alt text" title="System Modeler: Upcoming Events"></p>

<p>Get inspired by customer journeys, learn from experts and interact with presenters during the Q&amp;As. Attend workshops to get started using step-by-step instructions. Schedule a one-on-one meeting with our experts to get your questions answered.</p>

<h3 id="european-wolfram-technology-conference"><em><a href="https://www.wolfram.com/events/technology-conference-eu/2022/">European Wolfram Technology Conference</a></em></h3>

<p>Join the European Wolfram Technology Conference to explore how computation can empower you and your organization in research, development, deployment—and progress. This conference will showcase how you can unify your workflows, including Modelica workflows, with computation to deliver quicker and smarter results.</p>

<ul>
  <li>
    <p>Dates: June 13–14</p>
  </li>
  <li>
    <p>Location: Frankfurt, Germany</p>
  </li>
</ul>

<h3 id="international-system-dynamics-conference"><em><a href="https://systemdynamics.org/conference/">International System Dynamics Conference</a></em></h3>

<p>Learn about the current trends in system dynamics and get introduced to systems thinking. The Modelica-based <a href="https://www.wolfram.com/system-modeler/libraries/business-simulation/">Business Simulation Library</a> will be presented as an alternative to Vensim.</p>

<ul>
  <li>
    <p>Dates: July 18–22</p>
  </li>
  <li>
    <p>Location: Frankfurt, Germany, and online</p>
  </li>
</ul>

<h3 id="wolfram-technology-conference"><em><a href="https://www.wolfram.com/events/technology-conference">Wolfram Technology Conference</a></em></h3>

<p>Learn about Wolfram’s ever-expanding technology stack for the building of digital twins, large-scale optimization, embedded systems and the high-level modeling of multiphysics systems.</p>

<ul>
  <li>
    <p>Dates: October 18–21</p>
  </li>
  <li>
    <p>Location: Champaign, Illinois, United States</p>
  </li>
</ul>

<p><a href="https://www.wolfram.com/system-modeler/what-is-new">Click here</a> to read the latest System Modeler news.</p>

<p><em>This article is provided by Ankit Naik <a href="https://wolfram.com/system-modeler/">Wolfram</a></em></p>

<h2 id="modelon-news-2022-1-release-help-centre-online-and-modelon-innovate-2022">Modelon news - 2022.1 release, Help Centre online and Modelon Innovate 2022</h2>
<h4 id="modelon-20221-release-now-available">Modelon 2022.1 Release: Now Available</h4>
<p><img src="Modelon_impact2022.png" alt="Modelon impact">
Notable new features and updates in the Modelon 2022.1 Release include the Modelon Help Center, workspace configuration management, and quick-start example models. View the release highlights <a href="https://bit.ly/3J5Lwch">here</a>.</p>

<h4 id="modelon-help-center-now-available-online">Modelon Help Center: Now Available Online</h4>
<p><img src="Modelon_help.png" alt="Modelon help">
From getting started to how-to guides and step-by-step tutorials, access comprehensive support resources through the Modelon Help Center. This is now the central resource for anyone to receive self-service help and find answers to their most frequently asked questions. View the Modelon Help Center <a href="https://bit.ly/36losrD">here</a>.</p>

<h4 id="modelon-innovate-2022-mark-your-calendars">Modelon Innovate 2022: Mark Your Calendars!</h4>
<p><img src="Modelon_innovate.jpg" alt="Modelon help">
Join us in Stockholm on October 19-20 at Modelon Innovate 2022 - a free, two-day conference for simulation engineering professionals and Modelon customers around the globe. From inspirational keynotes by leading companies to training courses led by Modelon experts, discover how you can better leverage system simulation to produce innovative technology. Register <a href="https://bit.ly/3u2vPfw">here</a>.</p>

<p><em>This article is provided by Kenzie Maurice (<a href="https://www.modelon.com/">Modelon</a>)</em></p>

<h2 id="bouncing-ball-physics-app-based-on-modelica-language">Bouncing Ball Physics app based on Modelica language</h2>
<p><img src="MobileApp-logo.png" alt="App Home" title="AppEntryPage"></p>

<p>Dofware has released a mobile app exploiting Modelica features. It is named Bouncing Ball Physics and reproduces the physics governing the behavior of a bouncing ball. Once defined the properties of the ball and of the ground, and after stating the starting conditions of the ball, the user can follow its dynamic behavior.</p>

<p>For the sake of simplicity, a Modelica basic tutorial example has been adopted. The ball is a digital twin of a real object. Although implementing simple physics, it contains some meaningful applications of Modelica features (events, hysteresis, etc.). The same technology could be extended to any kind of complex systems easily.</p>

<p>The virtual model has been implemented by and exported from Dymola framework. The algorithm processes the parameters set by the user and provides a quick and reliable simulation as a result, showing how a real ball would behave under the same conditions. Results may be saved into the app-related database, and, additionally, may be exported to any external device.</p>

<p>The Bouncing Ball Physics app is the demonstration of how Modelica is a flexible and versatile tool, which enables to run physical models on any platform, no matter the needs and the complexity of the models.</p>

<p><em>This article is provided by Elisabetta Tintori (<a href="https://en.dofware.com/">Dofware srl</a>)</em></p>

<h2 id="announcing-dymola-2023">Announcing Dymola 2023</h2>
<p>We are pleased to announce that Dymola 2023 will be available in May 2022.</p>

<h4 id="simulation">Simulation</h4>

<p>Simulation Analysis has been extended with detailed timer statistics, helping to pinpoint any bottlenecks in your simulation. It offers two views, both detailing
execution time in seconds as well as the number of calls. Hotspots are highlighted in red. The first view groups the simulation code into logical sections.
<img src="Dymola_timers1.png" alt="Simulation code" width="623px"></p>

<p>The second view shows individual function calls, and if FMUs are included in the model, it will show the distribution for each FMI-function.
<img src="Dymola_timers2.png" alt="Function calls" width="623px"></p>

<h4 id="developing-models">Developing models</h4>

<p>In many thermo-fluid applications, there is a need to parameterize the model with for example a medium model. Finding the right medium model is now easier, 
as the user interface has a search capability that allows matching records that meet certain constraints.</p>

<p><img src="Dymola_search-record.png" alt="Search windwow for records" width="623px"></p>

<h4 id="sspefmi">SSP/eFMI</h4>

<p>Dymola 2023 has support for both import and export in the SSP format (System Structure and Parameterization). SSP export will create an SSP file with embedded FMUs for any component models. For Modelica models, the system description that contain references to the Modelica model. Meta data defined in the Modelica model will be exported as an annotation.</p>

<p>Dymola supports eFMI according to the latest publicly available eFMI specification. Dymola’s eFMI facilities comprise generation of eFMUs with Algorithm Code, Production Code and Binary Code containers and supports the usage of generated eFMUs for co-simulation from within Modelica models. A Dymola Source Code Export license is required to support eFMI.</p>

<p><em>This article is provided by Dag Brück (<a href="http://www.3ds.com/dymola">Dassault Systemes</a>)</em></p>

<h1 id="news-from-libraries">News from libraries</h1>

<h2 id="aviation-demos">Aviation Demos</h2>
<p>Since version 2022 Dymola ships with the Aviation Demos package. It showcases the usage of the Aviation Systems Library (ASL) together with other libraries:</p>

<ul>
  <li>The DLR FlightDynamics Library allows the connection to the Open-Source FlightGear simulator for visualization</li>
  <li>With the Dassault Systèmes Hydrogen Library the full flight envelope of a fuel-cell-powered electrical vertical take-off and landing aircraft (eVTOL) can be simulated</li>
</ul>

<p><img src="Dassault_flightgear.png" alt="FlightGear visualization" title="FlightGear visualization" width="623px"></p>

<p>The physical models of the Aviation Systems Library (ASL) are compatible with the FlightDynamics Library and integrate into its bus structure. Thus tools and workflows compatible to the FlightDynamics Library can be used with models from the Aviation Systems Library. While the ASL focuses on the behaviour of the arrangement of aerodynamic surfaces, FlightDynamics Library integrates the model into a global coordinate system and calculates the variables necessary for controller design. Also, it ships with an interface to the FlightGear simulator. The current telemetry data of the simulation is sent by UDP to FlightGear for 3D visualization.</p>

<p>All propulsion models of the ASL use common interfaces from the DassaultSystemes Library to allow compatibility between the domain-specific libraries developed by Dassault Systèmes. In the eVTOL demo, the simple energy supply model is replaced by a fuel cell from the Hydrogen Library to allow consumption investigation on different flight missions of a hydrogen-powered eVTOL.</p>

<p><em>This article is provided by Maximilian Kormann (<a href="https://www.3ds.com/">Dassault Systèmes Deutschland GmbH</a>)</em></p>

<h1 id="education-news">Education news</h1>

<h2 id="modelica-playground">Modelica Playground</h2>
<h4 id="modelica-playground-on-the-web">Modelica Playground on the Web</h4>

<p>Many languages provide a web-based “playground” where peopple
can try out the language, see some examples or find explanations
of various languages features…so why not Modelica?</p>

<p>For this reason, I create a site that allows you to type in Modelica
code and evaluate it without having to install any tools. Although
it doesn’t include any of the usual diagram display or editing capabilities,
it still includes all the power of the Modelica language for solving
algebraic, non-linear, or differential-algebraic equations thanks to the
OpenModelica compiler running behind the scenes.</p>

<p>Feel free to just play around with the application. You’ll find several examples
of how to use the application and even <a href="https://playground.modelica.university/?toc=howto.json">a guide on how to create your own
content</a>
(both individual examples or entire collections of examples).  An example
is this <a href="https://playground.modelica.university/?toc=tour.json">“tour” of various Modelica related features</a>.
Because all the “work” is captured in the URL, students could even work
out solutions to homework problems and submit them by just copying the URL
into an email.</p>

<p>While exploring the content on this site, you’ll see that this application supports
some interesting post-processing possibilities which includes things like embedded
LaTeX equations, plots, tables and animations (both 2D and 3d).</p>

<p><a href="https://playground.modelica.university/?lesson=9&amp;toc=tour.json"><img src="tour_screenshot.png" alt="Tour of Modelica"></a></p>

<p><em>This article is provided by Michael Tiller</em></p>

<h2 id="modelon-blog-aircraft-fuel-systems">Modelon blog: Aircraft fuel systems</h2>
<h4 id="modelon-blog-aircraft-fuel-systems">Modelon blog: Aircraft fuel systems</h4>
<p><img src="Modelon_AircraftFuel.jpg" alt="Modelon blog">
In the second installation of our Aircraft Fuel Systems blog series, we dive into choosing the right architecture and components to model and simulate a multi-level fuel tank. Read more <a href="https://bit.ly/3tV1kIC">here</a>.</p>

<p><em>This article is provided by Kenzie Maurice (<a href="https://www.modelon.com/">Modelon</a>)</em></p>

</section>
{{</rawhtml>}}