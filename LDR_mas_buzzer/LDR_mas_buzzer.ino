//Sensor de Luz, LDR
#define LDR A1

//Buzzer, motor vibrador
#define BUZZ 5

int intensidadLuz;

void setup() {
  Serial.begin(9600);

  pinMode(LDR, INPUT);
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  intensidadLuz = analogRead(LDR);
  Serial.println(intensidadLuz);
  if (intensidadLuz > 100)
    tone(BUZZ, 58, 40);
  delay(1000);
}