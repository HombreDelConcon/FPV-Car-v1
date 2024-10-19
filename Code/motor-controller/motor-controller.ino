#include <Servo.h>

int p1 = 12;
int p2 = 11;
int p3 = 10;
int servPin = 16;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  servo.attach(servPin);
}

void loop() {
  servo.write(0);
  delay(2000);
  servo.write(18);
  delay(2000);
  servo.write(35);
  delay(2000);
}

void direction1(int speed){
  digitalWrite(p1, HIGH);
  digitalWrite(p2, LOW);

  analogWrite(p3, speed);
}

void direction2(int speed){
  digitalWrite(p2, HIGH);
  digitalWrite(p1, LOW);

  analogWrite(p3, speed);
}

// void serv0(int seconds){
//   long start = millis();

//   while (start + seconds * 1000 > millis()){
//     digitalWrite(anal1, LOW);
//     delay(19);
//     digitalWrite(anal1, HIGH);
//     delay(1);
//   }
// }

// void serv120(int seconds){
//   long start = millis();

//   while (start + seconds * 1000 > millis()){
//     digitalWrite(anal1, LOW);
//     delay(1);
//     digitalWrite(anal1, HIGH);
//     delay(19);
//   }
// }
