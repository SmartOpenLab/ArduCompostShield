#define LED1 13
#define LED2 12
#define LM35 A2

float temperatura;

void setup() {
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  pinMode(LM35, INPUT);
}

void loop() {
  temperatura = (5.0 * analogRead(LM35) * 100.0) / 1024;
  Serial.print(temperatura);
 
  if (temperatura<30) {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  Serial.println(" bajo");
  } else if (temperatura<35) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    Serial.println(" medio");
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    Serial.println(" alto");
  }

  delay(1000);
}