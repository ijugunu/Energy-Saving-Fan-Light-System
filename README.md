# Energy-Saving Fan and Light Automation System

An intelligent IoT-based automation system that controls fan speed and light brightness based on environmental conditions to save energy.

## 📋 Project Overview

This Arduino-based system automatically:
- Controls light brightness based on ambient light using LDR sensor
- Regulates fan speed based on temperature using TMP36 sensor
- Saves energy by eliminating manual operation

## 🎯 Features

- Fully automatic operation
- PWM-based smooth brightness and speed control
- Real-time environmental monitoring
- Low-cost components
- Energy-efficient design

## 🛠️ Hardware Requirements

| Component | Specification |
|-----------|---------------|
| Microcontroller | Arduino Uno R3 |
| Temperature Sensor | TMP36 |
| Light Sensor | LDR with 10kΩ resistor |
| Actuators | DC Motor (Fan), LED with 220Ω resistor |
| Transistor | NPN (2N2222/BD139) |
| Diode | 1N4007 |

## 💻 Software Requirements

- Arduino IDE
- Embedded C (Arduino language)

## 🔌 Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| TMP36 | A0 |
| LDR | A1 |
| DC Motor (Fan) | D3 |
| LED Bulb | D9 |
| Power | 5V and GND |

## 📊 How It Works

### Light Control
- Bright environment → LED dims
- Dark environment → LED brightens

### Fan Control
- Below 25°C → Fan OFF
- 25°C–30°C → Speed increases gradually
- Above 30°C → Fan at MAX speed

## 👥 Team Members

- Sandeep Rajput (2447046)
- Mayank Shaw (2447050)
- Sourabh Rai (2447051)
- Satyam Bhardwaj (2447052)

## 👨‍🏫 Supervisor

Dr. Kumar Abhishek
Course: Internet of Things
Department of Computer Science & Engineering
National Institute of Technology Patna

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
