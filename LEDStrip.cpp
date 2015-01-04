// 
// 
// 

#include "LEDStrip.h"


LEDStrip::LEDStrip(int rPin, int gPin, int bPin)
{
	
	pinRGB[0] = rPin;
	pinRGB[1] = gPin;
	pinRGB[2] = bPin;

	pinMode(pinRGB[0], OUTPUT);
	pinMode(pinRGB[1], OUTPUT);
	pinMode(pinRGB[2], OUTPUT);

}

void LEDStrip::init(int r, int g, int b)
{


}
int* getColor(LED_COLOR c, int p[])
{
	switch (c)
	{
		case LED_RED:
		p[0] = 255;
		p[1] = 0;
		p[2] = 0;
		break;
		case LED_GREEN:
		p[0] = 0;
		p[1] = 128;
		p[2] = 0;
		
		break;
		case LED_BLUE:
		p[0] = 0;
		p[1] = 0;
		p[2] = 255;
		
		break;
		case LED_BLACK:
		p[0] = 0;
		p[1] = 0;
		p[2] = 0;
		
		break;
		case LED_WHITE:
		
		p[0] = 255;
		p[1] = 255;
		p[2] = 255;
	
		break;
		case LED_LIME:
		p[0] = 0;
		p[1] = 255;
		p[2] = 0;
		
		break;
		case LED_YELLOW:
		p[0] = 255;
		p[1] = 255;
		p[2] = 0;
	
		break;
		case LED_CYAN:
		p[0] = 0;
		p[1] = 255;
		p[2] = 255;
		break;
		case LED_MAGENTA:
		p[0] = 255;
		p[1] = 0;
		p[2] = 255;
		break;
		case LED_SILVER:
		p[0] = 192;
		p[1] = 0;
		p[2] = 192;
		break;
		case LED_GRAY:
		p[0] = 128;
		p[1] = 128;
		p[2] = 128;
		break;
		case LED_MAROON:
		p[0] = 128;
		p[1] = 0;
		p[2] = 0;
		break;
		case LED_OLIVE:
		p[0] = 128;
		p[1] = 128;
		p[2] = 0;
		break;
		case LED_PURPLE:
		p[0] = 128;
		p[1] = 0;
		p[2] = 128;
		break;
		case LED_TEAL:
		p[0] = 0;
		p[1] = 128;
		p[2] = 128;
		break;
		case LED_NAVY:
		p[0] = 0;
		p[1] = 0;
		p[2] = 128;
		break;
		default:
		break;

		return p;
	} 
}
void LEDStrip::setColor(LED_COLOR c)
{
	int rgbArray[3];
	getColor(c,rgbArray);
	setRGB(rgbArray[0], rgbArray[1], rgbArray[2]);
}
void LEDStrip::setRGB(int r, int g, int b)
{
	curRGB[0] = r;
	curRGB[1] = g;
	curRGB[2] = b;
	
	analogWrite(pinRGB[0], curRGB[0]);
	analogWrite(pinRGB[1], curRGB[1]);
	analogWrite(pinRGB[2], curRGB[2]);
}
void LEDStrip::fadeTo(LED_COLOR c, float fadeSpeed)
{
	int _R, _G, _B;
	int newColor[3];
	getColor(c,newColor);
	_R = newColor[0];
	_G = newColor[1];
	_B = newColor[2];


	
	int newR = curRGB[0];
	int newG = curRGB[1];
	int newB = curRGB[2];
	


	while (_R != curRGB[0] || _G != curRGB[1] || _B != curRGB[2])
	{
		if(_R > curRGB[0])
		{
			newR++;
		}
		else if(_R < curRGB[0])
		{
			newR--;
		}

		if(_G > curRGB[1])
		{
			newG++;
		}
		else if(_G < curRGB[1])
		{
			newG--;
		}
		
		if(_B > curRGB[2])
		{
			newB++;
		}
		else if(_B < curRGB[2])
		{
			newB--;
		}


		setRGB(newR, newG, newB);
		delay(fadeSpeed);
	}

}



