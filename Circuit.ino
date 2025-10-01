// C++ code
//
void setup()
{
 pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  tone(7, 350);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  noTone(7);
  delay(1000);
}
