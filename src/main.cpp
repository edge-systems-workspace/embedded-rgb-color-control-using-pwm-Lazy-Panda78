#include <Arduino.h>

/**
 * @file main.cpp
 * @brief RGB LED Project
 * @author Lazy-Panda78
 * @date 2026-02-19
 */

int RED_pin = 9;
int GREEN_pin = 10;
int BLUE_pin = 11;

void setup() {
    Serial.begin(9600);

    pinMode(RED_pin, OUTPUT);
    pinMode(GREEN_pin, OUTPUT);
    pinMode(BLUE_pin, OUTPUT);

    Serial.println("RGB LED Initialized!");
}

void loop() {

    digitalWrite(RED_pin, HIGH);
    delay(1000);

    digitalWrite(RED_pin, LOW);
    delay(1000);
}
