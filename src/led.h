#ifndef _LED_H_
#define _LED_H_

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class LED {
   private:
    static const bool IsFieldRed = true;
    static const double Brightness = 0.5;

    const uint32_t White = Adafruit_NeoPixel::Color(255, 255, 255);
    const uint32_t Red = Adafruit_NeoPixel::Color(255, 0, 0);
    const uint32_t Blue = Adafruit_NeoPixel::Color(0, 70, 255);
    const uint32_t FieldColor = IsFieldRed ? Red : Blue;

    Adafruit_NeoPixel *_ptr[2];

   public:
    static const int NumOfLEDs = 20;

    LED(Adafruit_NeoPixel *leftPtr, Adafruit_NeoPixel *rightPtr);

    void begin(void);
    void setBrightness255(int brightness255);
    void fill(uint32_t color);
    void show(void);
    void setPixelColor(int pixel, uint32_t color);

    void bootUp(void);
};

#endif