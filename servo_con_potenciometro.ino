// Incluimos la librería para Servo
#include <Servo.h>

Servo servoBase;//Asigno un nombre específico

void setup() {
   servoBase.attach(A1);//Pin a utilizar para servo
   servoBase.write(0);  //asigno 0 al servo motor
}

void loop() {
  
  int pot = analogRead(A5);//Pin del potenciometro
  //analgoRead entrega 0 para 0V y 1023 para 5V
  
  pot = map(pot, 0, 1023, 0, 180);

  servoBase.write(pot);
  delay(10);

 }
