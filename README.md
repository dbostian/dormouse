# Dormouse
## An Alix/Prime-E Inspired 40% Mechanical Keyboard

![example](https://i.imgur.com/YC7o2Mk.jpg)

![example](https://i.imgur.com/3EftSge.jpg)

![example](https://i.imgur.com/2MG0JTf.jpg)

A 3d-printable 40% keyboard, for the handwiring mechanical keyboard crowd. It fits on a larger (250mm wide) print bed without having to split the shell or plate.

## Project Structure
/stls - STL files for 3d Printing

/qmk - Firmware folder for QMK

/raw_data - Data from [keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/) and [kbfirmware.com](https://kbfirmware.com/)

default.hex - Compiled firmware, for flashing.

## Layers
"So, how do you type on this thing?" "Where are the numbers?" "Don't you need arrow keys?"

![example](https://i.imgur.com/hLFlkfl.jpg)
To access other keys like numbers, the F row, the arrows, you need to hold down a modifier key to access various layers. The layers I user are Nav (arrow keys, page up, home, end etc.), Num (1-10, +, -, =), Symbol (!, @, %, #, etc.) and Fn (F1-F12, Print Screen).

![example](https://i.imgur.com/0ASaVXF.jpg)
The Nav layer turns WASD into the arrow cluster, and also houses the other navigation keys. This key is easy to hit with the left thumb, so it is also used for some of the keys that that were removed from the right side of the board (quotes, semicolon, slashes). It also turns escape into the tilde.

![example](https://i.imgur.com/mCcn9r4.jpg)
The Num layer simply houses the numbers, along with the = and - keys.

![example](https://i.imgur.com/slC50W2.jpg)
The Symbol layer is like the number layer plus shift, so you don't have to create a 3-key combo for those characters. The Symbol layer key doubles as a second space bar. Tap it for a space, hold it down to switch layers.

![example](https://i.imgur.com/14wZbSj.jpg)
The Fn layer gives access to F1-F12, plus some lesser-used keys, like caps lock and print screen. I've also placed the RGB controls on this layer, along with the all-important RESET key for flashing new firmware.

## Construction

### Printed Parts
- [ ] 1x Plate
- [ ] 1x Shell
- [ ] 1x MCU Tray

### Hardware
- [ ] Keycaps
- [ ] 44x Switches (cherry compatable)
- [ ] 44x 1N4148 Diodes
- [ ] 1x Pro Micro
- [ ] 2x 2u Costar Stabilizers (optional)
- [ ] 7x WS2812 RGB Leds (optional)
- [ ] 15x M3 x 8mm Countersunk Machine Screw
- [ ] Wire
- [ ] VHB or other double-stick tape

### Tools / Misc
- [ ] 3d Printer
- [ ] Soldering Iron + Solder
- [ ] Multimeter
- [ ] Wire Cutters / Strippers / Flush Cutters
- [ ] Hex Drivers
- [ ] M3 Tap

### Printing Notes
The plate and shell will fit on a 250mm wide print bed, but only just. You will need to turn off any skirt or brim in order to make it fit.

Print at 0.2mm layer height. To recreate the embossed teacup in the bottom of the shell, use the color changing feature in your slicing software. Print the first layer in black, then change filament color for the remainder of the print. I suggest translucent.

![example](https://i.imgur.com/7D2PdZ5.jpg)

### Wiring
Rows are wired to pins F4, F5, F6, and F7. Columns are wired to B1, B3, B2, B6, B5, B4, E6, D7, C6, D4, D0, and D1. The RGB LED strip is wired to D3.

![example](https://i.imgur.com/INQKFhL.jpg)


### Assembly
Tap appropriate holes in the shell and mcu tray to M3. Insert all switches into plate. Align the MCU tray with Q key/hole in the shell, and stick the Pro Micro down with VHB. Solder rows and columns according to the excellent [QMK Hand Wiring Guide](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire). Arrange wires neatly, and attach the  mcu and then plate to shell with M3x8mm countersunk screws - use caution to not overtighten and strip the threads. Install keycaps.


### Firmware
I used [QMK firmware](https://qmk.fm/) - there's an included keyboards folder for compiling/flashing your own keymap. 

