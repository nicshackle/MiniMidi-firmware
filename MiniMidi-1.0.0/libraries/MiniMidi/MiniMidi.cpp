/*
  MiniMidi.cpp - Library for MiniMidi board by Thingking Studios.
  Released into the public domain.
*/

#include <Arduino.h>
#include "MiniMidi.h"

MiniMidi::MiniMidi(int mini_channel)
{
	for (int i = 0; i < 5; i++) { //set LEDs to output
		pinMode(_leds[i], OUTPUT);
		}

		for (int i = 0; i < 4; i++) { //assign buttons as inputs, take initial readings
		pinMode(_buttons[i][0], INPUT_PULLUP);
		_button_values[i] = 1;
	}

	for (int i = 0; i < 7; i++) { //take initial readings of pots
	    _pot_values[i] = analogRead(_pots[i][0]);
	}

	for (int i = 5; i > -1; i--) { //chase LEDs off
	    digitalWrite(_leds[i], HIGH);
	    delay(100);
	    digitalWrite(_leds[i], LOW);
	  }

  for (int i = 5; i > -1; i--) { //chase LEDs off
    digitalWrite(_leds[i], HIGH);
    delay(100);
    digitalWrite(_leds[i], LOW);
  }
}

void MiniMidi::update()
{
 
  
}

