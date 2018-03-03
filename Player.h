// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif
#include <FastLED.h>
#include "Button.h"

class Player {
  public:
  	Player();
    Player(uint8_t lifes, uint8_t hitbox_min, uint8_t hitbox_max, uint8_t input_pin, uint16_t lock_time, CRGB lifes_color, CRGB lost_lifes_color);
  	
		uint8_t lifes;
		uint8_t initial_lifes;
		uint8_t hitbox_min;
	  uint8_t hitbox_max;
	  Button button;
	  bool serve;
	  CRGB lifes_color;
    CRGB lost_lifes_color;
    unsigned long time = 0;
    unsigned long serve_time = 3000;

    
    uint8_t lose_life();
    void reset_lifes();
    uint8_t get_off_position();
    uint8_t get_autoserve_position();
};

#endif
