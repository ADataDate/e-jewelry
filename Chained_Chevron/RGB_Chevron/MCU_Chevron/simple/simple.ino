// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN     4       

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      15

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 300; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
  
}


void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

    pixels.setPixelColor(7, pixels.Color(185,66,244)); 
    delay(delayval);
    pixels.show();

 pixels.setPixelColor(1, pixels.Color(185,66,244)); 
    delay(delayval);
    pixels.show();
    

    
    pixels.setPixelColor(8, pixels.Color(185,66,244));
    delay(delayval);
    pixels.show();

    pixels.setPixelColor(13, pixels.Color(185,66,244)); 
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(12, pixels.Color(185,66,244)); 
    delay(delayval);
    pixels.setPixelColor(11, pixels.Color(185,66,244)); 
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(6, pixels.Color(212, 4, 234));
    delay(delayval);
    pixels.show();

    pixels.setPixelColor(2, pixels.Color(212, 4, 234)); 
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(3, pixels.Color(212, 4, 234));   
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(9, pixels.Color(239, 4, 212)); 
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(14, pixels.Color(239, 4, 212));
    delay(delayval);
    pixels.show();

    
    
    pixels.setPixelColor(10, pixels.Color(239, 4, 212));
    delay(delayval);
    pixels.show();

    
    pixels.setPixelColor(5, pixels.Color(239, 4, 212));
    delay(delayval);
    pixels.show();

    pixels.setPixelColor(0, pixels.Color(239, 4, 212));
    delay(delayval);
    pixels.show();

    pixels.setPixelColor(4, pixels.Color(239, 4, 212));
    delay(delayval);
    pixels.show();

for (int i=0; i<15;i++)
{
  pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  delay(250);
}
    

}
