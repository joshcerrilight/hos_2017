#include "Adafruit_WS2801.h"
#include "SPI.h" // Comment out this line if using Trinket or Gemma
//#ifdef __AVR_ATtiny85__
// #include <avr/power.h>
//#endif

uint8_t dataPin  = 2;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = 3;    // Green wire on Adafruit Pixels

Adafruit_WS2801 strip = Adafruit_WS2801(21, dataPin, clockPin);

void setup() {
//#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
//  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
//#endif

  strip.begin();

  strip.show();
}


void loop() {
  
  colorWipe(Color(255, 0, 0));

}

void colorWipe(uint32_t c) {
  int i;
  
  for (i=0; i < strip.numPixels(); i=random(1,21)) {
      strip.setPixelColor(i, random(120,255),random(0,80),0);
      strip.show();
      delay(30);
  }
}

/* Helper functions */

// Create a 24 bit color value from R,G,B
uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}

