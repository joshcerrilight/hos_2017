#include "Adafruit_WS2801.h"
#include "SPI.h"

uint8_t dataPin  = 2;
uint8_t clockPin = 3;

Adafruit_WS2801 strip = Adafruit_WS2801(21, dataPin, clockPin);

void setup() {

  strip.begin();

  strip.show();
}


void loop() {
  
  colorWipe(30);

}

void colorWipe(uint8_t wait) {
  int i;
  
  for (i=0; i < strip.numPixels(); i=random(0,21)) {
      strip.setPixelColor(i, random(120,255),random(0,80),0);
      strip.show();
      delay(wait);
  }
}

