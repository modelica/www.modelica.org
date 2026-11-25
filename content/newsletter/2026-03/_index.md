---
title: Newsletter 2026-03
---

{{<rawhtml>}}
<div class="col-lg-8 mx-auto text-center mb-5">
    <div class="ma-logo modelica-association-logo" style="height: 150px; width: 300px; margin: auto"></div>
</div>
{{</rawhtml>}}

# Modelica Association Newsletter 2026-03

issued on <!-- TODO: issue date -->

{{<toc>}}

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-regular fa-envelope" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Letter from the Board

<!-- TODO: Letter from the Board -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-building-columns" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Modelica Association

<!-- TODO: news from the Modelica Association and its projects (FMI, SSP, DCP, eFMI, ...) -->
### eFMI® Project News

#### eFMI® Standard 1.0.0 Beta 2 released

![MAP eFMI® members](eFMI-logo-and-members.png 'MAP eFMI® members')

The next [candidate-draft](https://www.efmi-standard.org/standard/#release-cycle-and-versioning), the *eFMI® Standard 1.0.0 Beta 2*, for the first official release of the *eFMI® Standard* has been released! You can download it from the [eFMI home page](https://www.efmi-standard.org/).

This is the second Beta release, continuing the chapter-wise finalization of the *eFMI® Standard 1.0.0*. This time *"Chapter 3. Guarded Language for Embedded Control (GALEC)"* is finalized (Beta 1 finalized *"Chapter 5. Behavioral Model Representation"*).

The GALEC specification has been significantly extended and refined to achieve semantic completeness; the main features of the GALEC specification are:

 - Complete well-formedness and execution semantic rules, whose main concepts are formally defined and mandatory analyses backed by constructive definitions (e.g., graph-based pseudoalgorithms).
 - Clear requirements, avoiding optional feature levels, essentially distinguishing only "must" and "must not".
 - Clear separation between normative rules and non-normative examples and rationales. The latter provide a comprehensive overview of language design choices, their consequences, and potential optimizations and design-alternatives for compliant tooling.
 - Guarantees on program side-effects, maximum algorithmic operations (i.e., termination) and memory consumption, safe indexing, and strict error-handling. GALEC programs are deterministic and well-defined without undefined behavior.
 - Advanced control- and data-flow rules guaranteeing proper initialization and state usage.
 - Error signaling concept part of ordinary control-flow (no exceptions) enabling delayed error-handling without the risk of missing numerical issues, even if such only occur within a subexpression whose result is not assigned.
 - Simple name space and scoping concept without shadowing.
 - Explicit operators and functions; no implicit type conversions or operator or function overloading.
 - Dedicated multi-dimensional arithmetic operators for all kinds of multidimensional and scalar operands combinations.
 - Definition of commutable statements enabling target specific concurrent execution.
 - Rich set of built-in functions for typical mathematical operations (such as solving linear equation systems or interpolation) and to abstract from target environment specific characteristics (such as type ranges), properly integrated with the error handling concepts.
 - Online recalibration and input-dependent (re)initialization with well-defined levels of variabilities.
 - Well-defined block-interface and life-cycle, defining how to utilize (i.e., system-integrate) GALEC programs.

In addition to *"Chapter 3. Guarded Language for Embedded Control (GALEC)"*, Beta 2 introduces proper syntax highlighting for listings, in particular GALEC programs, and finalizes all appendices:

 - *"Appendix A: Implementation of GALEC built-in functions"*: Portable reference implementation of the GALEC built-in functions, except `solveLinearEquations` and `interpolation1/2/3D`, in GALEC with target platform specific semantic (like type ranges) highlighted as embedded pseudocode fragments.
 - *"Appendix B: Legal information"*: Copyright, licensing, registered trademarks, colophon (fonts and tooling used to write the standard), and disclaimer.
 - *"Appendix C: Normative references"*: Precise definition of referenced standards, including revisions, corrigenda, errata, amendments, etc.

There are only minor improvements in the other chapters; they will be focused on and finalized in individual future Beta candidate-drafts.

If you have any general questions, feedback or improvement proposals for the *eFMI® Standard*, please follow the [reporting specification issues and new feature requests guidelines on our website](https://www.efmi-standard.org/standard/#reporting-specification-issues-and-new-feature-requests) or contact us on our public mailing list, [`efmi-info@googlegroups.com`](https://groups.google.com/g/efmi-info) (no Google account required).

**Your feedback is very welcome!**

#### eFMUs on STM32®/ARM® Cortex-M® microcontrollers

![eFMI® for STM32®/ARM® Cortex-M® microcontrollers](eFMI-for-SMT32-microcontrollers.png 'eFMI® for STM32®/ARM® Cortex-M® microcontrollers')
_**Top left & bottom right:** Modelica model & derived eFMI STM32 firmware in Dymola & STM32CubeIDE; **Bottom left & top right:** MiL simulation of CHiL setup & actual measurements in Digilent WaveForms._

A new [open source repository on GitHub](https://github.com/ALSETLab/efmi-pss-use-case) provides a general template workflow for system integration of eFMUs on STM32®/ARM® Cortex-M® microcontrollers. The application for power system stabilizers has been presented at the [American Modelica & FMI Conference 2026](https://modelica.org/events/american2026/) in the paper *"Real-time Simulation and CHiL Testing of Power System Stabilizers on Microcontrollers with Modelica and eFMI"* (see the linked repository for details).

The demonstrated workflow considers all tasks of going from a Modelica model to safety-critical, hard real-time microcontroller execution: MiL, SiL & HiL testing; MISRA C:2023 and SEI CERT C Coding Standard compliance; Pin, clock, and timer setup; Integration of eFMU production code with STM32®/ARM® Cortex-M® hardware abstraction layer (HAL) code; systematic error detection (e.g., overruns, error signals, etc).

*This article is provided by Christoff Bürger ([Dassault Systèmes](https://www.3ds.com/), Christoff.Buerger@3ds.com)*
<!-- END Modelica Association -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-users" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Conferences and user meetings

<!-- TODO: Conferences and user meetings -->

<!-- END Conferences and user meetings -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-industry" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Vendor news

<!-- TODO: Vendor news -->

<!-- END Vendor news -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-book" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## News from libraries

<!-- TODO: News from libraries -->

<!-- END News from libraries -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-graduation-cap" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Education news

<!-- TODO: Education news -->

<!-- END Education news -->
