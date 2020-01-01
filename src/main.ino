#include <Arduino.h>
#include <FastLED.h>

#define SPEAKER_PIN 5
#define LED_PIN 13
#define LED_COUNT 4

CRGB leds[LED_COUNT];

void setup()
{
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, LED_COUNT);
  allOff();
}

void loop()
{
  midi();
}

void allOff()
{
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  FastLED.show();
}

void allRed()
{
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Red;
    FastLED.show();
}

void midi()
{
    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 440, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 293, 450.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 440, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 329, 450.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 329, 225.0);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 329, 225.0);
    leds[1] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[0] = CRGB::Yellow;
    leds[2] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[1] = CRGB::Green;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[0] = CRGB::Yellow;
    leds[3] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 450.0);
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[2] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 659, 225.0);
    leds[0] = CRGB::Blue;
    leds[1] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[0] = CRGB::Yellow;
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 675.0);
    leds[2] = CRGB::Yellow;
    leds[3] = CRGB::Yellow;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 440, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 293, 450.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 293, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 440, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 329, 450.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(500.0);
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 329, 225.0);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 329, 225.0);
    leds[1] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[0] = CRGB::Yellow;
    leds[2] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[1] = CRGB::Green;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[0] = CRGB::Yellow;
    leds[3] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[2] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 587, 225.0);
    leds[2] = CRGB::Blue;
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    allRed();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 659, 225.0);
    leds[0] = CRGB::Green;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[0] = CRGB::Yellow;
    leds[3] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[1] = CRGB::Yellow;
    leds[2] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 391, 450.0);
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(500.0);

    tone(SPEAKER_PIN, 587, 450.0);
    leds[0] = CRGB::Red;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500.0);

    allOff();



    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(500.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 587, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 337.5);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(375.0);

    tone(SPEAKER_PIN, 440, 112.5);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(125.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Blue;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Yellow;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500.0);
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[1] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 523, 337.5);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(375.0);

    allOff();

    tone(SPEAKER_PIN, 523, 112.5);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(125.0);

    tone(SPEAKER_PIN, 523, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 112.5);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(125.0);

    allOff();

    tone(SPEAKER_PIN, 493, 112.5);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(125.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 450.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 587, 450.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(500.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Green;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 493, 225.0);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 587, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 391, 337.5);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(375.0);

    tone(SPEAKER_PIN, 440, 112.5);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(125.0);

    tone(SPEAKER_PIN, 493, 450.0);
    leds[0] = CRGB::Blue;
    leds[1] = CRGB::Green;
    leds[2] = CRGB::Yellow;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500.0);
    delay(500.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[1] = CRGB::Green;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 523, 337.5);
    leds[0] = CRGB::Red;
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(375.0);

    allOff();

    tone(SPEAKER_PIN, 523, 112.5);
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(125.0);

    tone(SPEAKER_PIN, 523, 225.0);
    leds[1] = CRGB::Yellow;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[2] = CRGB::Green;
    FastLED.show();
    delay(250.0);

    tone(SPEAKER_PIN, 493, 225.0);
    leds[3] = CRGB::Blue;
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 493, 112.5);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(125.0);

    allOff();

    tone(SPEAKER_PIN, 493, 112.5);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(125.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 587, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 523, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 440, 225.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(250.0);

    allOff();

    tone(SPEAKER_PIN, 391, 675.0);
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    leds[random(0, 4)].setRGB(random(0, 255), random(0, 255), random(0, 255));
    FastLED.show();
    delay(750.0);

    allOff();
}
