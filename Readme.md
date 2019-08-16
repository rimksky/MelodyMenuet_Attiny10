MelodyMenuet_Attiny10
====
A program to play Melody Menuet on Attiny10.

## Description

A program to play Melody Menuet on Attiny10.
(Atmel Studio 7.0 project files)

This project files are importing Atmel Stduio Project From bitDuino10, 
then functions `toneCycle()` and `delay()` based on bitDuino10 can be used
on Atmel Studio 7.0.

Original:
ToneSmapleSketch of bitDuino10 by maris_HY
http://100year.cocolog-nifty.com/blog/2014/08/arduino-f0f0.html

## Demo Circuit

```
  Attiny10
  1. PB0   -- NC
  2. GND   -- GND
  3. PB1   -- NC
  4. PB2   -- SPK -- GND
  5. RESET -- SW  -- GND
  6. VCC   -- 3V-5V DC
```

## Requirement

* Attiny10
* Piezoelectric speaker (SPK)
* Momentary switch (SW)
* 3V-5V DC
* TPI Writer ( ex. AVRISP mkII )

## Usage

Attiny10 powered on, start to play melody from Speaker.
When playing melody is done, Attiny10 go to SLEEP_MODE_PWR_DOWN.
If Reset SW is pushed, Attiny10 will restart.

Attiny10 Fuse is Factory setting.

## Licence

ArduinoCore:
  arduino.cc
  LGPL
BitDuino10/BitDuino13:
  @maris_HY
  http://100year.cocolog-nifty.com/blog/2014/03/attiny13arduino.html
MelodyMenuet_Attiny10:
  [rimksky](https://github.com/rimksky)
  CreativeCommon BY 3.0 / Adapted.

## Author

[rimksky](https://github.com/rimksky)
