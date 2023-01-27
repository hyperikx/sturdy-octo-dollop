#include <Arduino.h>
#include <servos.hpp>

void setup() {
    //start serial for debug
    Serial.begin(115200);
    delay(1000);
    Serial.println("===== ROBOT SETUP =====");
    pinMode(LED_BUILTIN, OUTPUT);
    servos_init();
    Serial.println("===== SETUP END =====");
}

void loop() {
    servos_loop();
}
