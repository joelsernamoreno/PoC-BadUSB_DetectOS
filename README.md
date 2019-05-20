# PoC-BadUSB_DetectOS
Simple code to execute payloads depending on the detected OS.

Thanks to @keyboardio for the development and publication of the FingerprintUSBHost library.

## Hardware requirements:

Arduino Leonardo, ProMicro, Lilypad USB, etc.

## Software requirements:

1. IDE arduino: http://arduino.cc
2. Keyboard library
3. FingerprintUSBHost library
4. Basic example code: https://github.com/joelsernamoreno/PoC-BadUSB_DetectOS

## Instalation:

1. Download the arduino IDE and this repository.
2. Copy the Keyboard library to the arduino library directory.
3. Copy the FingerprintUSBHost library to the arduino libary directory.
4. Open the arduino IDE
5. Select the board (Tools -> Board) example: Tools -> Board -> LilyPad Arduino USB
6. Open sketch PoC-BadUSB_DetectOS.ino
7. Compile and upload.

More payloads: https://github.com/joelsernamoreno/badusb_examples/tree/master/atmega32u4_arduino_leonardo

If you have any questions, you can contact us by twitter:
@ernesto_xload @JoelSernaMoreno
