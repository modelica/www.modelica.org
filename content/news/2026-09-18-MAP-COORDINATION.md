---
title: New Modelica Association Project "Coordination"
date: 2026-09-18
---

![](/images/logos/Modelica-Coordination.svg)  

## New Modelica Association Project "Coordination"

The MA's family of standards has grown — Modelica Language, FMI, SSP, DCP, eFMI — and with it the need to make sure they fit together. 
The Coordination project provides continuous technical coordination across all Modelica Association Projects, a development space for centralized base technologies that several standards can build on, and unified organizational and technical guidelines. 
It also works toward compatibility with standards from other organizations, including OMG and ASAM.
  
Three activities are already under way: a unified CSV format for time series and similar data, replacing today's incompatible variants (a beta is on GitHub and open for public feedback); a standardized format for experiment metadata, so model experiments can be described consistently across Modelica and FMI; and a newly forming effort on a harmonized mapping between SysML v2 and SSP. The project is led by Hubertus Tummescheit. 
Members are delegates from the other MA projects, and external participants are welcome — MA membership and a signed Contributor License Agreement are the prerequisites.

## Project Overview

The primary purpose of the project is the coordination of the development, standardization and promotion of the Modelica Association Standards by making sure they align with the MA vision of coordinated and interoperable standards. This can be achieved by harmonizing the standards, or by creating layered, modular standards that improve the main standards’ interoperability. An additional goal of the project is to also promote interoperability with standards from other standardization organizations, such as, for example, the OMG (Object Management Group).

This work in this project shall be coordinated primarily with other MA standards (FMI, SSP, Modelica Language and Libraries, eFMI etc.) but as need arises, also with other standardization organizations (ASAM, OMG). The MA Coordination specifications are published under Open Content Licenses (e.g., under the CC-BY-SA (Creative Common Attribution ShareAlike 3.0 Unported) license. A human-readable summary of the license text is available from http://creativecommons.org/licenses/by-sa/3.0/. Source code, such as C-header and XML-schema files, that accompany the specification documents are provided under the BSD 2-clause license (https://opensource.org/license/bsd-2-clause).

The initial members of the MA Coordination project are delegates from the other MA projects, in order to fulfill the coordination purpose. Other members are welcome to join by contacting the project leader.

The current project leader is Hubertus Tummescheit. You can contact him via hubertus.tummescheit@modelbased.cloud. The current project members are all from other Modelica Association projects, but we welcome also external members to join us. You have to become a Modelica Association member in order to participate in development, and also sign the Modelica Association’s Contributors License Agreement.

Main Goals

* A development space for centralized base technologies, which can be used by some or all MAPs
* Continuous overview of technical synchronization of MA standards.
* Unified guidelines for the organizational and technical work of existing and emerging MAPs.

You could also see MAP-COORD as the least common denominator of MAPs.

## Ongoing work: 

### A unified CSV format for time series and similar data

Interoperability often depends on the small details of precis definition of data formats and rules. CSV is a ubiquitous and minimal common denominator. However, it is usually used with incredibly many minor variants that are subtly incompatible. With this format, we have defined a format that covers what is needed for numerical data, including NaN and similar exceptions, and that fulfills the needs of all Modelica standards. Note that it is not (yet) used in MSL since it is new. The format is currently used in fmPy and fmusim.

The current release is in beta for public comments, and available on GitHub: MA-HS-CSV-Standard beta release

### A standardized Experiment format

Obviously, a standardized format that describes the minimal metadata required to repeat an experiment on a model is useful. For the Modelica Association standards, it is even possible to use the same experiment definition, and even expect the same result, if the transfer is between Modelica and FMI for model exchange. This standard is currently under active development, and the current standards documentation is accessible at https://modelica.github.io/ma-hs-experiments/main/. Development takes place on GitHub:https://github.com/modelica/ma-hs-experiments. Contributions are welcoem.

### A Canonical Mapping between SSP and SysMLv2

We are in the process of setting up a new minor project to develop a harmonize mapping between SysMLv2 and SSP. This project is currently in its formation phase. If you would like to contribute, please contact hubertus.tummescheit@modelbased.cloud.
  

## Contact information

Modelica Association Project Coordination

Website: https://modelica.org/projects/coordination/

Email to Project Leader:  hubertus.tummescheit@modelbased.cloud
