//Buzzer, motor vibrador
#define BUZZ 5

void setup() {
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  tone(BUZZ, 58, 40);
  delay(1000);
}