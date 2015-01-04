RGBStrip Library
========

This simple C++ Library is meant to be used with the Arduino UNO and the various RGB LED Lighting Strips available on the market today. It allows for simple set-up of the RGB strip and easy ways to set colors and fading transitions. 

Look how easy it is to use:

    LEDStrip strip = LEDStrip(9, 10, 11);
    strip.setColor(LED_BLUE);

Features
--------

- Allows you to instantly set up RGB Strip and set colors using pre-defined LED Values
- Easy to use Fade function allows you to fade from color to color

Installation
------------

Simply download the following files and added them to your project. Then, add the following line to the top of your main .ino file.

- LEDStrip.h
- LEDStrip.cpp
- color.h
    

    #include "LEDStrip.h"


Using it
----------
The test.ino file supplied gives some great (and virtually all) examples of how to use the library. Please reference that file, and e-mail me if you have any questions.

Contribute
----------

- Issue Tracker: https://github.com/jckelley/RGBStrip/issues
- Source Code: https://github.com/jckelley/RGBStrip

Support
-------

I made this as a very small side-project one night because I couldn't find other something as simple and basic as I wanted. Need help with some of it or want to improve it somehow? Fork it and go ahead and shoot me an e-mail. 
joekelley2028 (at) gmail.com

License
-------

The project is licensed under the MIT license.