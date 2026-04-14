const int PIN_LED = 13;

void corto() {
  digitalWrite(PIN_LED, HIGH);
  delay(200);
  digitalWrite(PIN_LED, LOW);
  delay(200);
}

void largo() {
  digitalWrite(PIN_LED, HIGH);
  delay(600);
  digitalWrite(PIN_LED, LOW);
  delay(200);
}

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Ejercicio 2 ===");
  Serial.println("Patron SOS iniciado");
}

void loop() {
  // S = ...
  corto();
  corto();
  corto();

  // O = ---
  largo();
  largo();
  largo();

  // S = ...
  corto();
  corto();
  corto();

  Serial.println("SOS enviado");
  delay(2000);
}
