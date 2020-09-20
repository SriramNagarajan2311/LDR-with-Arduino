int ldr = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(ldr, INPUT);
}

void loop() 
{
  Serial.println(analogRead(A0));
  //Serial.println(digitalRead(ldr));
  delay(100);
}
