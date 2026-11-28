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

### Rumoca 0.11 and user group meeting

[Rumoca](https://github.com/cognipilot/rumoca) is an open-source (Apache-2.0) Modelica compiler written in Rust. It compiles Modelica packages into explicit intermediate forms (flat model, DAE, solve-ready IR) for simulation or export to C, CasADi, JAX and FMI. Version 0.11.0 was released on 28 November 2026. Every change is checked in CI against the Modelica Standard Library examples, comparing trajectories with OpenModelica references.

On 18 November 2026, users and developers met at Purdue University for a Rumoca user group meeting with live demos, a roadmap discussion and hands-on hacking. The winning user submission, a swarm of metronomes simulated with Rumoca, is shown below.

![A swarm of metronomes on a moving board, simulated with Rumoca](rumoca-metronome-swarm.png)

Source: [https://github.com/cognipilot/rumoca](https://github.com/cognipilot/rumoca). Rumoca is available from [PyPI](https://pypi.org/project/rumoca/), [npm](https://www.npmjs.com/package/@cognipilot/rumoca) and [in the browser](https://cognipilot.github.io/rumoca/).

*This article is provided by James Goppert (Purdue University)*

<!-- END Vendor news -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-book" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## News from libraries

<!-- TODO: News from libraries -->

### MultiBodyLie and Collision libraries, demonstrated in Ocean Web

CogniPilot modelica_models ([https://github.com/CogniPilot/modelica_models/](https://github.com/CogniPilot/modelica_models/)) is an open-source collection of Modelica libraries. It includes MultiBodyLie, a rigid-body dynamics library, and the new Collision library for contact between plane, sphere, capsule and box shapes.

Both libraries are used in [Ocean Web](https://github.com/CogniPilot/ocean_web), an open-source, browser-based ocean robotics research prototype built on Modelica models compiled by Rumoca to FMI 3. It models sails as cloth and simulates sailboats, submarines, drones, a scuba diver and marine animals in one scene.

Control policies can be trained with reinforcement learning on many model instances in parallel, as shown below (right) for the scuba diver. Ship hydrodynamics are compared with benchmark measurements from the IIHR Wave Basin and Towing Tank at the University of Iowa ([https://iihr.uiowa.edu/facilities-and-resources/wave-basin-and-towing-tank](https://iihr.uiowa.edu/facilities-and-resources/wave-basin-and-towing-tank)), whose published study was very helpful for this work.

![Ocean Web: Hobie 16 catamaran with cloth sails and collision meshes (left); reinforcement-learning training of a scuba diver model (right)](ocean-web-sails-and-diver.png)

Live demo: [https://cognipilot.github.io/ocean_web/](https://cognipilot.github.io/ocean_web/) · Source: [https://github.com/CogniPilot/ocean_web](https://github.com/CogniPilot/ocean_web)

*This article is provided by James Goppert (Purdue University)*

<!-- END News from libraries -->

{{<rawhtml>}}
<div class="masthead-followup-icon d-inline-block mt-5">
    <i class="fa-solid fa-graduation-cap" style="font-size:50px"></i>
</div>
{{</rawhtml>}}

## Education news

<!-- TODO: Education news -->

<!-- END Education news -->
