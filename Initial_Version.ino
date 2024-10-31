#include <ESP32Servo.h> // Librería para controlar servos en ESP32

// Instanciamos los servos
Servo servo_A1;
Servo servo_A2;
Servo servo_A3;

// Pines a los que están conectados los servos
int pinServo_A1 = 15;
int pinServo_A2 = 18;
int pinServo_A3 = 19;

// Variables para las posiciones iniciales de los servos
int pos01 = 0;
int pos02 = 0;
int pos03 = 0;

void setup() {
  // Inicializamos los servos especificando los límites de pulso (500 a 2500 microsegundos)
  servo_A1.attach(pinServo_A1, 500, 2500);
  servo_A2.attach(pinServo_A2, 500, 2500);
  servo_A3.attach(pinServo_A3, 500, 2500);
}

void loop() {
  // Movimiento del servo_A1 de 0 a 180 grados
  for (pos01 = 0; pos01 <= 180; pos01++) {
    servo_A1.write(pos01);
    delay(30);  // Esperamos 30 milisegundos entre cada cambio de posición
  }
  
  // Movimiento del servo_A1 de 180 a 0 grados
  for (pos01 = 180; pos01 >= 0; pos01--) {
    servo_A1.write(pos01);
    delay(30);
  }

  // Movimiento del servo_A2 de 90 a 180 grados
  for (pos02 = 90; pos02 <= 180; pos02++) {
    servo_A2.write(pos02);
    delay(30);
  }
  
  // Movimiento del servo_A2 de 180 a 90 grados
  for (pos02 = 180; pos02 >= 90; pos02--) {
    servo_A2.write(pos02);
    delay(30);
  }

  // Movimiento del servo_A3 de 90 a 180 grados
  for (pos03 = 90; pos03 <= 180; pos03++) {
    servo_A3.write(pos03);
    delay(30);
  }
  
  // Movimiento del servo_A3 de 180 a 90 grados
  for (pos03 = 180; pos03 >= 90; pos03--) {
    servo_A3.write(pos03);
    delay(30);
  }
}
