#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @details
 * Controls an RGB LED using digital ON/OFF and analog PWM brightness control.
 * Demonstrates digital blink and PWM color cycling.
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

    // -------- DIGITAL MODE --------
    digitalWrite(RED_pin, HIGH);
    delay(1000);

    digitalWrite(RED_pin, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------
    analogWrite(RED_pin, 255);
    analogWrite(GREEN_pin, 0);
    analogWrite(BLUE_pin, 0);
    delay(1000);

    analogWrite(RED_pin, 0);
    analogWrite(GREEN_pin, 255);
    analogWrite(BLUE_pin, 0);
    delay(1000);

    analogWrite(RED_pin, 0);
    analogWrite(GREEN_pin, 0);
    analogWrite(BLUE_pin, 255);
    delay(1000);

    delay(500);
}
