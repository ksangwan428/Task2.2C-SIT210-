#include "morse.h"  // Include the Morse code library

// ---------------------------
// Blink my name in Morse Code
// ---------------------------

int led1 = 7;  // Define the pin for the LED

void blinkKARTIK(int pin) {
    // Blink 'KARTIK' in Morse Code
    blinkK(pin);  // Blink 'K'
    letterPause();  // Pause between letters
    blinkA(pin);  // Blink 'A'
    letterPause();  // Pause between letters
    blinkR(pin);  // Blink 'R'
    letterPause();  // Pause between letters
    blinkT(pin);  // Blink 'T'
    letterPause();  // Pause between letters
    blinkI(pin);  // Blink 'I'
    letterPause();  // Pause between letters
    blinkK(pin);  // Blink 'K'
}

void blinkSANGWAN(int pin) {
    // Blink 'SANGWAN' in Morse Code
    blinkS(pin);  // Blink 'S'
    letterPause();  // Pause between letters
    blinkA(pin);  // Blink 'A'
    letterPause();  // Pause between letters
    blinkN(pin);  // Blink 'N'
    letterPause();  // Pause between letters
    blinkG(pin);  // Blink 'G'
    letterPause();  // Pause between letters
    blinkW(pin);  // Blink 'W'
    letterPause();  // Pause between letters
    blinkA(pin);  // Blink 'A'
    letterPause();  // Pause between letters
    blinkN(pin);  // Blink 'N'
}

void setup() {
    pinMode(led1, OUTPUT);  // Set the LED pin as an output
}

void loop() {
    blinkKARTIK(led1);  // Blink 'KARTIK'
    wordPause();  // Pause between words

    // Blink 'SANGWAN' after 'KARTIK'
    blinkSANGWAN(led1);  // Blink 'SANGWAN'
    wordPause();  // Pause between words
}
