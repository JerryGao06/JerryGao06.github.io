---
title: "Microfluidic Pinch-Flow Fractination"
excerpt: "A chip produced by VPP resin printing and PDMS that is capable of sorting particles with pinch-flow fractionation."
header:
  image: 
  teaser: 

gallery:
  - image_path: /assets/img/Mold.jpg
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

$$
Y_0 = \left( w_p - \frac{D}{2} \right)\frac{w_b}{w_p}
$$

where $$Y_0$$ is the displacement from the bottom wall in the broad section, $$w_p$$ is the width of the pinched point, $$w_b$$ is the width of the broad section, and $$D$$ is the diameter of the particle (Figure 1). 

**Figure 1.** uFluidic Device
![uFluidic Device](/assets/img/PinchedFlowDiagram.png)

The outlet boundaries were placed based on the predicted particle centerlines. Specifically, the region around each centerline was assigned to its corresponding outlet, with boundaries defined approximately midway between adjacent particle trajectories. This ensures that particles of different sizes are captured by separate outlets while minimizing overlap between streams. The remaining lower portion of the broad section, which contains no particles, was assigned to the buffer outlet.

To address the flow balancing issue, the relative widths of the outlet regions were first used to estimate the flow distribution, since flow rate scales with the width of the entrance of each channel. Based on these fractions, the outlet channel resistances were adjusted accordingly. Because hydraulic resistance scales with channel width (keeping constant length and height), narrower paths were added to the particle outlets to increase their resistance, while the buffer outlet was kept wider to allow a larger portion of the flow to pass through (Figure 2). Therefore, the actual flow rate distribution matches the geometric design, preventing any distortion of streamlines.

**Figure 2.** Channel Design
![Channel Design](/assets/img/CADDesign.png)

If I could iterate on this project, I would not be limited to symmetric designs. While the symmetric design simplifies calculations and layout, it does not fully account for the non-uniform distribution of particles and flow fractions across the broad section. A good asymmetric design would allow more flexibility in placing outlets and better match the expected flow distribution. 


## Instructions

* Design the channel geometry
  * Create the microfluidic layout (pinched region, broad section, and outlet channels) based on particle size and flow distribution. 
* Add inlet & outlet features
  * Include holes for tubing connections and ensure proper spacing and margins for bonding.
* Export for printing
  * Export the high-resolution model and slice it in Preform. Orient the mold so the bonding surface is flat and parallel to the build plate.
* Resin printing & Post processing
  * Print the mold. Then wash the print to remove uncured resin and perform a short UV cure. Make sure the surface is smooth for bonding.
* PDMS casting
  * Pour mixed PDMS over the mold, and cure at proper temperature and time.
* Demolding and bonding
  * Peel the cured PDMS from the mold, and bond it to a glass to form enclosed channels.

## Discussion

Resin printing provides high resolution and smooth surface finishes, which are critical for microfluidic channels. For FFF printing, on the other hand, its rough surface might cause flow disturbance and particle trapping. Resin printing also allows more rapid prototyping of complex geometries than other high-detail fabrication methods such as photolithography. 

The design can be scaled up by adjusting the pinched width and the broad section width according to the target particle size range. Larger particles require wider pinched regions to avoid particle trapping, while smaller particles benefit from narrower pinched regions for better alignment. Also, an asymmetric design could better match how the particles actually spread out in the channels and improve separation performance.

The lower limit of particle size is determined by fabrication resolution. If particles are comparable in size to the roughness of the internal surface, their flow trajectories become unpredictable and more affected by slight flow disturbances. This will destroy the streamlined separation. 






