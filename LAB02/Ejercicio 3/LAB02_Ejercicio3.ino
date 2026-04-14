Codigo 3: const int BOTON_A = 2;
const int BOTON_B = 3;
const int LED_VERDE = 8;
const int LED_ROJO = 9;

void setup() {
  pinMode(BOTON_A, INPUT_PULLUP);
  pinMode(BOTON_B, INPUT_PULLUP);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);

  Serial.begin(9600);
  Serial.println("Practica de pulsadores y LEDs");
}

void loop() {
  int estadoA = digitalRead(BOTON_A);
  int estadoB = digitalRead(BOTON_B);

  if (estadoA == LOW) {
    digitalWrite(LED_VERDE, HIGH);
    Serial.println("Boton A presionado -> LED verde encendido");
  } else {
    digitalWrite(LED_VERDE, LOW);
  }

  if (estadoB == LOW) {
    digitalWrite(LED_ROJO, HIGH);
    Serial.println("Boton B presionado -> LED rojo encendido");
  } else {
    digitalWrite(LED_ROJO, LOW);
  }

  delay(100);
}