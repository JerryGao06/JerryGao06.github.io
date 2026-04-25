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

## Comparison Between AlSi10Mg and 17-4 PH Outcomes

The two materials produced dramatically different geometries, which directly reflect their mechanical properties. The AlSi10Mg outcomes resulted in bulkier, more solid structures with wider load-bearing surfaces. Since aluminum has a lower mechanical strength than stainless steel, the algorithm had to add more material volume to meet the minimum safety factor of 2, resulting in thicker and heavier geometries. The best outcome has a mass of 0.929 kg.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811b24fefbd36faac2e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The 17-4 PH stainless steel outcomes, by contrast, produced much more skeletal geometries, with thin frames efficiently spreading loads among connection points. This is because 17-4 PH has significantly higher yield strength, allowing the algorithm to achieve the same performance with much less material use, resulting in a final mass of only 0.4 kg, which is less than half of the AlSi10Mg result.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028112a591bd078c6870d?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

Although 17-4 PH is about three times denser than AlSi10Mg, the superior strength of 17-4 PH allows the algorithm to minimize the structure mass on the denser material. In a nutshell, the 17-4 PH outcome is clearly more optimized, both in structure and in mass. 

## Critique of Generative Design

Generative design is a powerful tool, but it comes with real practical limitations. One challenge is defining obstacle geometry completely. In a complex assembly like this truck, there are many components that the generated geometry must avoid, such as the kingpin swing path, belt, pulleys, and bolt access clearances. A single missing obstacle can produce a design that seems perfect but is impossible to assemble. There is no automated way to verify that all obstacles are captured. 

Similarly, defining all load cases is also a challenge. Obvious loads like rider weight are straightforward, but cases like belt tension are easy to ignore. Since the algorithm only accounts for what is given, any missing load case could make the resulting structure under-designed even if the safety factor seems to be satisfied. 

Despite these drawbacks, generative design is still the most powerful method where performance-to-weight ratio is critical and manufacturing complexity is not a constraint, such as in the aerospace field. Ultimately, like any simulation tool, whether the generative design is valuable depends entirely on how well the real-world problem is described by the engineer. 








