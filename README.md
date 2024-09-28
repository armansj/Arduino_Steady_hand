# Arduino_Steady_hand

Touch Sensor Music Player

Overview

This project is a Touch Sensor Music Player that detects touches on six analog pins using resistors and plays corresponding musical notes through a buzzer. The setup includes LED indicators for each key, providing visual feedback when a note is played.

Features

Touch detection using resistive sensors.
Musical notes corresponding to each key.
Visual feedback using LEDs.
Debouncing mechanism to prevent false triggers.
Serial output for debugging.
Hardware Required

Arduino board (e.g., Arduino Uno)
6 resistors of varying values
1 piezo buzzer
6 LEDs
6 current-limiting resistors for LEDs
Jumper wires
Breadboard
Circuit Diagram

[Insert your circuit diagram here]

Pin Configuration

Analog Pins:
A0: Touch Sensor 1
A1: Touch Sensor 2
A2: Touch Sensor 3
A3: Touch Sensor 4
A4: Touch Sensor 5
A5: Touch Sensor 6
Digital Pins:
Pin 2: LED for Touch Sensor 1
Pin 3: LED for Touch Sensor 2
Pin 4: LED for Touch Sensor 3
Pin 5: LED for Touch Sensor 4
Pin 6: LED for Touch Sensor 5
Pin 7: LED for Touch Sensor 6
Pin 8: Buzzer
Software Required

Arduino IDE
Installation

Download and install the Arduino IDE.
Connect your Arduino board to your computer.
Open the Arduino IDE and create a new sketch.
Copy and paste the provided code into the sketch.
Upload the code to your Arduino board.
