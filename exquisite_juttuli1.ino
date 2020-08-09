void setup()
{
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(7,1);
  digitalWrite(6,0);
  digitalWrite(5,1);
  digitalWrite(4,0);
  delay(900);
  digitalWrite(7,0);
  digitalWrite(6,1);
  digitalWrite(5,0);
  digitalWrite(4,1);
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}