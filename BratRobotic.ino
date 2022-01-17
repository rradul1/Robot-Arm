
#include <Servo.h>

int pot0 = A0;
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;

Servo ser0;
Servo ser1;
Servo ser2;
Servo ser3;

void setup() {
  ser0.attach(2);
  ser1.attach(3);
  ser2.attach(4);
  ser3.attach(5);
  Serial.begin(9600);
  ser0.write(0);
  delay(100);
  ser1.write(120);
  delay(100);
  ser2.write(115);
  delay(100);
  ser3.write(90);
  delay(100);
}

void loop() {
//lasare braj jos pentru priderea piesei
for(int pos=100;pos>=30;pos-=1){
ser1.write(pos);
Serial.println(pos);
delay(10);
}
//inchidere ghiara
for(int pos=90;pos<=160;pos+=2){
ser3.write(pos);
Serial.println(pos);
delay(10);
}
//ridicare piesa
for(int pos=30;pos<=100;pos+=1){
ser1.write(pos);
Serial.println(pos);
delay(10);
}

//aducerea piesei in locul dorit
for(int pos=0;pos<=180;pos+=1){
ser0.write(pos);
Serial.println(pos);
delay(10);
}
//lasare braj jos pentru priderea piesei
for(int pos=100;pos>=30;pos-=1){
  Serial.println(pos);
ser1.write(pos);
delay(10);
}

for(int pos=120;pos>=90;pos-=1){
ser2.write(pos);
Serial.println(pos);
delay(10);
}
//deschidere ghiara
for(int pos=180;pos>=90;pos+=-1){
ser3.write(pos);
Serial.println(pos);
delay(10);
}
//ridicare piesa
for(int pos=30;pos<=100;pos+=1){
  Serial.println(pos);
ser1.write(pos);
delay(10);
}
for(int pos=180;pos>=0;pos-=1){
ser0.write(pos);
Serial.println(pos);
delay(10);
}
ser2.write(115);
delay(100);
}
