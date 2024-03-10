//Sensor de Luz, LDR
#define LDR A1

int intensidadLuz;

void setup() {
  Serial.begin(9600);

  pinMode(LDR, INPUT);
}

void loop() {
  /******** EJEMPLO Luminosidad/LDR ***********/
  Serial.print("Valor del LDR: ");
  intensidadLuz = analogRead(LDR);
  Serial.println(intensidadLuz);

  delay(1000);
}