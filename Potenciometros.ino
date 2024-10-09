

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
  Serial.print ("Posicao x: ");
  Serial.print (p1);
  Serial.print ("  Posicao y: ");
  Serial.println (p2);
  delay (1000);
}