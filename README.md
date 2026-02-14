{\rtf1\ansi\ansicpg1252\cocoartf2867
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 # Energy-Saving Fan and Light Automation System\
\
An intelligent IoT-based automation system that controls fan speed and light brightness based on environmental conditions to save energy.\
\
## \uc0\u55357 \u56523  Project Overview\
\
This Arduino-based system automatically:\
- Controls light brightness based on ambient light using LDR sensor\
- Regulates fan speed based on temperature using TMP36 sensor\
- Saves energy by eliminating manual operation\
\
## \uc0\u55356 \u57263  Features\
\
- Fully automatic operation\
- PWM-based smooth brightness and speed control\
- Real-time environmental monitoring\
- Low-cost components\
- Energy-efficient design\
\
## \uc0\u55357 \u57056 \u65039  Hardware Requirements\
\
| Component | Specification |\
|-----------|---------------|\
| Microcontroller | Arduino Uno R3 |\
| Temperature Sensor | TMP36 |\
| Light Sensor | LDR with 10k\uc0\u937  resistor |\
| Actuators | DC Motor (Fan), LED with 220\uc0\u937  resistor |\
| Transistor | NPN (2N2222/BD139) |\
| Diode | 1N4007 |\
\
## \uc0\u55357 \u56507  Software Requirements\
\
- Arduino IDE\
- Embedded C (Arduino language)\
\
## \uc0\u55357 \u56588  Circuit Connections\
\
| Component | Arduino Pin |\
|-----------|-------------|\
| TMP36 | A0 |\
| LDR | A1 |\
| DC Motor (Fan) | D3 |\
| LED Bulb | D9 |\
| Power | 5V and GND |\
\
## \uc0\u55357 \u56522  How It Works\
\
### Light Control\
- Bright environment \uc0\u8594  LED dims\
- Dark environment \uc0\u8594  LED brightens\
\
### Fan Control\
- Below 25\'b0C \uc0\u8594  Fan OFF\
- 25\'b0C\'9630\'b0C \uc0\u8594  Speed increases gradually\
- Above 30\'b0C \uc0\u8594  Fan at MAX speed\
\
## \uc0\u55357 \u56421  Team Members\
\
- Sandeep Rajput (2447046)\
- Mayank Shaw (2447050)\
- Sourabh Rai (2447051)\
- Satyam Bhardwaj (2447052)\
\
## \uc0\u55357 \u56424 \u8205 \u55356 \u57323  Supervisor\
\
Dr. Kumar Abhishek\
Course: Internet of Things\
Department of Computer Science & Engineering\
National Institute of Technology Patna}