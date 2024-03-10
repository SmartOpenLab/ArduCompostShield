//LEDs azul y rojo
#define LED1 13
#define LED2 12

void setup() {
  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED1, LOW);  //Apaga el LED1 (AZUL)
  delay(500);

  digitalWrite(LED1, HIGH);  //Apaga el LED1 (AZUL)
  delay(500);
}