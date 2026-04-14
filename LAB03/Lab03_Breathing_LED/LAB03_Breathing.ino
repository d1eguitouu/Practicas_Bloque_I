#include <math.h>

const int PIN_LED = 9;
float angulo = 0.0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  float seno = (sin(angulo) + 1.0) / 2.0;   // 0.0 a 1.0
  int brillo = (int)(seno * 255);           // 0 a 255

  analogWrite(PIN_LED, brillo);

  angulo += 0.03;
  if (angulo > 2 * PI) {
    angulo = 0;
  }

  delay(40);
}