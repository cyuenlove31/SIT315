// C++ code
//

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(2, OUTPUT);
}

void loop()
{
  int aR0 = analogRead(A0);
  float voltage = aR0 * 5.0;
  voltage /= 1024.0;
  
  float tempC = (voltage - 0.5)* 100;

  if (tempC >= 21) {
    Serial.print("Temperature is at or above 21: ");
    Serial.println(tempC);
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  
  if (tempC < 21) {
    Serial.print("Temperature is below 15: ");
    Serial.println(tempC);
    digitalWrite(2, LOW);
  }
  delay(1000); // Delay a little bit to improve simulation performance
}
