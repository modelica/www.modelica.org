# Modelica Tools

## Introduction  

In order that the Modelica modeling language can be used to solve actual problems, a modeling and simulation environment is needed

* to conveniently define a Modelica model with a graphical user interface (composition diagram/schematic editor) such that the result of the graphical editing is a (internal) textual description of the model in Modelica format.
* to translate the defined Modelica model into a form which can be efficiently simulated in an appropriate simulation environment. This requires especially sophisticated symbolic transformation techniques.
* to simulate the translated model with standard numerical integration methods and visualize the result.

The following commercial and free modeling and simulation environments for Modelica are currently available (note, that demo versions for the commercial environments are available and that some demo versions can be downloaded free of charge):

## Commercial Modelica Simulation Environments

(in alphabetical order)

* By [**Altair**](http://www.altair.com/):

* [**_solidThinking Activate_**](http://www.solidthinking.com/activate_land.html) is a multi-disciplinary system modeling and simulation solution. Its intuitive block diagram environment combined with a modern user interface allows to rapidly build diagrams. Activate comes with a comprehensive library of blocks along with a powerful hybrid simulator that can not only handle continuous and discrete-time models but also allows to mix both signal-based as well as physical components (Modelica) in the same model. It's also compliant with Functional Mock-up Interface (FMI) for both import and export – in model exchange as well as co-simulation modes. The Modelica support in solidThinking Activate is powered by [Maplesoft™](http://www.maplesoft.com/) and includes the Maplesoft™ Modelica engine and Modelica Standard Library for the modeling of physical components.

* By [**ANSYS**](http://www.ansys.com/):

* [**_Simplorer_**](http://www.ansys.com/products/systems/ansys-simplorer) is a powerful platform for simulating and analyzing physics-based models of complex systems. With flexible modeling capabilities and tight integrations with ANSYS solutions for 3-D physics simulation and embedded software design, Simplorer provides broad support for assembling system-level physical models and robust simulation for verifying and optimizing system performance. Simplorer supports multiple standard modeling languages and exchange formats, including Modelica, VHDL-AMS, and the Functional Mock-up Interface, and is compatible with Modelica libraries offered by [Modelon](http://www.modelon.com/).

* By [**Dassault Systèmes**](http://www.3ds.com):
    * **[_Dymola_](http://www.dymola.com)** has a Modelica translator which is able to perform all necessary symbolic transformations for large systems (> 100 000 equations) as well as for real time applications. A graphical editor for model editing and browsing, as well as a simulation environment are included. Convenient interfaces to [MATLAB](http://www.MathWorks.com) and the popular block diagram simulator [Simulink](http://www.mathworks.com/products/simulink/) exist. For example, a Modelica model can be transformed into a SIMULINK S-function C mex-file which can be simulated in SIMULINK as an input/output block. [A demo version of Dymola can be downloaded here.](https://discover.3ds.com/free-trial-version-of-dymola-for-windows)
        
* By [**ESI ITI GmbH**](http://www.itisim.com/):
    * **_[SimulationX](http://www.simulationx.com)_** is a graphically-interactive tool for the holistic modeling, simulation and analysis of multi-domain systems from 1D to 3D. Multi-level customizing options and SimulationX’s capability to adjust the model’s complexity by mouse-click allow modeling in every step of the design process. Ready-to-use model libraries, e.g., for mechanics, multi-body systems, power transmission, hydraulics, pneumatics, thermodynamics, and electric drives are written in Modelica language. Libraries are extendable by Modelica-based modeling using the SimulationX TypeDesigner. A comprehensive API supports the integration into any CAE, CFD, CAD or database tool environment. Versatile interfaces offer plenty of opportunities for exporting models in terms of Simulink S-function and C-Code for HiL, RCP and other real-time applications. Different features (tracing, performance analyzer, switchable model complexity) support users in achieving real-time-capabilities. [SimulationX is available for test online](http://www.itisim.com/simulationx/download/download-simulationx/). [www.simulationx.com](http://www.simulationx.com)
* By [**Maplesoft**](http://www.maplesoft.com/):
    * _**[MapleSim™](http://www.maplesoft.com/products/maplesim/index.aspx)**_ is a high-performance multi-domain modeling and simulation tool. Systems are described in a compact and intuitive component diagram using next-generation physical modeling techniques, making them easier to build and understand. Model equations are automatically generated and simplified, yielding concise models and high-speed simulations of sophisticated systems. Many components in MapleSim are from the Modelica Standard Library, and all MapleSim models and components can be exported to Modelica. In the near future, MapleSim will be able to access third-party Modelica libraries. Users will be able to directly import any Modelica components or libraries and seamlessly incorporate them into MapleSim models. For more information, please visit the [Maplesoft web site](http://www.maplesoft.com).
* By [**Modelon**](http://www.modelon.com/):
    * _**[Modelon Impact](https://www.modelon.com/modelon-impact/)**_ is a next generation system modeling and simulation platform, leveraging the benefits of web and open standard technologies. With openness at its core, [Modelon Impact](https://www.modelon.com/modelon-impact/) supports standards such as Modelica, FMI, Python and REST. The user-friendly browser interface provides modeling experts the tools they need to create, simulate, and experiment. Steady-state or dynamic solutions can be executed from the same model, reducing effort to get an answer. Finally, the [Modelon Impact](https://www.modelon.com/modelon-impact/) API enables user-specific workflows through Python-based custom functions, and deployment of models to non-experts via targeted web applications or Jupyter Notebooks.
    * _**[OPTIMICA Compiler Toolkit](http://www.modelon.com/products/modelon-creator-suite/optimica-compiler-toolkit/)**_ offers users a powerful solution for the automation, simulation and optimization of system behaviors throughout the model-based design cycle. OPTIMICA’s state-of-the-art solvers empower evaluation of complex physical systems - supporting transient simulations as well as steady-state computations and dynamic optimization. The sophisticated mathematical engine can manipulate and simplify models to improve performance and robustness, serving industries and applications ranging from automotive and active safety to energy and power plant optimization. Trusted as the key compiler to Modelon’s modelica-based libraries, OPTIMICA enables users to build multi-domain physical systems by choosing from thousands of available model components.
* By [**Siemens PLM Software**](http://www.plm.automation.siemens.com/):
    * _**[Simcenter Amesim](https://www.plm.automation.siemens.com/global/en/products/simcenter/simcenter-amesim.html)**_ is a complete 1D simulation suite to model and analyze multi-domain systems and predict their performances. It provides a large variety of validated model libraries (mechanical, hydraulic, electric, thermal, control) and application oriented tools (specialized libraries, pre and post processing tools, customization features,…). The Simcenter Amesim platform and its dedicated solutions cover numerous application fields to address the customer’s specific needs for the design of powertrain transmissions, thermal management systems, vehicle systems dynamics, fluid systems, internal combustion engines, aircraft ground loads, flight controls or electrical and electromechanical systems. Simcenter AMESim is now able to deal with Modelica. For instance, Modelica models can be created and modified in a text editor dedicated to the Modelica language, and imported into the Simcenter AMESim environment so as to be linked to other model and to be simulated in the simulation environment. More information about our Simcenter Amesim Modelica platform can be found on [our website](http://www.plm.automation.siemens.com/en_us/products/lms/imagine-lab/amesim/platform/modelica.shtml).
* By [**Suzhou Tongyuan**](http://www.tongyuan.cc/)
    * MWorks is a Modelica-based visual modeling and simulation platform for multi-domain engineering systems. It provides visual modeling studio, effective Modelica compiler and symbolic analyzer, as well as powerful postprocessors of curves, schema and 3D animation. Engineering tools, such as experiment design and multi-object optimization, are included in MWorks. MWorks supports the interfaces with CAD, FEM, Matlab/Simulink and FMI. In particular, it can import general CAD files and FEM modal data into 3D animation postprocessor, including stl, sat, hsf, 3ds, dxf and MNF formats. It is also convenient to customize and expand MWorks through C/C++ interfaces, COM components and Python scripts.
* By [**Wolfram**](http://www.wolfram.com/):
    * [**_Wolfram SystemModeler®_**](http://www.wolfram.com/system-modeler) is a high-fidelity modeling environment that uses versatile symbolic components and computation to drive design efficiency and innovation. It integrates with the Wolfram technology platform to enable modeling, simulation, and analysis (of many types), all together achieving the first fully agile design optimization loop. Many of today's tools are limited in their fidelity by their foundations: using block-diagrams that poorly represent key components or producing models just for simulation and not engineering analysis. Moreover, computation is numerics-only or not integrated at all. It is the SystemModeler approach of versatile symbolic components backed by the ultimate computation environment that enables an all-in-one integrated workflow. That gets you the power to model reality at high fidelity-driving insight, innovation, and results.

## Free Modelica Simulation Environments

* **OpenModelica**: OpenModelica is an open source Modelica environment developed and supported by [Linköping University](http://www.liu.se/en/) and the [Open Source Modelica Consortium](https://www.openmodelica.org/home/consortium) (OSMC) - a growing group of companies, universities, institutes and individuals. The goal of the project is to create a complete Modelica modeling, compilation and simulation environment based on free software distributed in source code and executable form intended for research, teaching, and industrial usage. OpenModelica is freely available for use. It can be combined with open source software according to the OSMC-GPL license. Moreover, it can also be integrated with proprietary software according to the OSMC-EPL. The current OpenModelica release supports most of the Modelica language, including equations, algorithms, event-handling, functions, and packages. Also included are a Modelica Eclipse plugin for advanced developers, and an electronic notebook interface for teaching. Improving the compiler, a general solver interface, enhanced graphics, and Modelica-UML integration in Eclipse are examples of ongoing development activities. We invite all interested developers, researchers, and students to participate in the project. Please visit [OpenModelica](http://www.openmodelica.org) page.

## Teaching material

* DrModelica is an interactive teaching material to teach yourself Modelica. It contains exercises with answers, and examples. It is downloaded and run as part of [OpenModelica](http://www.openmodelica.org/), using the OMNotebook interface. The examples are from the book by Peter Fritzson - "Principles of Object-Oriented Modeling and Simulation with Modelica 2.1, (November 2003). This book teaches modeling and simulation and gives an introduction to the Modelica language to people who are familiar with basic programming concepts. Downloadable chapters and a tutorial based on the book are available on the [OpenModelica website.](http://www.openmodelica.org/)

## Free Modelica Editor(extension)s

Modelica models are usually graphically constructed with one of the schematic editors. However, since Modelica is basically a textual description it is also possible to utilize a text editor to edit or to browse Modelica models. A free Modelica text editor and adaptations of popular text editors are available here:

* **[Atom](https://atom.io/)** \- Atom is a text editor that's modern, approachable, yet hackable to the core — a tool you can customize to do anything but also use productively without ever touching a config file. The Atom language-modelica package provides Modelica grammar support.
* **[Modelica Development Tooling](https://www.openmodelica.org/index.php/home/tools/133)** (MDT) is a plugin for Eclipse
* **[Modelica mode for Emacs](https://github.com/modelica-tools/modelica-mode)**, created by Rüdiger Franke
* **[Modelica Sublime Text Package](http://borischumichev.github.io/modelicaSublimeTextPackage/)** \- A package is to bring Modelica language support to Sublime Text and also to provide snippets for commonly used language patterns.
* Modelica syntax highlighting for text editor **[UltraEdit](http://www.ultraedit.com)**. (= shareware editor on PC which is fast, "simple things are simple", many useful features such as copying/moving of rectangular text). Copy content of file [WordfileModelica.txt](/tools/WordfileModelica.txt) in file UltraEdit/Wordfile.txt and change first tag "/L6" to the correct number of supported language, if necessary.
* **[OneModelica](http://www.onewind.de/OneModelica.html)** \- An Integrated Environment for Model Development, Compilation and Administration
* **[Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=SimplyDanny.modelica)** \- Modelica language support including syntax highlighting, bracket matching and some useful snippets

## Other free tools

Here comes a list of **free** tools that are useful in combination with some of the Modelica Simulation Environments mentioned above:

* **[awesim](https://github.com/saroele/awesim)**: Python module for management of Modelica simulation files in .mat format ([follow on GitHub](https://github.com/saroele/awesim))  
    
* **[BuildingsPy](http://simulationresearch.lbl.gov/modelica/buildingspy)**: is a [Python](http://www.python.org/) package that can be used to run Modelica simulations using [Dymola](http://www.3ds.com/products/catia/portfolio/dymola), to process *.mat output files that were generated by Dymola or [OpenModelica](http://www.openmodelica.org/), and to run unit tests as part of the library development.
* **[DyMat](http://www.j-raedler.de/projects/dymat/)**: This package contains some modules to read and process the result files from Dymola and OpenModelica with python.
* _Free_ **syntax highlighting tool** [**Highlight**](http://www.andre-simon.de/) which converts source code to formatted text with syntax highlighting.  
    _(Coloured output in HTML, XHTML, RTF, TeX, LaTeX and XML format, supports 120+ programming languages including Modelica)_
    
* **[listings-modelica](https://github.com/modelica-tools/listings-modelica)** This project provides syntax highlighting definitions of the [Modelica language](index.html) for the LaTeX [listings package](http://www.ctan.org/tex-archive/macros/latex/contrib/listings/).
* [**ModelicaRes**](http://kdavies4.github.io/ModelicaRes):  Python utilities to set up and analyze Modelica simulation experiments ([follow on GitHub](https://github.com/kdavies4/ModelicaRes))
    
* [**modelica-builder**](https://github.com/urbanopt/modelica-builder): Python package enabling users to programmatically edit Modelica models using a simple interface.
    
* [**modelica-fmt**](https://github.com/urbanopt/modelica-fmt): Command-line interface for formatting Modelica code.
    
* [**OpenModelica Microgrid Gym (OMG)**](https://github.com/upb-lea/openmodelica-microgrid-gym):The OpenModelica Microgrid Gym (OMG) package is a free software toolbox for the simulation and control optimization of microgrids based on energy conversion by power electronic converters. The main characteristics of the toolbox are the plug-and-play grid design and simulation in OpenModelica as well as the ready-to-go approach of intuitive reinforcement learning (RL) approaches through a Python interface.
    
* **[PlotXY](http://ceraolo-plotxy.ing.unipi.it/default.htm)**: PlotXY is a visualization and post-processing tool that has recently become Modelica-Mat file compliant, available for Win and Mac. It can read mat files created by Dymola and OpenModelica, make different kinds of plots, on multiple windows, with twin vertical axes, swarm or bar plots, etc.. Has utility functions such as browsing numbers, zooming, labelling, changing scale, adding grids, etc.; allows exporting selected trajectories on ascii files or pdf, dvg, or png files. It can also do post-processing: 1) generate and plot algebraic combinations of trajectories taken from files (sums, products etc.) as well as the integral of a trajectory, 2) compute and show the harmonic spectrum (bar diagrams based on the Fourier coefficients) of a trajectory, with various export capabilities.
* **[PySimulator](http://www.pysimulator.org)**: Python based environment that provides a graphical user interface for simulating different model types via plugins (Modelica models via Dymola, OpenModelica or SimulationX plugins, and FMUs), plotting result variables and applying simulation result analysis tools like Fast Fourier Transform. Additionally advanced tools for linear system analysis are provided that can be applied to the automatically linearized models. Furthermore, rudimentary regression testing between the plugins is provided (Beta status; developed by [DLR-SR](http://www.dlr.de/rm/desktopdefault.aspx/tabid-9280/), [OSMC](https://www.openmodelica.org), [ITI](http://www.itisim.com/)).
* **Simulink-Block** similar to the "To File" Block, which writes a bus including the signal names in a Dymola-compatible mat-File. [SaveToFile.zip](/tools/SaveToFile.zip) written by Arne Schmenkel.

## Modelica tools for developers

Modelica Compliance Suite

A semantics compliance suite for the Modelica language

* Project home: [https://github.com/modelica/Modelica-Compliance](https://github.com/modelica/Modelica-Compliance) (can also be used as Subversion or Git checkout address).
* [Download latest version as zip file](https://github.com/modelica/Modelica-Compliance/archive/master.zip)

CSV Result Compare tool

The CSV Result Compare can be used to compare curves from one csv files with curves from other csv files using a special algorithm.

* Project home: [https://github.com/modelica-tools/csv-compare](https://github.com/modelica-tools/csv-compare) (can also be used as Subversion or Git checkout address).
* [Download latest version as zip file](https://github.com/modelica-tools/csv-compare/archive/master.zip)

MapleSim Standalone Modelica Parser

May be freely used for library syntax validation, and for non-commercial educational purposes.

* Online Version:[http://www.maplesoft.com/products/maplesim/modelicachecker](http://www.maplesoft.com/products/maplesim/modelicachecker)
* Git address: [https://github.com/modelica-tools/ModelicaSyntaxChecker](https://github.com/modelica-tools/ModelicaSyntaxChecker)

Modelica Testsuite

Modelica models to test various aspects of the Modelica language can be found in the development repository:

* Git address: [https://github.com/modelica/ModelicaStandardLibrary](https://github.com/modelica/ModelicaStandardLibrary) 
* Browse the code: [https://github.com/modelica/ModelicaStandardLibrary/tree/master/ModelicaTest](https://github.com/modelica/ModelicaStandardLibrary/tree/master/ModelicaTest)

For historical reasons we also provide the older version 1.4 from December 2000 here: [testsuite.zip](/tools/testsuite.zip)

Trimming of trailing white spaces (and other code clean up)

This script will recursively remove all trailing white spaces in all text files in a given directory. Binary files and files residing in version control specific directories are skipped. As an addition one can also let it clean out obsolete or empty/superfluous Modelica annotations from Modelica files.

* Project home on GitHub: [https://github.com/dietmarw/trimtrailingwhitespaces](https://github.com/dietmarw/trimtrailingwhitespaces)
* [Downloadable releases](https://github.com/dietmarw/trimtrailingwhitespaces/releases)

PMD

An extensible multilanguage static code analyzer with support for Modelica language.

* Project home on GitHub: [https://github.com/pmd/pmd](https://github.com/pmd/pmd)
* [Downloadable releases](https://github.com/pmd/pmd/releases)

## Other commercial tools

Here comes a list of **commercial** tools that are useful in combination with some of the Modelica Simulation Environments mentioned above:

* The **Canvas** (by [XRG Simulation GmbH](http://www.xrg-simulation.de)) software is a post processing tool for easy and fast visualization of _1-d_ simulation results. The basic concept is to arrange numerical result values on a _selectable background image_. That enables the user to generate analyzing figures with self designed background pictures in an efficient way. A batch mode allows the generation of a series of analyzing images out of a high number of result files with one click. The tool is not limited to a certain simulation program, although the first version only supports simulation results from Dymola® and OpenModelica, in the near future more result file types (e.g. MATLAB/Simulink®) will be supported. The demo software for Windows® operating systems is available for **free** [(Proceed to download site)](https://xrg-simulation.de/index.php/de/news/2012/kostenfreies-demo-fuer-canvas).
* **[DaVE](https://www.tlk-thermo.com/index.php/en/dave)** is a visualization and simulation environment that is suitable for both post-processing and online display of dynamic data sets. DaVE supports a number of data sources, not only of various file formats (e.g. csv, FMI and Dymola result files) but also online connections to simulation and measurement software (like TISC, CANape and LabVIEW). Many different visualization tools like thermodynamic state charts (e.g. ph-, Ts-, hx- and isosteric diagram) or P&I flow diagrams are available, which can be arranged and configured freely
* With **[DaVE Lite](https://www.tlk-thermo.com/index.php/en/dave)**, TLK offers a free visualization tool for the presentation of thermodynamic state diagrams, which is based on elements of the DaVE software. DaVE Lite has the following features: 
    
    * Creation of ph and hx diagrams
    * Use of pure media from the latest version of the TILMedia property data library
    * Integration of up to three data connectors (csv and mat files)
    * Creation of up to three StateChart pages
    
    You can [download DaVE Lite](https://www.tlk-thermo.com/index.php/en/dave) from the product page.
* **ModelOpt** (by [XRG Simulation GmbH](http://www.xrg-simulation.de)) is an **optimization** application for minimizing cost functions or deviations from a design or measurement value. It uses Dymola®/Modelica® for modeling and target function definition as well as for simulation (from version Dymola 6.1 to the latest version). A simple and intuitive graphical user interface guides the user step by step through an optimization project. Any model depending on _float parameters_ can be optimized by a selection of robust algorithms which are designed for either searching a local or even a global optimum of a target function. The progress of the iterative algorithm can be observed in a plot diagram or from a table indicating the currently best solution. A separate batch-mode allows to investigate one and the same model for different scenarios in a single optimization run. The demo software for Windows® operating systems is available for **free** [(Proceed to download site)](https://www.xrg-simulation.de/en/products/applications/modelopt).
* **[Model Testing Toolkit](http://www.modelon.com/products/model-testing-toolkit/)** (by [Modelon](http://www.modelon.com/)) is a platform for creating, executing and automating tests of Modelica models. It is designed to handle the increasingly complicated task of developing models and libraries for both a single tool as well as multiple tools and even cross-testing (compilation and simulation performed on different tools).
* **[TISC](https://www.tlk-thermo.com/index.php/en/tisc-suite)** is a co-simulation environment for controlling different simulation applications and exchanging data between them. TISC organizes the co-simulation setup by managing simulation programs, models, parameters and initialization settings, different simulation computers, as well as IP connections. TISC provides interfaces to Modelica, MATLAB/Simulink, Ascet, Labview, Fluent, Star-CD, Theseus-FE, Flowmaster, Kuli, Trnsys, and Wave. New Interfaces can be developed upon request based on C, C++, C# (using .NET Framework 2.0), Python, or FORTRAN.  
    Please visit the [TLK-Thermo website](http://www.tlk-thermo.de/) for more information.
* **[TILMedia](https://www.tlk-thermo.com/index.php/en/tilmedia-suite)** is an interface library to provide fluid and solid properties from various existing property databases to different applications. The interface library can be used in both function-based and object-oriented programming.  
    Please visit the [TLK-Thermo website](http://www.tlk-thermo.de/) for more information.

## Obsolete Tools (no longer maintained)

* **Modelicac** is a compiler for a subset of the Modelica language including parts of the "equation" subset that can express relations between Real variables. Modelicac is included into the [Scilab](http://www.scilab.org) distribution (although it is an independant executable) and is used by [Scicos](http://www.scicos.org) (Scilab's block-oriented editor and simulator) to handle hybrid model simulations. The following features are supported by Modelicac:
    
    * Declaration of "Real" scalar variables and (statically fixed-size) arrays;
    * Aggregation of components is supported (but inheritance is not)
    * Modifications of parameters are supported;
    * Declaration of equations (equalities, "for" equations, "when" equations)
    * "if" equations are not supported, however it is possible to write "if" expressions in equations.
    
    That subset of the Modelica language allows one to write most of the continuous basic models encountered in various physical domains such as electricity, hydraulics, etc. A few examples provided as Scicos demonstrations come with the Scilab distribution.  
    Control (by way of discrete variables, algorithms, blocks, etc.) is not handled by Modelicac, however it is handled by Scicos (in fact, it is Scicos's original purpose). Hence hybrid models can be simulated under the Scicos environment in a rather transparent way: Scicos calls Modelicac on the continuous part of the model and simulates directly the remaining (discrete) part.  
    Scilab, Scicos and Modelicac are free software: one can use them for educational purposes but also into industrial applications. More details about Modelicac and Scicos can be found [in this paper](/events/modelica2006/Proceedings/sessions/Session2c1.pdf).
