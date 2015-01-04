// color.h

#ifndef _COLOR_h
#define _COLOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif



class LEDColor
{
 protected:
	 int RGB[3];

 public:
	 void init(int, int, int);
	 LEDColor(int, int, int);
	 LEDColor();

};

extern LEDColor Color;

#endif

