#include "./led.h"

void LED::bootUp(void) {
    const int Period = 1000;

    for (int i = 0; i < 255; i++) {
        setBrightness255(i);
        fill(White);
        show();

        delay(Period / 255);
    }

    delay(100);

    for (int i = 0; i < NumOfLEDs / 2; i++) {
        // setPixelV
    }
}

/**
 * これ以降はハードウェア依存なので整備不要
 */

LED::LED(Adafruit_NeoPixel *leftPtr, Adafruit_NeoPixel *rightPtr) {
    _ptr[0] = leftPtr;
    _ptr[1] = rightPtr;

    begin();
}

void LED::begin(void) {
    for (int i = 0; i < 2; i++) {
        _ptr[i]->begin();
        _ptr[i]->setBrightness(0);
        _ptr[i]->show();
    }
}

void LED::setBrightness255(int _brightness255) {
    for (int i = 0; i < 2; i++) {
        _ptr[0]->setBrightness((int)(_brightness255 * Brightness));
    }
}

void LED::fill(uint32_t _color) {
    for (int i = 0; i < 2; i++) {
        _ptr[i]->fill(_color);
    }
}

void LED::show(void) {
    for (int i = 0; i < 2; i++) {
        _ptr[i]->show();
    }
}

void LED::setPixelColor(int pixel, uint32_t color) {
    for (int i = 0; i < 2; i++) {
        _ptr[i]->setPixelColor(pixel, color);
    }
}