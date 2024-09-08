#include <Servo.h>
#include <RCSwitch.h>
Servo servo;
RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600); //zavedenie monitoru
  mySwitch.enableReceive(0); //pouzitie pinu 2 na prijem // prerusovac (interrupt) 0 je na pine 2
  servo.attach(3); //pouzitie pinu 3 na pripojenie serva
  servo.write(95);//poloha zapnutia
}

void loop() {
  if (mySwitch.available()) {
    Serial.println(mySwitch.getReceivedValue()); //prijatie hodnoty
    servo.write(mySwitch.getReceivedValue()); //posun serva
    mySwitch.resetAvailable();
  }
}
