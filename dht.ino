#include<Dht.h>
#define Dht_apin A0

 long int CN1=9,IN1=10,IN2=11,en1=1;
float a,b;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 humidity and temperature sensor\n\n");
  delay(1000);
  pinMode(CN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  DHT.begin()
}

void loop() {
  // put your main code here, to run repeatedly:
  a = dHT.readTemperature();
  delay(1000);
  if(a>=30)
  {
    digitalWrite(en1, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(1000);
  }
  Serial.println("C",a);

  a = dHT.readHumidity();
  Serial.println(" %");
  delay(1000);
}
