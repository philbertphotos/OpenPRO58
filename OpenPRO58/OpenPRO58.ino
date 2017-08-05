#include "settings.h"

#include "hw_config.h"
#include "ui.h"
#include "buttons.h"


static void globalMenuButtonHandler(
    Button button,
    Buttons::PressType pressType
);

void setup() {
  // init pins
  setupPins();
  Ui::setup();
  //TODO EEPROM readout
  
}

void setupPins() {

    pinMode(PIN_BUZZER, OUTPUT);
    pinMode(PIN_BUTTON_UP, INPUT_PULLUP);
    pinMode(PIN_BUTTON_MODE, INPUT_PULLUP);
    pinMode(PIN_BUTTON_DOWN, INPUT_PULLUP);
    pinMode(PIN_BUTTON_EB0, INPUT_PULLUP);
    pinMode(PIN_BUTTON_EB1, INPUT_PULLUP);
    pinMode(PIN_BUTTON_EB2, INPUT_PULLUP);

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

static void globalMenuButtonHandler(
    Button button,
    Buttons::PressType pressType
) {
 /*   if (
        StateMachine::currentState != StateMachine::State::MENU &&
        button == Button::MODE &&
        pressType == Buttons::PressType::HOLDING
    ) {
        StateMachine::switchState(StateMachine::State::MENU);
    }
    */
}

