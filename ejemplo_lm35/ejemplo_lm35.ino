//Sensor de temperatura 1
#define LM35 A2  //ACCURATE TEMP

float temperatura;

void setup() {
  Serial.begin(9600);

  pinMode(LM35, INPUT);
}

void loop() {

  /******** EJEMPLO TEMPERATURA ANALÓGICA ****/
  temperatura = (5.0 * analogRead(LM35) * 100.0) / 1024; //Convertir de valores de voltaje a valor numérico
  Serial.println(temperatura);  
  /********************************************/

  delay(1000);
}