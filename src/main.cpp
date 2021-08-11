#include <Arduino.h>

uint8_t relaxaPai = 0;

struct _led{
    uint_fast8_t uga;
    uint_fast8_t buga;
} ledBoi;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
