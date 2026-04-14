const int PIN_LDR = A1;
const int PIN_LED = 9;
const int PIN_BUZZER = 6;

void setup() {
  Serial.begin(9600);
  Serial.println("LDR_raw\tLuz%\tEstado");
}

void loop() {
  int lectura_ldr = analogRead(PIN_LDR);

  // Convertir lectura ADC a porcentaje de luz
  int luz_pct = map(lectura_ldr, 0, 1023, 0, 100);

  // LED encendido más fuerte cuando hay menos luz
  int brillo_led = map(luz_pct, 0, 100, 255, 0);
  analogWrite(PIN_LED, brillo_led);

  String estado;
  if (luz_pct < 20) {
    estado = "MUY OSCURO - ALARMA";
    tone(PIN_BUZZER, 1000, 100);
  } else if (luz_pct < 50) {
    estado = "Penumbra";
  } else {
    estado = "Iluminado";
  }

  Serial.print(lectura_ldr);
  Serial.print("\t");
  Serial.print(luz_pct);
  Serial.print("\t");
  Serial.println(estado);

  delay(200);
}
