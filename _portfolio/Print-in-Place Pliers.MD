---
title: "Print-in-Place Pliers"
excerpt: "Functional multiple component pliers that work immediately after removal from the print bed."
header:
  image: /assets/img/Done_Pliers.jpg
  teaser: /assets/img/Done_Pliers.jpg

gallery:
  - image_path: /assets/img/Done_Pliers.jpg
  - image_path: /assets/img/Flexible Part.jpg
  - image_path: /assets/img/Handles & Needles.jpg

toc: true
toc_label: "Table of Contents"
toc_sticky: true
toc_icon: bars

type: Outside Projects
---

## Introduction 

This project presents the design and fabrication of print-in-place multi-material pliers that are capable of gripping small through-hole resistors immediately after printing. 

Print-in-place designs are attractive because they reduce assembly complexity and allow functional mechanisms to be fabricated in a single manufacturing step. However, traditional single-material print-in-place joints often suffer from poor motion quality due to friction and surface irregularities. To address this limitation, this design incorporates a flexible spring part made from the elastic material TPU-95A, enabling smooth motion for the pliers.

### Print-in-Place Design

Print-in-place design is widely used in additive manufacturing to create functional parts that come off the printer ready to move without assembly. One common application is hinges and joints that allow motion directly from the print. Print-in-place hinges are frequently used in enclosures, boxes, and articulated structures where simple rotational motion is required. These hinges eliminate the need for pins or fasteners, making the design simple and lightweight, just like the example of this Print-in-Place Fidget Cube ([Print-in-Place Fidget Cube](https://www.thingiverse.com/thing:230139)). 

Another application is gears and transmission systems. Print-in-place gear trains allow designers to fabricate components in a single print, ensuring correct alignment while avoiding assembly errors. A good example of this is the Print in Place 3-in-1 Planetary Gears model, in which multiple gears and structural elements are produced in a single 3D print and can move smoothly without assembly ([Print in Place 3-in-1 Planetary Gears](https://www.printables.com/model/319669-print-in-place-3-in-1-planetary-gears)). In traditional manufacturing, transmission systems of this complexity would require highly precise machining, tight tolerances, and careful assembly to achieve comparable effects. 

Material selection is significant for print-in-place designs. Single-material designs using rigid plastics such as PLA, ABS, or PETG are commonly used for hinges and gear systems, while multi-material designs usually use flexible materials such as TPU for compliant or spring elements. The choice of materials ultimately depends on the intended function and performance requirements of the design.

## Design and Iterative Process

The pliers consist of two rigid handles and two rigid needles, and a central flexible spring part. The rigid components are designed to interlock with the spring through tab-and-slot joints, providing a secure connection without additional post-print assembly (Figure 1). Multiple design iterations were produced to refine needle geometry, especially the angle of the top, to better grip and pick up small items like through-hole resistors, and to adjust the tolerance of the tab-and-slot joints between rigid parts and the spring element for more reliable connections. 

**Figure 1.** The Tab-and-Slot Joint
![Tab-and-Slot Joint](/assets/img/tab-and-slot joint.jpg)

The flexible spring component was designed with carefully controlled thickness and infill density to provide sufficient restoring force in elastic deformation. The material selection played a key role in performance: a rigid thermoplastic was used for the handles and needles to ensure precise geometry for the job, while the TPU-95A material was picked for the spring to enable smooth motion and automatic return. Here is the 3D CAD model of the pliers.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281194cb5e16602c2bbe?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Print Settings
You must notice that there is no grid-like structure in the CAD model above, so how to produce the elastic effect for this spring part? The answer is print settings. By setting the SuperSlicer by the following steps, a grid-like structure will be created, which is shown below in Figure 2.

| Setting | Parameter |
|-----|--------------|
| System Preset (Material) | Voron-Elastic 95A |
| System Preset (Nozzle) | Voron_300 0.6 Nozzle-BLUE |
| Perimeters | 3 |
| Solid Layers (Top) | 0 |
| Solid Layers (Bottom) | 0 |
| Sparse Infill Pattern | Grid |
| Density | 31% |

**Figure 2.** The SuperSlicer Preview
![SuperSlicerView](/assets/img/SuperSlicerView.png)

## Pliers Specifications

| Item | Value |
| ---- | ----- |
| Spring Element Side Length | 35mm |
| Handle Length | 106mm |
| Jaw Length | 80mm |
| Distance between Jaws | 13mm |

## Pliers Working
![Plier View](/assets/img/PlierView1.gif)

![Plier View](/assets/img/PlierView2.gif)






