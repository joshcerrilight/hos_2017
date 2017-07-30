#include "Adafruit_WS2801.h"
//#include "SPI.h" // Comment out this line if using Trinket or Gemma
#ifdef __AVR_ATtiny85__
 #include <avr/power.h>
#endif

uint8_t dataPin  = 1;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = 2;    // Green wire on Adafruit Pixels

Adafruit_WS2801 strip = Adafruit_WS2801(32, dataPin, clockPin);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
#endif

  strip.begin();

  strip.show();
}


void loop() {
  
  colorWipe(30);

}

void colorWipe(uint8_t t) {
  int i;
  
  for (i=0; i < strip.numPixels(); i=random(1,32)) {
      strip.setPixelColor(i, 0,random(0,80),random(120,255));
      strip.show();
      delay(t);
  }
}

