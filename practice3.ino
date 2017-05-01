const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  // put your main code here, to run repeatedly:
    digitalWrite(9, HIGH);
    delay(5000);
    digitalWrite(9,LOW);
    digitalWrite(10, HIGH);
    delay(5000);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(5000);
    digitalWrite(11, LOW);
   
}
