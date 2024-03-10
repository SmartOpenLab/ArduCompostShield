#define SW1 2
#define SW2 3

void setup() {
  Serial.begin(9600);
  pinMode(SW1, INPUT);
}

void loop() {
  if (!digitalRead(SW1))
    Serial.println("¡Estoy pulsado!");
  else
    Serial.println("Pulsame!");
}