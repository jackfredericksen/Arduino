int const potPin = A0;
int potVal;

void setup() {

    Serial.begin(9600);
    pinMode(5, OUTPUT);
    
}

void loop() {
    digitalWrite(5, LOW);
    potVal = analogRead(potPin);
    Serial.print("potVal: ");
    Serial.print(potVal);
    int level = map(potVal, 0, 1023, 0, 100);
    if(level< 75){
      digitalWrite(5, LOW);
    }else if(level >= 75){
      digitalWrite(5, HIGH);
    }
    Serial.print(", Level: ");
    Serial.println(level);
    delay(1);
}
