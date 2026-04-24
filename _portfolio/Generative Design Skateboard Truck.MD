---
title: "Generative Design Skateboard Truck"
excerpt: "Solid and mass-minimized skateboard truck designed by Generative Design"
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

Powder bed fusion and generative design reach their full potential only when combined together. Generative design uses AI-driven algorithms to explore and calculate thousands of possible geometries based on human-defined constraints, such as load cases, material selection, and safety factors. This will produce organic, structurally optimized shapes that are nearly impossible to manufacture through conventional methods like casting or machining. Powder bed fusion compensates for this problem by selectively melting powdered metal layer by layer using a laser, enabling the precise fabrication of those complex geometries. 

A strong commercial example of this pairing is the Airbus A320 Bionic Partition project, which collaborated with Autodesk and APWorks. They used generative design to redesign the cabin partition wall of the A320 aircraft, producing a structure that is 45% (30 kg) lighter than the original design. The new bionic partition dispensed with much of the bulk portion of the traditional design, and Airbus estimates that applying this design across its entire A320 backlog could save up to 465,000 tons of CO2 emissions per year. The resulting geometry could only be realized by metal additive manufacturing, making powder bed fusion not just convenient, but essential to the design. ([Airbus – Pioneering Bionic 3D Printing](https://www.airbus.com/en/newsroom/news/2016-03-pioneering-bionic-3d-printing))

This is exactly the logic behind this skateboard truck design project. By integrating the hanger and the motor mounting plate into a single generatively designed component, the algorithm will find the optimal load paths that no human designer would achieve, and additive manufacturing will be responsible for making those paths physically real. 

## The Importance of Proper Load Cases

Defining accurate load cases is almost the most significant step in a generative design study. The algorithm has no idea of how a part will actually be used. What it knows is only what the engineer tells it. If the loads are too conservative, the resulting geometry will be overbuilt and heavier than necessary. On the other hand, if some loads are missing, the design may look amazing but fail in real use. The quality of the outcome is completely dependent on the manual inputs. 

For this project, 6 load cases were defined to simulate the range of forces the truck hanger and motor mount could experience during normal riding conditions. The rider’s weight was applied as a vertical downward bearing load at both axles, representing the primary static load the hanger must support. A lateral load was also applied to the axles to account for the sideways forces generated during turning. An impact load, which is several times the static rider weight, was included to represent landing small jumps or riding over cracks, accounting for the worst-case scenario. On the motor mount, both motor torque and belt tension were defined separately as a torque applied to the plate side surface and forces applied to the plate central hole along the belt directions, respectively. The last loads in consideration are the accelerating and braking forces applied to the axles, accounting for the small accelerations. 

| Name of Load | Magnitude | Location Applied | Rationale |
| ------------- | --------- | ------------ | ------------------ |
| Rider Weight Bearing | 500 N per axle | Both axles, downward | Primary static load of the rider standing on the board |
| Lateral Turning Force | 400 N | Both axle ends, lateral | Side forces generated during turning |
| Impact Bearing | 2000 N per axle | Both axles, downward | Worst case from landing jumps or riding over cracks |
| Motor Torque | 10 Nm | Motor mounting plate | Reaction torque transferred to the mount |
| Belt Tension Force | 150 N | Motor mount, along belt direction | Tension in the belt pulling the motor mount toward the wheel |
| Braking / Accelerating Bearing | 150 N per axle | Both axles | Longitudinal deceleration / acceleration force | 






