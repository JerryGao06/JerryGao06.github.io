---
title: "Print-in-Place Pliers"
excerpt: "Functional multiple component pliers that work immediately after removal from the print bed."
header:
  image: /assets/img/Done_Pliers.jpg
  teaser: /assets/img/Done_Pliers.jpg

gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png

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


