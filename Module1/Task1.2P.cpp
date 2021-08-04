int movement = 0;

void setup()
{
  pinMode(3, INPUT);

  pinMode(2, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(3), interLED, RISING);
  
  Serial.begin(9600);
}

void interLED()
{
    movement = digitalRead(3);

    if (movement == HIGH) {
        Serial.println("Movement Detected!");
        digitalWrite(2, HIGH);
    } else {
     	digitalWrite(2, LOW);
    }
  
}

void loop()
{
}
