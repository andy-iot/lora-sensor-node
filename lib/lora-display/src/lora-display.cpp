#include <lora-display.h>
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "SSD1306.h" 

#define DISPLAY_FONT  ArialMT_Plain_10

void LoRADisplay::init(SSD1306 display)
{
  display.init();
  display.flipScreenVertically();  
  display.setFont(DISPLAY_FONT);
}

void LoRADisplay::update(unsigned int count)
{
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(DISPLAY_FONT);
  
  display.drawString(0, 0, "Hello World: " + String(count));

  display.display();
}