
#include "LEDStrip.h"


LEDStrip strip = LEDStrip(9, 10, 11);
void setup()
{
	Serial.begin(9600);
  /* add setup code here */
	
	strip.setColor(LED_BLUE);
}

void loop()
{

  /* add main program code here */

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
