void setup() {
  // put your setup code here, to run once:
  String firstName;
  String lastName;

  Serial.begin(9600);
  while (!Serial){
    //wait for connection
  }

  Serial.println("Hello, please enter your first name: ");
  firstName = Serial.readString();

  delay(3000);
  Serial.println("Now enter your last name: ");

  lastName = Serial.readString();
 
  delay(3000);

  Serial.println("Hello " + firstName + " " + lastName);
}

void loop() {
  // put your main code here, to run repeatedly:

}
