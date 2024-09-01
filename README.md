# duckyPad Pro: Macro Scripting Beyond QMK/VIA

-----------

duckyPad Pro is a 20-key mechanical macropad for power users who demand **advanced macro scripting and customisation** beyond the shackles of QMK/VIA.

Incorporating 4 years worth of feedback from the [original duckyPad](link_here), now with **Rotary Encoders**, **Bluetooth**, **Expansion Modules**, and more!

![alt_text](resources/photos/title.jpeg)

duckyPad Pro has all the basics:

* Hot-Swap
* Rotary Encoders
* Per-key RGB
* USB-C
* 100% **Open-source**

But also features **unlike any other**:

* Custom **[duckyScript](duckyscript_info.md)** engine, **NOT QMK/VIA**.
* Much **longer and sophisticated** macros
* Configurable **OLED** screen
* **Bluetooth**
* **Expansion Modules** for external switches / foot pedals
* **64 profiles**, 3712 macros total.
* [Automatic profile switching](https://github.com/dekuNukem/duckyPad-profile-autoswitcher) based on active window.
* microSD storage
* No proprietary drivers, works out-of-box.
* **Hacker friendly** with tinkering guide

![alt_text](resources/photos/quarter.jpeg)

## duckyScript vs QMK/VIA

duckyPad Pro runs a custom implementation of **duckyScript**, originally designed for [USB Rubber Ducky](https://shop.hak5.org/products/usb-rubber-ducky-deluxe).

Compared to QMK/VIA, you get:

* **Much Longer Macros**
	* [Entire Bee Movie](resources/beemovie.txt) in one macro? Yes please!
	* Up to 3712 macros in total

* **Advanced Interactive Scripting**
	* Variables, conditionals, loops, functions, etc.
	* Reading Buttons
	* Print to OLED screen
	* Change RGB Color
	* Fine timing control
	* Randomization

* **Local Storage**
	* Everything stored on SD card
	* Quick Configuration / Backup / Deployment
	* No sketchy drivers or apps

* **Existing Resources**
	* Lots of [scripts](https://github.com/hak5/usbrubberducky-payloads) to try out
	* Thriving [Discord](https://discord.gg/4sJCBx5) community

While QMK/VIA are great for regular keyboards, they are rather hopeless at even the basics of input automations.

duckyScript is a no-brainer for power users with more demanding scripting needs.

## How It Works / Showcase

* Create a **profile**, typically one for each application.

* Assign up to **58 keys** per profile (20 on-board + 6 rotary encoder actions + 32 external)

* Key names are shown on OLED screen

![alt_text](resources/photos/ps.jpeg)

* Write a **duckyScript** for each key

* You can start simple by consolidating all the shortcuts:

```
Zoom In: CTRL +
Next Tab: CTRL SHIFT TAB
```

![alt_text](resources/photos/firefox.gif)

* up a notch to fill forms, type boilerplate text emails

![alt_text](resources/photos/addr.gif)

with expansion module, wire up own switch / foot pedals

* foot pedal to hide/switch window
* emergency switch, key?
* photo here

of course, duckyscript original purpose, hacking pentest

autoswitcher

## Specifications

#### Keys

* 20 Mechanical Switches
* 4x5 Grid
* Cherry-MX style
* Kailh hot-swap socket

![alt_text](resources/photos/keyside.jpeg)

#### RGB Backlight

* Per-key configurable
* Adjustable brightness

#### Rotary Encoder

* Two encoders
* Bourns Inc. PEC12R-4215F-S0024
* 24 Detents
* Built-in tactile switch

#### Mounting Plate

* Standard: 1.6mm Pure White FR4 (same material as PCB)
* Optional: 1.6mm Brushed Aluminum

#### Expansion Module

* Wire up any switch you want
* Foot pedal, emergency shutoff, toggle switch, etc
* **6 Channels** per module
* **Daisy chain** up to **5 Modules** with regular USB-C cable

#### OLED screen

* 128x128
* **Configurable orientation**
* Shows what each key does
* Print-to-screen in duckyScript

screenshots here


#### Microcontroller

* ESP32-S3
* Dual-Core @ 240 MHz 
* 4MB Flash Memory
* 512KB RAM
* 2MB PSRAM

#### Wireless Communication

* **Bluetooth** (fully working, add your own battery)
* BLE 4.2
* Wi-Fi (Capable but currently unimplemented)

#### Configurator

* Fully open-source
* Windows / Mac / Linux
* Manage profiles/keys
* Write/debug duckyScript
* No need to create an account
* No data collection whatsoever
* No internet connection required


