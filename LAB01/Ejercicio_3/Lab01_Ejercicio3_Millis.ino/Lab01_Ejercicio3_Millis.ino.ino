const int PIN_LED = 13;
int contador = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Ejercicio 3 ===");
  Serial.println("Formato: [#N] t=XXXX ms LED -> ESTADO");
}

void loop() {
  contador++;

  digitalWrite(PIN_LED, HIGH);
  Serial.print("[#");
  Serial.print(contador);
  Serial.print("] t=");
  Serial.print(millis());
  Serial.println(" ms LED -> ENCENDIDO");
  delay(500);

  digitalWrite(PIN_LED, LOW);
  Serial.print("[#");
  Serial.print(contador);
  Serial.print("] t=");
  Serial.print(millis());
  Serial.println(" ms LED -> APAGADO");
  delay(500);
}
