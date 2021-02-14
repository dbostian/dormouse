# Dormouse
## An Alix/Prime-E Inspired 40% Mechanical Keyboard

![example](https://i.imgur.com/YC7o2Mk.jpg)

![example](https://i.imgur.com/3EftSge.jpg)

![example](https://i.imgur.com/2MG0JTf.jpg)

A 3d-printable 40% keyboard, for the handwired mechanical keyboard crowd. It fits on a larger (250mm wide) print bed without having to split the shell or plate.

[Keyboard Layout Editor Permalink](http://www.keyboard-layout-editor.com/##@@_y:1.95&x:3.5&c=%23cfcfcf%3B&=Q&_x:8.6%3B&=P%3B&@_y:-0.9500000000000002&x:2.5%3B&=Esc&_x:10.625%3B&=Bksp%3B&@_y:-0.04999999999999982&x:3.5%3B&=A%3B&@_y:-0.9500000000000002&x:2.5%3B&=Tab%3B&@_y:-0.04999999999999982&x:3.75%3B&=Z%3B&@_y:-0.9500000000000002&x:2.5&w:1.25%3B&=Shift&_x:10.38%3B&=Shift%3B&@_ry:1.75&y:2.25&x:13.13%3B&=%3E%0A.%3B&@_ry:2.75&y:0.25&x:13.63&w:1.5%3B&=Enter%3B&@_r:3&rx:3.5&ry:1.25&y:3.75&w:1.25%3B&=Ctrl%3B&@_r:6&rx:0.5&y:1.25&x:4.25%3B&=S%3B&@_ry:2.25&y:-0.75&x:4%3B&=W%3B&@_rx:2&ry:1.25&y:3.5&x:3&w:1.25%3B&=Alt%3B&@_rx:2.5&ry:3&y:0.75&x:2.45%3B&=X%3B&@_r:12&rx:0.5&ry:2.25&y:-1.25&x:5%3B&=E&=R&=T%3B&@_x:5.25%3B&=D&=F&=G%3B&@_x:5.7%3B&=C&=V&=B%3B&@_x:5.95&a:7&w:2.25%3B&=&_a:4%3B&=%0ANav%3B&@_r:-12&rx:15.75&ry:10.75&y:-9.25&x:-5%3B&=Y&=U&=I%3B&@_x:-4.75%3B&=H&=J&=K%3B&@_ry:11&y:-7.5&x:-5.25%3B&=%0AFn&=N&=M%3B&@_x:-5.25&w:2.25%3B&=%0ASymbol%3B&@_r:-6&rx:1.5&ry:1.75&y:4.5&x:9.63&w:1.25%3B&=%0ANum%3B&@_rx:15.5&ry:9.25&y:-7.5&x:-2.75%3B&=O%3B&@_ry:10.75&y:-8&x:-2.25%3B&=L%3B&@_rx:15.75&ry:10.5&y:-6.75&x:-3%3B&=%3C%0A,%3B&@_r:-3&rx:4.5&ry:1.25&y:4.25&x:8.13&w:1.25%3B&=Super)

## Project Structure
**/stls** - STL files for 3d Printing

**/qmk** - Firmware folder for QMK

**/raw_data** - Data from [keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/) and [kbfirmware.com](https://kbfirmware.com/)

**default.hex** - Compiled firmware, for flashing.

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
- [ ] 3d Printer + Filament
- [ ] Soldering Iron + Solder
- [ ] Multimeter
- [ ] Wire Cutters / Strippers / Flush Cutters
- [ ] Hex Drivers
- [ ] M3 Tap

### Printing Notes
The plate and shell will fit on a 250mm wide print bed, but only just. You will need to turn off any skirt or brim in order to make it fit.

Print at 0.2mm layer height. To create the embossed teacup in the bottom of the shell, use the color changing feature in your slicing software. Print the first layer in black, then change filament color for the remainder of the print. I suggest translucent.

![example](https://i.imgur.com/7D2PdZ5.jpg)

### Wiring
Rows are wired to pins F4, F5, F6, and F7. Columns are wired to B1, B3, B2, B6, B5, B4, E6, D7, C6, D4, D0, and D1. The RGB LED strip is wired to D3.

![example](https://i.imgur.com/thzmFgb.jpg)

![example](https://i.imgur.com/INQKFhL.jpg)


### Assembly
Tap appropriate holes in the shell and mcu tray to M3. Insert all switches into plate. Align the MCU tray with Q key/hole in the shell, and stick the Pro Micro down with VHB. Solder rows and columns according to the excellent [QMK Hand Wiring Guide](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire). Arrange wires neatly, and attach the  mcu and then plate to shell with M3x8mm countersunk screws - use caution to not overtighten and strip the threads. Install keycaps.


### Firmware
I use [QMK firmware](https://qmk.fm/). The **default.hex** file contains the keymap as described above. There's an included **/keyboards** folder for customizing your own keymap using QMK, or you can upload the **raw_data/kbfirmware.json** to [kbfirmware.com](https://kbfirmware.com/). 

