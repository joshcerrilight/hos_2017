#include "SPI.h"
#include "Adafruit_WS2801.h"

// Choose which 2 pins you will use for output.
// Can be any valid output pins.
// The colors of the wires may be totally different so
// BE SURE TO CHECK YOUR PIXELS TO SEE WHICH WIRES TO USE!
uint8_t dataPin  = 2;    // Yellow wire on Adafruit Pixels
uint8_t clockPin = 3;    // Green wire on Adafruit Pixels

// Don't forget to connect the ground wire to Arduino ground,
// and the +5V wire to a +5V supply

// Set the first variable to the NUMBER of pixels in a row and
// the second value to number of pixels in a column.
Adafruit_WS2801 strip = Adafruit_WS2801((uint16_t)1, (uint16_t)21, dataPin, clockPin);

void setup() {
    
  strip.begin();

  // Update LED contents, to start they are all 'off'
  strip.show();
}


void loop() {
  // Some example procedures showing how to display to the pixels
  drawX(21, 50);
}

void drawX(uint8_t w, uint16_t wait) {
  uint16_t x,y,z;
//  for (red=0; red=random(120,250));
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
