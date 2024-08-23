
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#include "lora-display.h"

unsigned int count = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  initDisplay();

  Serial.println("Hello World!");

  delay(1500);
}

void loop() {
  updateOled(count);
  count++;
  digitalWrite(25, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(25, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}

