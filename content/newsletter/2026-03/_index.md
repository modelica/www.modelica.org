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
<h2 id="xrg-simulation-fall-news">XRG Simulation - Fall news</h2>
<p><img src="XRG_Logo_2015_4c_212.png" alt="XRG Logo" title="XRG Logo"></p>

<h4 id="modelica-library-announcements">Modelica Library Announcements</h4>

<p><strong>HumanComfort Library 2.22.0</strong> provides a new shading model for external objects. The advanced 3D external shading calculation defines 
arbitrary 3D geometries like adjacent buildings. A dynamic sun tracking model calculates exact shadow projections based on continuous solar azimuth and elevation.

<p><img src="3DShading.png" alt="HumanComfort 2.22.0 features" title="New detailed HumanComfort shading model for external objects"></p>

<p><strong>HVAC Library 3.7.0</strong> introduces powerful new capabilities for the simulation of advanced HVAC and energy systems:

<ul>
<li>The new <strong>Pressure Mode</strong> is now implemented in <strong>Air Components</strong>. Following the introduction of pressure-based modeling in liquid systems, the same efficient approach is now available for air-side components. The implementation includes <strong>generic pressure drop models</strong> for all major air components, enabling the simulation of <strong>pressure-driven air systems</strong> such as air handling units, ventilation networks, and duct systems. Air mass flows can now be coupled directly to pressure losses, allowing realistic flow distribution and control behavior with minimal modeling effort. In addition, new air valve models support flow balancing and pressure-dependent branch flow splitting.</li> 

<li>New <strong>Demo Models for coupling HVACLib and Buildings Library</strong> demonstrate how HVACLib plant systems can be integrated with advanced building and thermal zone models from the Modelica Buildings Library. The examples include coupling with borehole field models as well as <strong>Buildings Spawn / EnergyPlus thermal zone models</strong>, enabling detailed co-simulation of HVAC systems and dynamic building behavior. These demo models provide a practical starting point for combined plant-and-building simulations and showcase seamless interoperability between the two libraries.</li>
</ul>

![HVAC Library 3.7.0 features](HVACLib_Building_EnergyPlus_1.png 'Coupling HVACLib Plant Model with Buildings Library Spawn of EnergyPlus Thermal Zone')</p>

<p><strong>ClaRa+ Library 1.10.0</strong> for energy system simulation introduces new capabilities for AI-based modeling and vapour cycle simulation:
<ul>
<li>This release introduces a new AI subpackage, demonstrating the integration of artificial intelligence models in Modelica simulation tools using SMArtInt at three levels: replacing individual heat transfer correlations with surrogate AI models, representing entire components (e.g., the condenser in a CO2 vapour cycle) with surrogate AI models, and a surrogate model of the entire steam cycle of a coal power plant based on a Balanced Neural ODE (BNODE).</li>

<li>A new example, ClaRaPlus.Examples.VapourCycle_02, demonstrates a CO2 vapour cycle with simple control of the compressor and expansion valve.</li>
</ul>
Together, these enhancements expand ClaRa+'s capabilities towards AI-assisted simulation, combining traditional physical modeling with data-driven surrogate models to support more efficient and flexible energy system simulations.
</p>

<p><strong>SMArtIntPlus 2.1.0</strong> introduces significant enhancements for AI model generation, continuous dataset sampling, and expanded simulation environment compatibility:

<ul>
 <li><strong>eFMI Model Generator</strong>: A new generator for creating eFMI-compliant Modelica models based on the `eFMI.NeuralNetworks` library. It allows importing neural networks directly from <strong>TensorFlow Lite (TFLite)</strong> and <strong>ONNX</strong> formats, generating pure, standalone Modelica code with network weights embedded as model parameters. The generated models are completely independent of external runtime libraries and offer full portability across simulation tools.</Li>

 ![SMArtInt+ Library 2.1.0 features](SMArtInt+2.1.0eFMI.PNG 'Generation and integration of AI with SMArtInt+ 2.1.0')

 <li><strong>Spline-Based Data Generator</strong>: The Data Generator is extended with optional spline interpolation for dynamic Latin Hypercube Sampling (LHS). Instead of discrete sampling points, it provides continuous function trajectories and their corresponding derivatives while strictly preserving the original LHS points, enabling smooth and realistic excitation for dynamic training scenarios.</li>

 <li><strong>Modelon Impact Compatibility & Headless Execution</strong>: Comprehensive compatibility improvements across all tools (<strong>Data Generator</strong>, <strong>Network Generator</strong>, and <strong>Model Generator</strong>) for <strong>Modelon Impact</strong>. This ensures robust, server-based and headless execution, improved FMU export and result handling, and fully updated documentation for seamless cloud workflows.</li>

 <li><strong>Advanced Inference & Batched RNNs</strong>: Enhanced neural network runtime support including batched and stateful RNN architectures (`sRNNs`), GPU-accelerated inference with ONNX Runtime I/O Binding, delay loading for external dependencies, and configurable simulation result verbosity via the new `showDetails` parameter.</li>
</ul>

<p><em>This article is provided by Stefan Wischhusen <a href="https://xrg-simulation.de/en">XRG Simulation GmbH</a></em></p>

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
