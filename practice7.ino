#include <Servo.h>
Servo myServo;
int const photoPin = A0;
int angle;
int photoVal;
void setup() {

    myServo.attach(9);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin);
  angle = map(photoVal, 0, 255, 0, 179);
  Serial.print("Input: ");
  Serial.print(photoVal);
  Serial.print(" Angle: ");
  Serial.println(angle);
  myServo.write(angle);
  
  delay(20);
  
}
