#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "SSD1306.h" 

SSD1306 display(0x3c, 21, 22);

void initDisplay()
{
  display.init();
  display.flipScreenVertically();  
  display.setFont(ArialMT_Plain_10);
}

void updateOled(unsigned int count)
{
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
  
  display.drawString(0, 0, "Hello World: " + String(count));

  display.display();
}