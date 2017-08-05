#include "hw_config.h"
#include "settings.h"


void setup() {
  // init pins
  setupPins()
}

void setupPins() {

    pinMode(PIN_BUZZER, OUTPUT);
    pinMode(PIN_BUTTON_UP, INPUT_PULLUP);
    pinMode(PIN_BUTTON_MODE, INPUT_PULLUP);
    pinMode(PIN_BUTTON_DOWN, INPUT_PULLUP);
    pinMode(PIN_BUTTON_B0, INPUT_PULLUP);
    pinMode(PIN_BUTTON_B1, INPUT_PULLUP);
    pinMode(PIN_BUTTON_B2, INPUT_PULLUP);

    pinMode(PIN_LED_A,OUTPUT);
    #ifdef USE_DIVERSITY
        pinMode(PIN_LED_B,OUTPUT);
    #endif

    pinMode(PIN_RSSI_A, INPUT_PULLUP);
    #ifdef USE_DIVERSITY
        pinMode(PIN_RSSI_B, INPUT_PULLUP);
    #endif

    pinMode(PIN_SW, OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:

}
