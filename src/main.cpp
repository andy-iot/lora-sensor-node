
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#include "lora-display.h"

SSD1306 display(0x3c, 21, 22);

unsigned int count = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("Hello World!");

  delay(1500);
}

void loop() {
  count++;
  digitalWrite(25, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(25, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}

