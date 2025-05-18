# 🤖 Line Follower Robot – Arduino-Based DLD Project

This repository contains the code and documentation for a **line follower robot** built as part of our Digital Logic Design lab course. Inspired by the Tesla Cybertruck and Batman, this robot combines creative design with practical embedded systems and sensor logic.

## 🧠 Project Overview

The robot uses two IR sensors to detect a black line on a white surface and follows it using differential motor control. It’s powered by an Arduino Uno, controlled via C++ code written in the Arduino IDE, and mounted on a custom Cybertruck-style cardboard chassis.

## 🎯 Purpose & Applications

- Demonstrates practical use of **digital logic and sensors**
- Applications in **automated warehouses**, material handling, and robotics education

## 🛠️ Components Used

| Component                | Quantity | Purpose                                      |
|--------------------------|----------|----------------------------------------------|
| Arduino Uno              | 1        | Microcontroller for controlling logic        |
| L298N Motor Driver       | 1        | Controls the motors                          |
| DC Motors                | 2        | Drives rear wheels                           |
| IR Sensors               | 2        | Detect black line (LOW) and white (HIGH)     |
| Rechargeable Batteries   | 2 (3.7V) | Power supply                                 |
| Battery Holder & Switch  | 1 each   | Power management                             |
| Rear Wheels & Caster     | 2 + 1    | Movement and turning                         |
| Jumper Wires & Cardboard | —        | Wiring and body structure                    |

## 🧪 Results

- Accurate and consistent line tracking
- Smooth turning with minimal jitter
- Stable sensor performance in controlled environments

## ⚙️ How It Works

- IR sensors detect surface color
- Arduino processes sensor signals and controls motor speed/direction
- The robot follows the line using basic conditional logic

## 🔧 Challenges Faced

- **Sensor Calibration**: Needed to fine-tune sensor thresholds for different lighting
- **Wiring Management**: Ensured secure connections in limited space

## 💻 Software Used

- Arduino IDE (Programming & Uploading)
- C++ (Control Logic)
