int DO = 2; //Pin for Digital Output - DO
int AO = A0; // Pin for Analog Output - AO
int soundThreshold = 523; //Set minimum sound level
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
  sensorvalue = analogRead(A0); //Read the analog value from sensor module A0
  Serial.print("Analog: ");
  Serial.print(sensorValue); //Print the analog value
  Serial.print(" ");
  Serial.print("Digital: ");
  Serial.println(digitalRead(DO)); //Reads the value from the digital pin on the sensor module D0
  if (sensoralue >= soundThreshold)
  { //Compare analog value with threshold
    //Lights up LED's
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
  }
else
  {
    //turns off LED's
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
}
