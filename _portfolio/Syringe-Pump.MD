---
title: "Syringe Pump"
excerpt: "DIY syringe pump capable of 1 mL / min flow rate up to 10 mL / min with different sizes of syringes"
header:
  image: /assets/img/Syringe Pump.png
  teaser: /assets/img/Syringe Pump Rendering.png

gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png
   
---

# Introduction

Syringe pumps are motor-driven devices capable of delivering fluids across a wide range of flow rates, typically operating through a motor turning a lead screw. A nut coupled to the syringe's plunger travels along this screw, and as the screw rotates, the plunger is pushed forward, ejecting a proportional volume of liquid. The key benefits include maintaining sterility with minimal cross-contamination when swapping syringes, the ability to pump highly viscous fluids, high accuracy, and non-pulsatile flow. These features make them valuable in laboratory settings for microfluidic devices and medical facilities for administering therapeutics and nutrients. However, their main limitation is the finite volume of the syringe, which cannot recirculate fluid or draw from a larger reservoir, meaning delivery stops when the syringe is empty. High-end models often alert staff when the syringe is nearing empty. Consequently, designing, 3D printing, and programming a syringe pump is a cost-effective alternative

# Design Overview

## Syringe Mechanics

The pump uses a motor to turn a lead screw, which pushes the syringe plunger and controls the liquid flow. It is compatible with two syringe sizes (10 mL or 20 mL) and knows how wide they are to be accurate. The motor operates with fine step resolution for small amounts of liquid to be dispensed. When the syringe is empty, a limit switch triggers the pump to stop and activates a red indicator light. All components are enclosed in a sealed box for safety and to prevent spills.

## Design Compatibility Across Syringe Sizes

Both the end support and the carriage were customized to fit and fix the syringes in place. For the end support, a groove was designed to hold the flange of syringes, and two arcs with different diameters are just right for fitting two different sizes of syringes that can be easily secured when inserted (Figure 1). The carriage, featuring a groove with an opening on one side, was designed to hold the syringe plunger. There are two different arcs to fit different syringes: the smaller arc positioned at the bottom and the larger arc at the top, enabling compatibility with both syringe sizes. With this design, the syringe pump can accommodate different sizes of syringes.

*Figure 1. The Large syringe fixed on the pump
![Syringe Fixed on the End Support](/assets/img/SyringeOnFixation.png)

## Functionality (Button, Switches, and LEDs)

The pump uses a button that clicks on and off to start and stop the flow. A switch is triggered by the syringe when it becomes empty. When this occurs, the sensor stops the pump and turns the light red to indicate the empty state. The light also shows whether the pump is running (green), paused (blue), or needs a new syringe (red). The wiring diagram is shown in Figure 2.

*Figure 2. Wire Diagram
![Wire Diagram](/assets/img/WirePlot.png)

## Electronic Protection (Water Safety)

The wires are covered with heat-shrink tubing and special connectors to keep them insulated and secure. A custom 3D-printed box covers the Arduino, power supply, and wires. The top of the box is sealed to stop liquids from getting inside. The button and the LED are attached to the outside of the box in tight holes, which helps keep out dust and water. The motor and screw that move the syringe are separate from the electronics. This lowers the chance of fluids being spilled on the electronics. 

*Figure 3. The Protective Box
![Box](/assets/img/Box.png)

# Operating Limitations

The theoretical max flow rate for the 10 mL syringe is approximately 6.07 mL/min, and for the 20 mL syringe, 10.08 mL/min. The smallest dispensable amount for the 10 mL syringe is 0.000101 mL and 0.000168 mL for the 20 mL syringe. The calculations use a 2mm lead screw at 200 steps/rev (3200 microsteps/rev), and a max step speed of 1000 steps/sec. Assigning the stepper motor a max speed of 1000 steps limits the top linear speed for syringe extrusion. A lead screw of 2mm limits the amount of distance the syringe pump can travel on any given pulse. In this case, the distance is 0.000625 mm (2mm / 3200 microsteps). A larger lead screw would yield a greater distance per pulse and a smaller screw would result in a smaller distance per pulse. The two stated observations are operating limits because they put boundaries on how much fluid the pump can dispense.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028118bf679d743d4e48b?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>










