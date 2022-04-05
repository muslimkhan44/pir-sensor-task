// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{

  int i= digitalRead(2);
  Serial.print(1);
  delay(1000);
}