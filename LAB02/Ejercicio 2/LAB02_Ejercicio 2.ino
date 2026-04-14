Codigo 2: const int PIN_BOTON = 2;
const int PIN_LED = 13;
const unsigned long DEBOUNCE_MS = 20;

int ultimo_estado = HIGH;
int estado_estable = HIGH;
unsigned long t_cambio = 0;
int conteo = 0;

void setup() {
  pinMode(PIN_BOTON, INPUT_PULLUP);
    pinMode(PIN_LED, OUTPUT);
      Serial.begin(9600);
        Serial.println("Lab 02 - Ejercicio 2");
        }

        void loop() {
          int lectura = digitalRead(PIN_BOTON);

            if (lectura != ultimo_estado) {
                t_cambio = millis();
                    ultimo_estado = lectura;
                      }

                        if ((millis() - t_cambio) > DEBOUNCE_MS) {
                            if (lectura != estado_estable) {
                                  estado_estable = lectura;

                                        if (estado_estable == LOW) {
                                                conteo++;

                                                        Serial.print("Pulsacion #");
                                                                Serial.println(conteo);

                                                                        for (int i = 0; i < conteo; i++) {
                                                                                  digitalWrite(PIN_LED, HIGH);
                                                                                            delay(300);
                                                                                                      digitalWrite(PIN_LED, LOW);
                                                                                                                delay(300);
                                                                                                                        }
                                                                                                                              }
                                                                                                                                  }
                                                                                                                                    }
                                                                                                                                    }