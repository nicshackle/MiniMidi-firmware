/*
  MiniMidi.h - Library for MiniMidi board by Thingking Studios.
  Released into the public domain.
*/

#ifndef MiniMidi_h
#define MiniMidi_h

#include <Arduino.h>

#define LED_A 3
#define LED_B 13
#define LED_C 11
#define LED_D 9
#define LED_E 8

#define BUTTON_ONE 0 //rxled?
#define BUTTON_TWO 2
#define BUTTON_THREE 0
#define BUTTON_FOUR 1

#define POT_ONE A5
#define POT_TWO A4
#define POT_THREE A3
#define POT_FOUR A2
#define POT_FIVE A1
#define POT_SIX A0
#define POT_SEVEN 10

class MiniMidi
{
  public:
    MiniMidi(int mini_channel);
    void update();
  private:
    int _leds[5] = {
	  LED_A,
	  LED_B,
	  LED_C,
	  LED_D,
	  LED_E
	};

	//array of buttons by order, and their Midi Control number
	int _buttons[4][2] = { 
	  {BUTTON_ONE, 1},
	  {BUTTON_TWO, 2},
	  {BUTTON_THREE, 3},
	  {BUTTON_FOUR, 4}
	};

	int _pots[7][2] = {
	  {POT_ONE, 5},
	  {POT_TWO, 6},
	  {POT_THREE, 7},
	  {POT_FOUR, 8},
	  {POT_FIVE, 9},
	  {POT_SIX, 10},
	  {POT_SEVEN, 11}
	};

	int _button_values[4] = {
	  1, //button 1
	  1, //button 2
	  1, //button 3
	  1  //button 4
	};

	int _pot_values[7] = {
	  0, //pot 1
	  0, //pot 2
	  0, //pot 3
	  0, //pot 4
	  0, //pot 5
	  0, //pot 6
	  0  //pot 7
	};
};

#endif

