---
title: "Bike Phone Holder"
excerpt: "Durable and functional phone holder designed by top-down modeling."
header:
  image: /assets/img/
  teaser: /assets/img/

gallery:
  - image_path: /assets/img/
  - image_path: /assets/img/
  - image_path: /assets/img/

toc: true
toc_label: "Table of Contents"
toc_sticky: true
toc_icon: bars

type: Outside Projects
---

## Introduction 

Top-down modeling is a CAD approach in which components are designed within the context of an overall assembly rather than as isolated parts. In this method, key reference geometry, such as the handlebar, is created first and used to guide the design of all subsequent components.

In this project, I applied a top-down workflow by first modeling the handlebar as a fixed reference. All other components, including the clamp, detent mechanism, and phone holder, were then created in place relative to the reference. This ensured proper alignment and accurate dimensions for every component that was based on another component. Additionally, using as-built joints allowed me to define motion directly within the assembly, making it easier to refine the mechanism during development. 

## Rationale behind Design

### Mechanisms

The main objective behind this design was to create a phone holder that is easy to use without tools, secure, and mechanically reliable. To achieve quick, one-handed operation, I chose a lever-driven clamping mechanism. The two side jaws are connected through a linkage system with a spring so that they move symmetrically when the levers at the bottom are pressed. By restricting the moving path of the rods and linkages, the system successfully transfers the pressing movement from the bottom levers to the pushing movement of the side jaws (Figure 1). This allows the phone to be inserted and removed easily, while still providing sufficient clamping force when released. 

**Figure 1.** Clamping Mechanism
![Clamping Mechanism](/assets/img)

For the rotation feature, the goal was to allow switching between portrait and landscape orientations while maintaining stability. A detent mechanism was integrated into the rotating part to provide both positional locking and tactile feedback. Instead of using a traditional spring-loaded ball bearing structure, a flexure-based design was implemented (Figure 2). Curved elastic arms on one component interact with a patterned profile on the rotating disk. As the mount rotates, the arms deflect and then snap into predefined positions, producing a clear “click” feedback. This system avoids the significant space waste required to secure the spring-and-ball structure and maintains a relatively thin profile compared to traditional designs, achieving a compact and reliable rotation feature.

**Figure 2.** Detent Mechanism
![Detent Mechanism](/assets/img)

In the final version, the detent mechanism performed well as expected. It provides distinct feedback and holds the phone securely in both orientations. While stiffness is not directly adjustable, it can be tuned by modifying the geometry of the flexure arms and the depth of the profile. Overall, this approach keeps the mechanism compact, reduces the need for additional hardware, and works pretty well within the constraints of 3D printing.

### 3D Printing Constraints

Given that the entire design was intended for 3D printing, the selection of printing method and material played an important role in the overall performance. In this project, all parts are printed using either vat photopolymerization (VPP) or selective laser sintering (SLS). 

VPP was used for all small components in the lever-driven clamping system. Due to its high resolution and strong mechanical properties of Tough Resin, VPP printing is the best option to build the small but force-bearing components in that system. 

SLS was used for the larger structural components and the detent mechanism. The nylon material used in SLS printing is especially suitable for the flexure arms, since it provides a good balance between strength and flexibility on small scales. Additionally, by using thermoplastic material powder, SLS printing performs well in components that incorporate heat-set inserts and more complex geometries than FFF printing.

Based on this printing approach, several dimensions in the model were adjusted to improve performance and account for fabrication tolerances. Due to the relatively rough surface finish of SLS printing, all movable components—including the detent mechanism and the lever-driven clamping system—failed to function properly in the first iteration. The friction between contacting surfaces was significantly higher than expected, preventing smooth motion under the original small-clearance design. In some cases, the flexure arms were even damaged due to the excessive resistance during rotation. To address these issues, the clearances in the lever clamping system were increased from 0.2 mm to 0.35 mm. In addition, the detent geometry was modified to reduce contact pressure and improve rotational smoothness. These adjustments significantly improved the overall functionality and reliability of the mechanism. 

## Assembly

### Assembly

* Attach the C-shaped clamp to the handlebar and secure it using M5 fasteners.
* Install the rotating interface onto the clamp using a central M5 screw (acts as the rotation axis and connects the detent mechanism).
* Mount the phone holder backplate onto the rotating disk using 4 M3 screws.
* Assemble the lever-driven clamping mechanism onto the backplate. All components can be inserted by sliding into place.
* Make sure the pins of each component are secured.

### Use

* Press the lever to open the side jaws.
* Insert the phone into the holder.
* Release the lever to clamp the phone securely.
* Rotate the holder to switch between portrait and landscape modes.

## CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028112267152a90114dd0?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>




