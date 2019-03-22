/*
 * Name:Roynuka Nukanuka
 * Course:Embedded Systems
 * Date:22/03/19
 * Resource: https://docs.wixstatic.com/ugd/22a975_8c6883be82844b05a6b4e4db55373c73.pdf
 * Resource: https://www.techexult.com/project-lessn 
 */

/*
 * Original Code Start
 */
int DO = 2; //Pin for Digital Output - DO
int AO = A0; // Pin for Analog Output - AO
int soundThreshold = 540; //Set minimum sound level
int soundThreshold2 = 530; //Set minimum sound level
int soundThreshold3 = 520; //Set minimum sound level
int soundThreshold4 = 510; //Set minimum sound level
int soundThreshold5 = 500; //Set minimum sound level
int sensorValue = 0;

void setup()
{
  //Sets up all LED's connected to the allocated pins on the breadboard
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{
  sensorValue = analogRead(A0); //Read the analog value from sensor module A0
  Serial.print("Analog: ");
  Serial.print(sensorValue); //Print the analog value
  Serial.print(" ");
  Serial.print("Digital: ");
  Serial.println(digitalRead(DO)); //Reads the value from the digital pin on the sensor module D0

  /* Original Code
    if (sensorValue >= soundThreshold)
  { //Compare analog value with threshold
    //Lights up LED's
    digitalWrite(8, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(8, HIGH);
  }
  Original Code End
  */

  /*
   * Added Code by myself
   */
  if (sensorValue >= soundThreshold)
  { //Compare analog value with threshold
    //Lights up LED's
    digitalWrite(8, HIGH);
  }
  // if sound reaches a certain volume then LED lights will blink
  else if (sensorValue >=soundThreshold2)
  {
    digitalWrite(9, HIGH);
  }
  // if sound reaches a certain volume then LED lights will blink
   else if (sensorValue >=soundThreshold3)
  {
    digitalWrite(10, HIGH);
  }
  // if sound reaches a certain volume then LED lights will blink
  else if (sensorValue >=soundThreshold4)
  {
    digitalWrite(11, HIGH);
  }
  // if sound reaches a certain volume then LED lights will blink
   else if (sensorValue >=soundThreshold5)
  {
    digitalWrite(12, HIGH);
  }
else

  /*
   * Original Code
   */
  {
    //turns off LED's
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
}
