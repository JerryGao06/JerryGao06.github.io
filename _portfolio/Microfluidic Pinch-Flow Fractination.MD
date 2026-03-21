---
title: "Microfluidic Pinch-Flow Fractination"
excerpt: "A chip produced by VPP resin printing and PDMS that is capable of sorting particles with pinch-flow fractionation."
header:
  image: 
  teaser: 

gallery:
  - image_path: 
  - image_path: 
  - image_path: 

toc: true
toc_label: "Table of Contents"
toc_sticky: true
toc_icon: bars

math: true

type: Outside Projects
---

## Introduction

Pinch Flow Fractionation (PFF) is a passive microfluidic technique used to separate particles based on size under laminar flow conditions. In a PFF device, two fluid streams enter a narrow pinched channel, with one containing suspended particles and the other containing a particle-free buffer. Since the buffer flow rate is significantly higher, it compresses the particle-containing stream against one wall of the channel. Particles cannot reach the wall closer than half of their diameter, so particles of different sizes align along different streamlines in the pinched part. However, when the channel expands into a wider section, the streamlines diverge while particles still flow in routes confined to their original streamlines, and the expansion region amplifies the positional differences between routes. The particles can then be collected separately through multiple outlet channels placed along the end of the broad section. As a result, particles can be continuously separated using only channel geometry and fluid flow, without relying on external forces. 

## Design
I chose a symmetric design approach because it makes the channel dimensions easier to control and leads to a more predictable flow distribution. The central positions of the outlets were determined using the equation: 

$$Y_0 = \left( w_p - \frac{D}{2} \right)\frac{w_b}{w_p}$$

where $$Y_0$$ is the displacement from the bottom wall in the broad section, $$w_p$$ is the width of the pinched point, $$w_b$$ is the width of the broad section, and $$D$$ is the diameter of the particle (Figure 1). 

**Figure 1.** uFluidic Device
![uFluidic Device](/assets/img/PinchedFlowDiagram.png)

The outlet boundaries were placed based on the predicted particle centerlines. Specifically, the region around each centerline was assigned to its corresponding outlet, with boundaries defined approximately midway between adjacent particle trajectories. This ensures that particles of different sizes are captured by separate outlets while minimizing overlap between streams. The remaining lower portion of the broad section, which contains no particles, was assigned to the buffer outlet.

To address the flow balancing issue, the relative widths of the outlet regions were first used to estimate the flow distribution, since flow rate scales with the width of the entrance of each channel. Based on these fractions, the outlet channel resistances were adjusted accordingly. Because hydraulic resistance scales with channel width (keeping constant length and height), narrower paths were added to the particle outlets to increase their resistance, while the buffer outlet was kept wider to allow a larger portion of the flow to pass through (Figure 2). Therefore, the actual flow rate distribution matches the geometric design, preventing any distortion of streamlines.

**Figure 2.** Channel Design
![Channel Design](/assets/img/CADDesign.png)

If I could iterate on this project, I would not be limited to symmetric designs. While the symmetric design simplifies calculations and layout, it does not fully account for the non-uniform distribution of particles and flow fractions across the broad section. A good asymmetric design would allow more flexibility in placing outlets and better match the expected flow distribution. 




