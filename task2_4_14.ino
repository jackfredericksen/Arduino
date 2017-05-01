void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    while(!Serial){
      
    }
    String temp;
    int a;
    int b;
    int c;
    
    
    Serial.println("What calculation would you like to perform (add = 1, sub = 2, mul = 3, div = 4): ");
    int calc = Serial.parseInt();
    delay(5000);
    Serial.println("Enter first number: ");
    a = Serial.parseInt();
    delay(2000);
    Serial.println("Enter second number: ");
    b = Serial.parseInt();
    delay(100);
    switch(calc){

        case 1:
            c = a + b;
            temp.concat(a);
            temp.concat("+");
            temp.concat(b);
            temp.concat("=");
            temp.concat(c);
            Serial.println(temp);
          break;
          
        case 2:
            c = a - b;
            temp.concat(a);
            temp.concat("-");
            temp.concat(b);
            temp.concat("=");
            temp.concat(c);
            Serial.println(temp);
          break;
          
        case 3:
            c = a * b;
            temp.concat(a);
            temp.concat("*");
            temp.concat(b);
            temp.concat("=");
            temp.concat(c);
            Serial.println(temp);
          break;
          
        case 4:
            c = a / b;
            temp.concat(a);
            temp.concat("/");
            temp.concat(b);
            temp.concat("=");
            temp.concat(c);
            Serial.println(temp);
          break;
      
    }
}

void loop() {
  // put your main code here, to run repeatedly:

}
