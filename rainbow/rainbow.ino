#include <FastLED.h>

#define DATA_PIN     3
#define NUM_LEDS    50
#define BRIGHTNESS  128
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness( 255 );
  int i;
  for (i = 0; i < 50; i++)
  {
    if(i<26) leds[i] = CRGB(250-10*i, 10*i, 0);
    else leds[i] = CRGB(0,250- 10*i, 10*i);
  }
}

void loop() {
 
FastLED.show();
}
