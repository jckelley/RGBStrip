/** 
 * Program: RGB LED STRIP LIBRARY FOR ARDUNIO UNO
 * __author__ = "Joseph Kelley"
 * _copyright__ = "Copyright 2015"
 * __license__ = "MIT"
 * __version__ = "1.0"
 * __maintainer__ = "Joseph Kelley"
 * __email__ = "joe.kelley@wisc.edu"
 * __status__ = "Charlie"
 *
 */

// LEDStrip.h

#ifndef _LEDSTRIP_h
#define _LEDSTRIP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	//#include "WProgram.h"
#endif



enum LED_COLOR{
	LED_RED,
	LED_GREEN,
	LED_BLUE,
	LED_BLACK,
	LED_WHITE,
	LED_LIME,
	LED_YELLOW,
	LED_CYAN,
	LED_MAGENTA,
	LED_SILVER,
	LED_GRAY,
	LED_MAROON,
	LED_OLIVE,
	LED_PURPLE,
	LED_TEAL,
	LED_NAVY,
};

class LEDStrip
{
 protected:
	 int pinRGB[3];
	 int curRGB[3];
	 

 public:
	 void init(int, int, int);
	 LEDStrip(int, int, int);
	 void setColor(LED_COLOR);
	void fadeTo(LED_COLOR, float);
	void setRGB(int, int, int);
	
};

extern LEDStrip LEDStripObjct;

#endif

