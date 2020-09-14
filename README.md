![Europa Logo](https://i.imgur.com/I8PD66f.png)

[![MIT License](https://img.shields.io/badge/license-MIT-blue)](https://github.com/aureliengmichaud/Odyssey67/blob/master/LICENSE)
 ![Open Source](https://img.shields.io/badge/open_source-yes-brightgreen)

A simple and practical 4x4 mechanical keypad.

 ![PCB Front Render](https://i.imgur.com/yggd61h.png)

## Features

 * Simple and usable layout.
 * Driven by Arduino Pro Micro.
 * Cheap if using FR-4 plates (PCB material).
 * Awesome looking sandwich case.
 * No LEDs and no underglow.
 * Not another swiss cheese PCB.
 * Fully open source.
 * Powered by [QMK Firmware](https://github.com/qmk/qmk_firmware).

## PCB

### Front

 ![PCB Front](https://i.imgur.com/yggd61h.png)

### Back

 ![PCB Back](https://i.imgur.com/MpE3kGi.png)

### Files

 Grab the zip containing the gerbers files needed for manufacturing [here](https://github.com/aureliengmichaud/Europa/blob/master/Europa-PCB-Gerbers-Rev1.zip).

## Plates

### Switch Plate

 ![Switch Plate](https://i.imgur.com/2qBzaoF.png)

### Bottom Plate

 ![Bottom Plate](https://i.imgur.com/MTNHZtB.png)

### Files

 Grab the files needed to get the plates made or modified in KiCad [here](https://github.com/aureliengmichaud/Europa/tree/master/Plates). DXF and SVG files are included, depending on the manufacturer's needs. If you choose to get them made in PCB material (FR-4), you'll find the gerbers for the switch plate [here](https://github.com/aureliengmichaud/Europa/blob/master/Europa-Switch-Plate-Gerbers-Rev1.zip) and the bottom plate [here](https://github.com/aureliengmichaud/Europa/blob/master/Europa-Bottom-Plate-Gerbers-Rev1.zip).

## Parts List

 Part  |  Quantity
 :----  |  :--------:
 [Europa PCB](https://github.com/aureliengmichaud/Europa/blob/master/Europa-PCB-Gerbers-Rev1.zip)  |  1
 [1N4148 Diodes](https://candykeys.com/product/fairchild-semiconductor-diode-1n4148-pack-of-100)  |  16
 [Pro Micro Microcontroller](https://candykeys.com/product/pro-micro-5v-16mhz)  |  1
 [Cherry MX (or compatible) Switches](https://candykeys.com/category:switches/brand:cherry)  |  16
 [Odyssey 67 Switch Plate](https://github.com/aureliengmichaud/Europa/tree/master/Plates)  |  1
 [Odyssey 67 Bottom Plate](https://github.com/aureliengmichaud/Europa/tree/master/Plates)  |  1
 [M3x8 Screws](https://www.ebay.fr/sch/i.html?_odkw=m3x8+screws&_osacat=0&_from=R40&_trksid=m570.l1313&_nkw=m3+screws&_sacat=0)  |  16
 [M3x14 Standoffs](https://www.ebay.fr/sch/i.html?_odkw=m3+screws&_osacat=0&_from=R40&_trksid=m570.l1313&_nkw=m3+standoffs&_sacat=0)  |  8
 [Micro-USB Cable](https://voltacharger.com/products/volta-2-0)  | 1
 [Keycaps](https://www.aliexpress.com/wholesale?catId=0&initiative_id=SB_20200426114303&SearchText=keycaps)  |  16

## Firmware

 The keyboard is powered by [QMK Firmware](https://github.com/qmk/qmk_firmware). You can find the firmware for the Europa [here](https://github.com/aureliengmichaud/qmk_firmware/tree/master/keyboards/aureliengmichaud/europa).

 If you're new to QMK, please take the time to learn all the ins and outs and familiarize yourself with it by reading the [official documentation](https://docs.qmk.fm/#/).

## License

 Released under [MIT License](https://github.com/aureliengmichaud/Europa/blob/master/LICENSE).