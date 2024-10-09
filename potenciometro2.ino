

int p1 = 0;
int p2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}


void loop()
{  
  p1 = analogRead (A0);
  p2 = analogRead (A1);
  
  if (p1<500 && p2<500) {
  Serial.println ("Para esquerda e Para cima");
  } else if (p1>500 && p2>500) {
  Serial.println ("Para direita e Para baixo");
  delay (1000);
}
}