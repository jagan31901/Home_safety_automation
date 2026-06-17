# 🌡️ Temperature Monitoring and Alert System

## Description
This project monitors temperature using an NTC thermistor and displays the temperature on a 16x2 I2C LCD. When the temperature exceeds 30°C, the system automatically turns ON an LED, buzzer, and relay.

## Components Used
- Arduino UNO
- NTC Thermistor
- 16x2 I2C LCD
- LED
- Buzzer
- Relay Module

## Pin Connections

| Component | Arduino Pin |
|-----------|------------|
| Thermistor | A0 |
| LED | D2 |
| Buzzer | D3 |
| Relay | D4 |
| LCD SDA | A4 |
| LCD SCL | A5 |

## Working
1. Reads temperature from the NTC thermistor.
2. Displays temperature on the LCD.
3. Compares temperature with the threshold value (30°C).
4. If temperature exceeds 30°C:
   - LED turns ON
   - Buzzer turns ON
   - Relay turns ON
5. If temperature is below 30°C:
   - LED, buzzer, and relay remain OFF.

## Wokwi Simulation

🔗 **Wokwi Project Link:**

https://wokwi.com/projects/467091062071083009

## Applications
- Temperature Monitoring
- Fire Prevention
- Cooling System Automation
- Industrial Safety Monitoring

## Author
**Jagan G**
