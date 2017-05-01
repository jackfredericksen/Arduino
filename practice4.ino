const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;
const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(sensorPin, INPUT);
  
}

void loop() {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
    int sensorVal = analogRead(sensorPin);
    Serial.print("Sensor Value: ");
    Serial.print(sensorVal);
    float voltage =(sensorVal/1024.0) * 5.0;
    Serial.print(", Volts: ");
    Serial.print(voltage);
    float temp = (voltage - .5) * 100;
    Serial.print(", Temperature: ");
    Serial.print(temp);
    Serial.print("\n");
    if(temp < baselineTemp + 4){
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }else if(temp >= baselineTemp + 4 && temp <= baselineTemp + 6){
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }else if(temp >= baselineTemp + 6){
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
    delay(500);
}
