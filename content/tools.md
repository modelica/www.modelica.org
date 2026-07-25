---
title: Modelica Tools
---

# Modelica Tools

**Modelica is an open language.** Model and library sources are written in a standardized, tool-independent format. That is a core strength of the Modelica ecosystem: the same models can be created, edited, simulated, and analyzed in **different tools**, and moved between free and commercial environments with far less lock-in than proprietary modeling languages.

In practice you still need a modeling and simulation environment to:

* define models in a graphical editor (composition diagram) and/or as Modelica text,
* translate them with symbolic techniques into an efficiently simulatable form, and
* simulate, analyze, and visualize results.

Many tools also exchange compiled models and co-simulate via open standards such as [FMI](https://fmi-standard.org/) and [SSP](https://ssp-standard.org/), which complements the portability of Modelica source.

The tools below range from free open-source environments and browser playgrounds to commercial multi-domain platforms. Prefer **Download**, **Try free**, or **Open in browser** when available.

{{< rawhtml >}}
<style>
  /* Page-local styles only — do not affect the global theme */
  .ma-tools {
    margin-top: 1.5rem;
    margin-bottom: 2rem;
  }
  .ma-tools .ma-tool-card {
    height: 100%;
    border: 1px solid rgba(0, 0, 0, 0.08);
    border-radius: 0.75rem;
    overflow: hidden;
    background: var(--bs-body-bg, #fff);
    box-shadow: 0 0.125rem 0.5rem rgba(0, 0, 0, 0.04);
    display: flex;
    flex-direction: column;
  }
  .ma-tools .ma-tool-media {
    /* Full-bleed header: no gray letterbox around screenshots */
    background: linear-gradient(145deg, #142033 0%, #1c3a5c 55%, #243048 100%);
    border-bottom: 1px solid rgba(0, 0, 0, 0.08);
    height: 11.5rem;
    min-height: 11.5rem;
    max-height: 11.5rem;
    display: block;
    padding: 0;
    overflow: hidden;
    position: relative;
  }
  .ma-tools .ma-tool-media::after {
    /* subtle bottom fade into card body */
    content: "";
    position: absolute;
    left: 0; right: 0; bottom: 0;
    height: 28%;
    pointer-events: none;
    background: linear-gradient(to top, rgba(0,0,0,0.18), transparent);
  }
  .ma-tools .ma-tool-media img {
    max-width: none !important;
    max-height: none !important;
    width: 100% !important;
    height: 100% !important;
    margin: 0 !important;
    display: block !important;
    object-fit: cover;
    object-position: center center;
  }
  .ma-tools .ma-tool-body {
    padding: 1rem 1.1rem 1.15rem;
    display: flex;
    flex-direction: column;
    flex: 1 1 auto;
  }
  .ma-tools .ma-tool-vendor {
    font-size: 0.8rem;
    text-transform: uppercase;
    letter-spacing: 0.04em;
    opacity: 0.7;
    margin-bottom: 0.15rem;
  }
  .ma-tools .ma-tool-title {
    font-size: 1.15rem;
    font-weight: 600;
    margin: 0 0 0.5rem;
    line-height: 1.25;
  }
  .ma-tools .ma-tool-pitch {
    font-size: 0.95rem;
    margin-bottom: 0.85rem;
    flex: 1 1 auto;
  }
  .ma-tools .ma-tool-badges {
    margin-bottom: 0.75rem;
  }
  .ma-tools .ma-tool-badges .badge {
    font-weight: 500;
    margin-right: 0.25rem;
    margin-bottom: 0.25rem;
  }
  .ma-tools .badge-professional {
    background: linear-gradient(135deg, #d4a017, #f0c14b 45%, #c9970c);
    color: #3a2a00;
    border: 1px solid #b8860b;
  }
  .ma-tools .ma-tool-ctas {
    display: flex;
    flex-wrap: wrap;
    gap: 0.4rem;
    margin-bottom: 0.5rem;
  }
  .ma-tools .ma-tool-ctas .btn {
    font-size: 0.875rem;
  }
  .ma-tools details {
    margin-top: 0.35rem;
    border-top: 1px solid rgba(0, 0, 0, 0.06);
    padding-top: 0.5rem;
  }
  .ma-tools details summary {
    cursor: pointer;
    font-size: 0.9rem;
    font-weight: 500;
    color: var(--bs-primary, #0d6efd);
    list-style: none;
  }
  .ma-tools details summary::-webkit-details-marker { display: none; }
  .ma-tools details summary::before {
    content: "▸ ";
    display: inline-block;
    transition: transform 0.15s ease;
  }
  .ma-tools details[open] summary::before {
    transform: rotate(90deg);
  }
  .ma-tools details .ma-tool-more {
    font-size: 0.9rem;
    margin-top: 0.6rem;
  }
  .ma-tools details .ma-tool-more ul {
    margin-bottom: 0.5rem;
    padding-left: 1.1rem;
  }
  .ma-tools details .ma-tool-more p:last-child {
    margin-bottom: 0;
  }
  .ma-tools-section-note {
    font-size: 0.95rem;
    opacity: 0.85;
    margin-bottom: 1rem;
  }
</style>
{{</ rawhtml >}}

## Free Modelica simulation environments

{{< rawhtml >}}
<div class="ma-tools">
  <div class="row row-cols-1 row-cols-md-2 g-3">

    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/openmodelica-ui.jpg" alt="OpenModelica user interface">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Open Source Modelica Consortium</div>
          <h3 class="ma-tool-title">OpenModelica</h3>
          <div class="ma-tool-badges">
            <span class="badge text-bg-success">Free</span>
            <span class="badge text-bg-secondary">Open source</span>
          </div>
          <p class="ma-tool-pitch">Open-source Modelica modeling, compilation, and simulation environment for research, teaching, and industry.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://openmodelica.org/download/">Download</a>
            <a class="btn btn-outline-primary btn-sm" href="https://openmodelica.org/">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Developed and supported by Linköping University and the <a href="https://openmodelica.org/home/consortium">Open Source Modelica Consortium (OSMC)</a></li>
                <li>Supports most of the Modelica language (equations, algorithms, events, functions, packages)</li>
                <li>Graphical editor (OMEdit), scripting, Jupyter, and teaching materials including <a href="https://omwebbook.openmodelica.org/">OMWebbook</a></li>
                <li>Licensing: OSMC-GPL (with free software) and OSMC-EPL (integration with proprietary tools)</li>
                <li>Current releases for Windows, Linux, macOS, and Docker (e.g. v1.27.x)</li>
              </ul>
              <p>Community participation welcome — see the <a href="https://openmodelica.org/">OpenModelica project page</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/rumoca-header.jpg" alt="Rumoca">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">CogniPilot Foundation</div>
          <h3 class="ma-tool-title">Rumoca</h3>
          <div class="ma-tool-badges">
            <span class="badge text-bg-success">Free</span>
            <span class="badge text-bg-info">Browser</span>
            <span class="badge text-bg-secondary">Open source</span>
          </div>
          <p class="ma-tool-pitch">Rust-native Modelica compiler that turns package trees into portable symbolic systems for modern scientific workflows.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://rumoca.cognipilot.org/playground/">Open in browser</a>
            <a class="btn btn-outline-primary btn-sm" href="https://github.com/CogniPilot/rumoca">GitHub</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Treats Modelica as a semantic frontend for Julia, CasADi, Python/JAX/SymPy, FMI, embedded C, and ROS-oriented workflows</li>
                <li>CLI, VS Code extension, Python bindings, and WebAssembly — try instantly at <a href="https://rumoca.cognipilot.org/">rumoca.cognipilot.org</a></li>
                <li>Install options: binary installer, <code>pip install rumoca</code>, GitHub Releases</li>
                <li>Maintained by the nonprofit <a href="https://www.cognipilot.org/">CogniPilot Foundation</a>; contributors include academia and industry</li>
              </ul>
              <p>Project overview and docs: <a href="https://rumoca.cognipilot.org/">Rumoca site</a> · <a href="https://github.com/CogniPilot/rumoca">repository</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

  </div>
</div>
{{</ rawhtml >}}

## Commercial Modelica simulation environments

{{< rawhtml >}}
<div class="ma-tools">
  <div class="row row-cols-1 row-cols-md-2 g-3">

    <!-- Ansys Twin Builder -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/twin-builder-ui.jpg" alt="Ansys Twin Builder">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Ansys</div>
          <h3 class="ma-tool-title">Ansys Twin Builder</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Multidomain system simulation and hybrid digital-twin platform with Modelica, VHDL-AMS, FMI, and reduced-order models.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.ansys.com/products/digital-twin/trial">Free 30-day trial</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.ansys.com/products/digital-twin/ansys-twin-builder">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Successor to Ansys Simplorer capabilities for physics-based system models and digital twins</li>
                <li>Supports Modelica Standard Library and Modelica libraries from Modelon; FMI import/export</li>
                <li>Couples with Ansys 3D physics via reduced-order models; IIoT deployment and hybrid analytics</li>
              </ul>
              <p>Product page: <a href="https://www.ansys.com/products/digital-twin/ansys-twin-builder">Ansys Twin Builder</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- Dymola -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/dymola-ui.jpg" alt="Dymola multi-engineering modeling">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Dassault Systèmes</div>
          <h3 class="ma-tool-title">Dymola</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Complete Modelica environment for multi-domain model creation, simulation, post-processing, and FMI-based interoperability.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://discover.3ds.com/free-trial-version-dymola-for-windows">Free trial (Windows)</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.3ds.com/products/catia/dymola">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Full Modelica support, strong symbolic simulation performance, large set of commercial and free libraries</li>
                <li>FMI 2.0 / 3.0, SSP, and eFMI; integration with version control and the <strong>3D</strong>EXPERIENCE platform</li>
                <li>Trial version available for Windows (restrictions apply); full/Linux evaluation via resellers</li>
              </ul>
              <p><strong>Also on the 3DEXPERIENCE platform:</strong> <em>Systems Simulation Designer</em> is a web application role that lets domain experts build multi-physics Modelica models and share simulation dashboards (parameters, plots, results) for non-expert users via cloud computing. There is no standalone public download page; it is accessed as a platform role alongside Dymola / CATIA Systems workflows. Overview material appears in Dassault’s systems-engineering portfolio and community documentation rather than a separate product site.</p>
              <p>Main product: <a href="https://www.3ds.com/products/catia/dymola">Dymola</a> · Contact: <a href="mailto:dymola.sales@3ds.com">dymola.sales@3ds.com</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- SimulationX -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/simulationx.jpg" alt="SimulationX multi-domain systems">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Keysight Technologies</div>
          <h3 class="ma-tool-title">SimulationX</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Graphically interactive multi-domain system simulation (1D–3D) with Modelica libraries for mechanics, hydraulics, drives, and more.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.keysight.com/us/en/lib/software-detail/des/multi-domain-systems-simulationx.html">Download center</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.keysight.com/us/en/products/design-engineering-software/computer-aided-engineering-software/multi-domain-system.html">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Formerly developed by ESI ITI; product line is now under <strong>Keysight</strong> (ESI integration as of 2025)</li>
                <li>Ready-to-use Modelica libraries; TypeDesigner for custom Modelica types; rich CAE/CAD/API integration</li>
                <li>Export paths for Simulink S-functions, C-code, HiL/RCP and real-time workflows</li>
              </ul>
              <p>Software builds (e.g. SimulationX 2025/2026) are distributed via Keysight Software Manager.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- MapleSim -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/maplesim-ui.jpg" alt="MapleSim modeling environment">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Maplesoft</div>
          <h3 class="ma-tool-title">MapleSim</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">High-performance multi-domain physical modeling with Modelica components, equation simplification, and fast simulation code.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.maplesoft.com/products/maplesim/free-trial/">Free 15-day trial</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.maplesoft.com/products/maplesim/">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Component diagrams built from Modelica-based libraries; import/export of Modelica models and components</li>
                <li>Toolboxes and connectors for digital twins, PLC connectivity, and virtual commissioning</li>
                <li>Related free online utility: <a href="https://www.maplesoft.com/products/maplesim/modelicachecker/">Modelica syntax checker</a></li>
              </ul>
              <p>Evaluation and demos: <a href="https://www.maplesoft.com/products/maplesim/">MapleSim product page</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- Modelon Impact -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/modelon-impact-ui.jpg" alt="Modelon Impact system model">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Modelon</div>
          <h3 class="ma-tool-title">Modelon Impact</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
            <span class="badge text-bg-info">Browser</span>
          </div>
          <p class="ma-tool-pitch">Cloud-native, browser-based system modeling and simulation platform built on Modelica, FMI, Python, and open APIs.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.modelon.com/request-a-modelon-impact-demo/">Request demo / evaluation</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.modelon.com/modelon-impact/">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Drag-and-drop modeling with diagram and code views; dynamic and steady-state solutions from the same model</li>
                <li>REST API, Jupyter, Excel, App Mode for non-experts; FMU import/export</li>
                <li>Free evaluation available for qualified prospects via Modelon sales</li>
              </ul>
              <p>Learn more: <a href="https://www.modelon.com/modelon-impact/">Modelon Impact</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- ODE Orthogonal -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/ode-header.jpg" alt="ODE by Orthogonal">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Orthogonal Supersystems</div>
          <h3 class="ma-tool-title">ODE</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
            <span class="badge text-bg-info">Browser</span>
          </div>
          <p class="ma-tool-pitch">AI-first, browser-based systems engineering platform with full Modelica and MSL support, FMI/SSP, and collaboration features.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.orthogonal.dev/">Open in browser</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.orthogonal.dev/home/">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Web-native Modelica IDE: modeling, simulation, FMU/SSP editing, visualization, and analysis</li>
                <li>Lightweight subscription plans; designed for professionals and beginners</li>
                <li>MCP server integrations for AI-assisted modeling workflows</li>
              </ul>
              <p>Platform: <a href="https://www.orthogonal.dev/">orthogonal.dev</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- Siemens Simcenter (collated) -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/twin-activate-ui.jpg" alt="Siemens Simcenter systems simulation">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Siemens</div>
          <h3 class="ma-tool-title">Simcenter Twin Activate &amp; Amesim</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Siemens Simcenter tools for multi-domain system simulation with Modelica: Twin Activate for signal/physical block diagrams and digital twins, Amesim for mechatronic libraries and Modelica authoring.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.siemens.com/en-us/products/simcenter/systems-simulation/twin-activate/">Twin Activate</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.siemens.com/en-us/products/simcenter/systems-simulation/amesim/">Amesim</a>
            <a class="btn btn-outline-primary btn-sm" href="https://trials.sw.siemens.com/en-US/trials/simcenter-amesim">Amesim trial</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <p><strong>Simcenter Twin Activate</strong> (formerly Altair Twin Activate) is an open integration platform for whole-system and system-of-systems simulation. It combines signal-based block diagrams with native Modelica libraries (mechanical, electrical, hydraulic, thermal), plus Spice, Python, OpenMatrix, and C, and supports FMI and digital-twin deployment.</p>
              <p><strong>Simcenter Amesim</strong> is a mechatronic systems simulation platform with extensive multi-physics libraries and an integrated Modelica authoring environment for combining Modelica models with Amesim components. Strong FMI/Simulink and Simcenter portfolio integration. Free trial available via the Siemens trials portal.</p>
              <p>
                <a href="https://www.siemens.com/en-us/products/simcenter/systems-simulation/twin-activate/">Twin Activate product page</a> ·
                <a href="https://www.siemens.com/en-us/products/simcenter/systems-simulation/amesim/">Amesim product page</a> ·
                <a href="https://www.siemens.com/en-us/products/simcenter/systems-simulation/">Simcenter Systems overview</a>
              </p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- MWorks -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/mworks-ui.jpg" alt="MWORKS.Sysplorer modeling interface">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Suzhou Tongyuan</div>
          <h3 class="ma-tool-title">MWORKS.Sysplorer</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Modelica-based visual modeling and simulation platform for multi-domain engineering systems, with compiler, post-processing, and 3D animation.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.tongyuan.co/product/download">Get MWORKS</a>
            <a class="btn btn-outline-primary btn-sm" href="https://en.tongyuan.cc/">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Self-developed Modelica compiler/solver (product family claims support up to recent Modelica language versions)</li>
                <li>Interfaces for CAD, FEM, MATLAB/Simulink, and FMI; Python/C++ customization</li>
                <li>Part of the broader MWORKS suite (Sysplorer, Syslab, Syslink, MoHub cloud)</li>
              </ul>
              <p>English site: <a href="https://en.tongyuan.cc/">en.tongyuan.cc</a> · Downloads: <a href="https://www.tongyuan.co/product/download">Get MWORKS</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

    <!-- Wolfram System Modeler -->
    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/system-modeler-ui.jpg" alt="Wolfram System Modeler">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">Wolfram</div>
          <h3 class="ma-tool-title">Wolfram System Modeler</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">High-fidelity Modelica modeling environment tightly integrated with the Wolfram Language for simulation, analysis, and digital twins.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://www.wolfram.com/system-modeler/trial/">Free 30-day trial</a>
            <a class="btn btn-outline-primary btn-sm" href="https://www.wolfram.com/system-modeler">Website</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <ul>
                <li>Drag-and-drop Modelica components with full language support and extensive example libraries</li>
                <li>Symbolic/numeric analysis, optimization, control design, and hardware connectivity via Wolfram stack</li>
                <li>Available on Windows, macOS, and Linux; current major line System Modeler 15</li>
              </ul>
              <p>Product page: <a href="https://www.wolfram.com/system-modeler">Wolfram System Modeler</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

  </div>
</div>
{{</ rawhtml >}}

## Specialized applications

These products use Modelica models of physical assets as part of a domain-specific solution. They are **not** general-purpose Modelica modeling IDEs.

{{< rawhtml >}}
<div class="ma-tools">
  <div class="row row-cols-1 row-cols-md-2 g-3">

    <div class="col">
      <div class="ma-tool-card">
        <div class="ma-tool-media">
          <img src="/images/tools/portfolioenergy-header.jpg" alt="PortfolioEnergy">
        </div>
        <div class="ma-tool-body">
          <div class="ma-tool-vendor">PortfolioEnergy</div>
          <h3 class="ma-tool-title">PortfolioEnergy</h3>
          <div class="ma-tool-badges">
            <span class="badge badge-professional">Professional</span>
          </div>
          <p class="ma-tool-pitch">Open-core optimisation for battery storage and flexible assets, using Modelica models of plant physics to co-optimise energy and ancillary markets.</p>
          <div class="ma-tool-ctas">
            <a class="btn btn-primary btn-sm" href="https://portfolioenergy.com/">Website</a>
            <a class="btn btn-outline-primary btn-sm" href="mailto:info@portfolioenergy.com">Book a demo</a>
          </div>
          <details>
            <summary>More details</summary>
            <div class="ma-tool-more">
              <p>PortfolioEnergy provides market-facing optimisation products that consume Modelica models of assets rather than offering a general Modelica IDE. Main offerings:</p>
              <ul>
                <li><a href="https://www.portfolioenergy.com/nem-autobidder"><strong>NEM Autobidder</strong></a> — automated, co-optimised energy and FCAS trading for BESS, hydro, and portfolios in the Australian NEM (bids to AEMO every dispatch interval)</li>
                <li><a href="https://www.portfolioenergy.com/european-value-stacker"><strong>European Value Stacker</strong></a> — multi-market BESS trading across European day-ahead, intraday, and ancillary services (FCR, aFRR, mFRR)</li>
                <li><a href="https://www.portfolioenergy.com/data-centre-flex"><strong>Data Centre Flex</strong></a> — campus-scale Modelica models (compute, HVAC, BESS, generation, interconnect) for energy arbitrage and grid services (NEM, ERCOT, Europe)</li>
              </ul>
              <p>Built on open-core optimisation (LF Energy RTC-Tools lineage). Contact: <a href="mailto:info@portfolioenergy.com">info@portfolioenergy.com</a>.</p>
            </div>
          </details>
        </div>
      </div>
    </div>

  </div>
</div>
{{</ rawhtml >}}

## Free Modelica editors

Modelica models are often built graphically, but they are textual at the core. Free editors and language packages:

* **[Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=SimplyDanny.modelica)** — Modelica language support (syntax highlighting, brackets, snippets).
* **[Rumoca Modelica for VS Code](https://marketplace.visualstudio.com/items?itemName=JamesGoppert.rumoca-modelica)** — language support with Rumoca playground integration.
* **[Modelica mode for Emacs](https://github.com/modelica-tools/modelica-mode)** — by Rüdiger Franke.
* **[Modelica Sublime Text Package](https://github.com/BorisChumichev/modelicaSublimeTextPackage)** — language support and snippets for Sublime Text.

## Modelica tools for developers

* **[Modelica Compliance Suite](https://github.com/modelica/Modelica-Compliance)** — semantics compliance suite for the Modelica language.
* **[CSV Result Compare](https://github.com/modelica-tools/csv-compare)** — compare trajectories across CSV result files.
* **[MapleSim Modelica syntax checker](https://www.maplesoft.com/products/maplesim/modelicachecker/)** — online library syntax validation; standalone parser sources are also on [GitHub](https://github.com/modelica-tools/ModelicaSyntaxChecker) (archived repository).
* **[Trimming of trailing white spaces](https://github.com/simulatino/trimtrailingwhitespaces)** — recursive cleanup of text/Modelica files (and optional annotation cleanup).
* **[PMD](https://github.com/pmd/pmd)** — extensible multi-language static analyzer with [Modelica support](https://docs.pmd-code.org/latest/pmd_languages_modelica.html).
* **[MLQT](https://github.com/mdempse1/MLQT)** — desktop tools for managing and reviewing Modelica libraries in Git/SVN; includes an MCP server for model/library editing.

## Other free tools

Useful free utilities that work with the environments above:

* **[BuildingsPy](https://simulationresearch.lbl.gov/modelica/buildingspy/)** — Python package to run simulations (e.g. Dymola), process `.mat` results (Dymola/OpenModelica), and run unit tests ([GitHub](https://github.com/lbl-srg/BuildingsPy)).
* **[DyMat](https://github.com/jraedler/DyMat)** — Python modules to read and process Dymola/OpenModelica result files ([project page](https://www.j-raedler.de/projects/dymat/)).
* **[Highlight](https://gitlab.com/saalen/highlight)** — free syntax highlighting for many languages including Modelica (HTML, RTF, TeX, …).
* **[listings-modelica](https://github.com/modelica-tools/listings-modelica)** — Modelica definitions for the LaTeX listings package.
* **[modelica-builder](https://github.com/urbanopt/modelica-builder)** — programmatically edit Modelica models from Python.
* **[modelica-fmt](https://github.com/urbanopt/modelica-fmt)** — command-line formatter for Modelica code.
* **[OpenModelica Microgrid Gym (OMG)](https://github.com/upb-lea/openmodelica-microgrid-gym)** — microgrid simulation and RL control with OpenModelica and Python.
* **[PySimulator](https://github.com/PySimulator/PySimulator)** — Python GUI for simulation plugins (Dymola, OpenModelica, SimulationX, FMUs), plotting, and analysis.
