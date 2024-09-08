#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600); //zavedenie monitoru
  mySwitch.enableTransmit(10); //pouzitie pinu 10 na vysielanie
  pinMode(2,INPUT); //nastavenie pinu 2 na vstup tlacidla
  pinMode(4,INPUT); //nastavenie pinu 4 na vstup tlacidla
  
}

void loop() {
  int servo_value=0; //hodnota polohy serva

// podmienka ak je stlacene tlacidlo na pine 2 
if(digitalRead(2)==LOW){
servo_value=1;  //poloha serva
  mySwitch.send(servo_value, 30); //poslanie hodnoty
  Serial.println(0); //zobrazenie polohy
}

// podmienka ak je stlacene tlacidlo na pine 4 
if(digitalRead(4)==LOW){
servo_value=180;  //poloha serva
  mySwitch.send(servo_value, 30); //poslanie hodnoty
  Serial.println(180); //zobrazenie polohy
}}
