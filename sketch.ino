#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int NTC_PIN = A0;
const int LED_PIN = 2;
const int BUZZER_PIN = 3;
const int RELAY_PIN = 4;

const float BETA = 3950; //beta coefficient of the thermistor
const int THRESHOLD_TEMP =30; // temperature threshold in celsius

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  int analogvalue = analogRead(NTC_PIN);
  float celsius = 1.0 / (log(1.0 / (1023.0 / analogvalue - 1)) / BETA + 1.0 / 298.15) - 273.15;

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(celsius);
  lcd.print(" c");
  
  if (celsius > THRESHOLD_TEMP) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(RELAY_PIN, LOW);
  }

  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.println(" C");

  delay(1000);
}
  
 