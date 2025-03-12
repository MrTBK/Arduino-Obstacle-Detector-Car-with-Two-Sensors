# Obstacle Detector Car with Two Sensors

This repository provides the necessary instructions and code to build an Arduino-based obstacle detection car using two ultrasonic sensors to avoid obstacles.

## Required Components

Here is the list of components you'll need for this project:

- **Arduino Uno**
- **Motor Driver**
- **4 DC Motors**
- **2 Ultrasonic Sensors (HC-SR04)**
- **Car Chassis and Tyres**
- **Power Supply/Battery**

## Circuit Connections

### Ultrasonic Sensors to Arduino:

- **Sensor 1 (Front Left)**
  - `Trig1` to pin 4
  - `Echo1` to pin 7
- **Sensor 2 (Front Right)**
  - `Trig2` to pin 11
  - `Echo2` to pin 3

### Motor Driver to Arduino:

- Motor A (Front Left):
  - `IN1` to pin 5
  - `IN2` to pin 6
- Motor B (Back Left):
  - `IN3` to pin 9
  - `IN4` to pin 10

### Power Supply:

- 12V to the motor driver.
- Ground to battery ground.

## Code

The code for controlling the car based on obstacle distance detection from the two ultrasonic sensors is provided in the `obstacle_detector_car.ino` file.
