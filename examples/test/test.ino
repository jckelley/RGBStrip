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
#include "LEDStrip.h"

//Create a LEDStrip object and set the pins that it is connected to.
//All Pins go RED-GREEN-BLUE, so in this case:
//RED = 9, GREEN = 10, BLUE = 11
LEDStrip strip = LEDStrip(9, 10, 11);
void setup()
{
	Serial.begin(9600);
  
	//You can do instant color changes by using the 'setColor' function
	strip.setColor(LED_BLUE); 
}

void loop()
{

  //Many colors are already pre-defined in the RGBStrip Library. You can
  //fade to them using the 'fadeTo' function. The 2nd argument is the 
  //Fadespeed. You can experiment by making it fade fast and slow

  	delay(1000);
  	strip.fadeTo(LED_BLACK,10);
  	delay(1000);
  	strip.fadeTo(LED_WHITE,10);
  	delay(1000);
  	strip.fadeTo(LED_RED,10);
  	delay(1000);
  	strip.fadeTo(LED_LIME,10);
  	delay(1000);
  	strip.fadeTo(LED_BLUE,10);
  	delay(1000);
  	strip.fadeTo(LED_YELLOW,10);
  	delay(1000);
  	strip.fadeTo(LED_CYAN,10);
  	delay(1000);
  	strip.fadeTo(LED_MAGENTA,10);
  	delay(1000);
  	strip.fadeTo(LED_SILVER,10);
  	delay(1000);
  	strip.fadeTo(LED_GRAY,10);
  	delay(1000);
  	strip.fadeTo(LED_MAROON,10);
  	delay(1000);
  	strip.fadeTo(LED_OLIVE,10);
  	delay(1000);
  	strip.fadeTo(LED_GREEN,10);
  	delay(1000);
  	strip.fadeTo(LED_PURPLE,10);
  	delay(1000);
  	strip.fadeTo(LED_TEAL,10);
  	delay(1000);
  	strip.fadeTo(LED_NAVY,10);

	

}
