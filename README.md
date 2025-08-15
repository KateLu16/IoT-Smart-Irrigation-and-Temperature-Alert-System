# IoT Smart Irrigation and Temperature Alert System

A smart, IoT-based solution for automating plant irrigation and monitoring temperature conditions in real time. Designed to help farmers, gardeners, and greenhouse managers optimize water usage and protect crops from extreme temperatures.

---

## Features

- **Temperature Monitoring**: Real-time tracking with alert notifications when thresholds are exceeded.
- **Automated Irrigation**: Soil moisture sensors trigger watering only when needed.
- **IoT Connectivity**: Data sent to cloud dashboard via ESP32/NodeMCU.
- **Alert System**: Email/SMS alerts for temperature anomalies.
- **Data Logging**: Historical data stored for analysis and optimization.

---

## Hardware Components

- ESP32 or NodeMCU
- DHT11/DHT22 Temperature & Humidity Sensor
- Soil Moisture Sensor
- Relay Module
- Water Pump
- Jumper Wires & Breadboard
- Power Supply

---

## Software Stack

- Arduino IDE / Platform.io (for firmware)
- Blynk IoT (for cloud communication)
- GitHub Actions (optional CI/CD)

---

## Folder Structure
IoT-Smart-Irrigation-and-Temperature-Alert-System/
- Hardware/      # Circuit diagrams, wiring instructions, component setup
- Firmware/      # Arduino code for ESP32/NodeMCU microcontroller
- images/     
- documents/     # Project documentation, to-do lists, and references
- README.md      # Project overview and instructions

---


##  How to Run

1. Clone the repo:
   ```bash
   git clone https://github.com/KateLu16/IoT-Smart-Irrigation-and-Temperature-Alert-System.git
   
2. Upload firmware to ESP32 via Arduino IDE.

3. Connect sensors and pump as per Hardware/ diagrams.

4. Configure cloud credentials in code.

5. Power up and monitor via the dashboard.

---

## Contributors
Lưu Khắc Thảo Trang — Project Lead, Software, Integration

Lê Hoàng Nam — Hardware

