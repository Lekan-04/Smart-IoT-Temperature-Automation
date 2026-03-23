# Smart IoT Temperature Automation System 🌡️

## Project Description

This project is a Smart Automation and IoT based system.

It monitors temperature using sensor and automatically triggers alert using LED and buzzer.

ESP32 sends temperature data to ThingSpeak cloud for real-time monitoring.

---

## Components Used

Arduino UNO
ESP32
LM35 sensor
DHT22 sensor
LED
Buzzer

---

## Task 3 Output

### Circuit Diagram

![circuit](images/circuit-arduino.png)

### Serial Output

![serial](images/serial-monitor-output.png)

---

## Task 4 IoT Cloud Output

### ESP32 Circuit

![esp32](images/wokwi-esp32-circuit.png)

### ThingSpeak Graph

![cloud](images/thingspeak-dashboard.png)

---

## Working

Sensor reads temperature.

If temperature greater than 30°C:

LED ON
Buzzer ON

ESP32 sends data to cloud.

Dashboard shows graph.

---

## Submitted for

Maincrafts Internship
