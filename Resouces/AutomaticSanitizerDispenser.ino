int a;
void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  a = digitalRead(12);
  if (a==1){
    digitalWrite(7, HIGH);
  }
  else {
    digitalWrite(7, LOW);
  }
  Serial.println(a);
  delay(50);
}
