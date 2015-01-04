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

