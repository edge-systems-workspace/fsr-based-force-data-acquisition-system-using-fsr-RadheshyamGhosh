#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Radheshyam Ghosh
 * @date 2026-01-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int value =0;

void setup() {

    Serial.begin(9600);
    pinMode(A0,INPUT);

}

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
