#include "Adafruit_WS2801.h"
#ifdef __AVR_ATtiny85__
 #include <avr/power.h>
#endif
// Choose which 2 pins you will use for output.
// Can be any valid output pins.
// The colors of the wires may be totally different so
// BE SURE TO CHECK YOUR PIXELS TO SEE WHICH WIRES TO USE!
uint8_t dataPin  = 1;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = 2;    // Green wire on Adafruit Pixels

// Don't forget to connect the ground wire to Arduino ground,
// and the +5V wire to a +5V supply

// Set the first variable to the NUMBER of pixels in a row and
// the second value to number of pixels in a column.
Adafruit_WS2801 strip = Adafruit_WS2801((uint8_t)1, (uint8_t)21, dataPin, clockPin);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
#endif
   
  strip.begin();

  // Update LED contents, to start they are all 'off'
  strip.show();
}


void loop() {
  // Some example procedures showing how to display to the pixels
  drawX(21, 50);
}

void drawX(uint8_t w, uint8_t wait) {
  uint8_t x,y,z;
  for (x=0; x<w; x=random(0,21)) {
    if (x%2 == 1)
    {
      continue;
    }
    y=random(10,255);
    z=x+1;
    strip.setPixelColor(x, x, y, 0, 0);
    strip.setPixelColor(z, z, y, 0, 0);
    strip.show();
    delay(wait);
   
  }
}
