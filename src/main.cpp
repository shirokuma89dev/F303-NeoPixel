#include <Arduino.h>
#include "./led.h"

Adafruit_NeoPixel ledLeft(LED::NumOfLEDs, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledRight(LED::NumOfLEDs, 3, NEO_GRB + NEO_KHZ800);
LED led(&ledLeft, &ledRight);

void setup() {
}

void loop() {
    // put your main code here, to run repeatedly:
}