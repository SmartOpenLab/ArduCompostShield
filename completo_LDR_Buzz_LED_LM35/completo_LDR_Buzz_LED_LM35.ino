//LEDs azul y rojo
#define LED1 13
#define LED2 12

//Sensor de temperatura 1
#define LM35 A2  //ACCURATE TEMP

//Sensor de Luz, LDR
#define LDR A1

//Buzzer, motor vibrador
#define BUZZ 5

int intensidadLuz;
float temperatura;

void setup() {
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  pinMode(LM35, INPUT);

  pinMode(LDR, INPUT);
  pinMode(BUZZ, OUTPUT);
}

void loop() {
  temperatura = (5.0 * analogRead(LM35) * 100.0) / 1024;
  Serial.print(temperatura);
 
  if (temperatura<30) {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  } else if (temperatura<35) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
  }

  intensidadLuz = analogRead(LDR);
  Serial.println(intensidadLuz);
  if (intensidadLuz > 100)
    tone(BUZZ, 58, 40);

  delay(1000);
}