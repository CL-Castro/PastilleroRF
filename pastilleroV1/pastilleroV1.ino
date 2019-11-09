const int sensorPin12 = 12;
const int sensorPin11 = 11;
const int sensorPin10 = 10;
const int sensorPin9 = 9;
const int sensorPin8 = 8;
const int sensorPin7 = 7;
const int sensorPin6 = 6;
const int sensorPin5 = 5;
const int sensorPin4 = 4;
const int sensorPin3 = 3;
 
void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin12 , INPUT);  //definir pin como entrada
  pinMode(sensorPin11 , INPUT);
  pinMode(sensorPin10 , INPUT);
  pinMode(sensorPin9 , INPUT);
  pinMode(sensorPin8 , INPUT);
  pinMode(sensorPin7 , INPUT);
  pinMode(sensorPin6 , INPUT);
  pinMode(sensorPin5 , INPUT);
  pinMode(sensorPin4 , INPUT);
  pinMode(sensorPin3 , INPUT);
}
 
void loop(){
  int value12 = 0;
  int value11 = 0;
  int value10 = 0;
  int value9 = 0;
  int value8 = 0;
  int value7 = 0;
  int value6 = 0;
  int value5 = 0;
  int value4 = 0;
  int value3 = 0;
  value12 = digitalRead(sensorPin12 );  //lectura digital de pin
 value11 = digitalRead(sensorPin11 ); //
 value10 = digitalRead(sensorPin10 ); //
 value9 = digitalRead(sensorPin9 ); //
 value8 = digitalRead(sensorPin8 ); // 
 value7 = digitalRead(sensorPin7 ); //
 value6 = digitalRead(sensorPin6 ); //
 value5 = digitalRead(sensorPin5 ); //
 value4 = digitalRead(sensorPin4 ); //
 value3 = digitalRead(sensorPin3 ); //
  if (value12 == HIGH) {
      Serial.println("LuM;Pastillero Vacio");
  }
  if (value11 == HIGH) {
      Serial.println("MaM;Pastillero Vacio");
  }
  if (value10 == HIGH) {
      Serial.println("MiM;Pastillero Vacio");
  }
  if (value9 == HIGH) {
      Serial.println("JuM;Pastillero Vacio");
  }

  if (value8 == HIGH) {
      Serial.println("DoM;Pastillero Vacio");
  }
  if (value7 == HIGH) {
      Serial.println("LuN;Pastillero Vacio");
  }
  if (value6 == HIGH) {
      Serial.println("MaN;Pastillero Vacio");
  }
  if (value5 == HIGH) {
      Serial.println("MiN;Pastillero Vacio");
  }
  if (value4 == HIGH) {
      Serial.println("JuN;Pastillero Vacio");
  }
  if (value3 == HIGH) {
      Serial.println("DoN;Pastillero Vacio");
  }
  delay(10000);  
}
