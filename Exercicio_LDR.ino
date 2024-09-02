// C++ code
//

int LDR=0;
int LED=9;
void setup()
{
  pinMode (A0, INPUT);
  pinMode (LED, OUTPUT);
  Serial.begin (9600);
 
}

void loop()
{
  int LDR = analogRead (A0);  
  Serial.println (LDR);
  
  if (LDR<650) {
    digitalWrite (LED, HIGH);
    Serial.print("LED LIGADO ");
  } else {
      digitalWrite (LED, LOW);
    Serial.print ("LED DESLIGADO ");
      
    }
  delay (1000);
  }