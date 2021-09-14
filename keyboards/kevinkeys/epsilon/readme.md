# Epsilon

![Epsilon](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Sleepdealer](https://github.com/Sleepdealr)
* Hardware Supported: Epsilon PCB
* Hardware Availability: Future Public group buys

Make example for this keyboard (after setting up your build environment):

    make kevinkeys/epsilon:default

Flashing example for this keyboard:

    make kevinkeys/epsilon:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Breifly touch the reset pads (next to Caps Lock) from either the top or bottom of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
