#ifndef _LORA_DISPLAY_H
#define _LORA_DISPLAY_H

#include "SSD1306.h" 

class LoRADisplay {

public:
    LoRADisplay() {}
    void init(SSD1306 display);
    void update(unsigned int count);
};

#endif /* _LORA_DISPLAY_H */ 