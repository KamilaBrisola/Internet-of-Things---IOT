// C++ code
//

//BUZZER TOCAR UM PERÍODO DE 5 SEGUNDOS.
//INTERVALO DE MEIO SEGUNDO ENTRE UM TOQUE E OUTRO.
//PERIODO DE TOQUE É UM SEGUNDO.
//CADA REPETIÇÃO UMA NOTA DIFERENTE
//PARA CADA FREQUÊNCIA TEM QUE TER UMA COR DIFERENTE NO LED.
//DÓ=G, RÉ=R, MI=B, FÁ=G+R, SOL=R+B, LA=G+B, SI=G+R+B

#define R 13
#define G 11
#define B 12
int buzzer = 8;
int i = 0;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  for(i-0;1<8;i++)
  {
   	if(i==1)
    {
      tone(buzzer, 262, 1000);
      digitalWrite(G, HIGH);
      digitalWrite(R, LOW);
      digitalWrite(B, LOW);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if (i==2)
    {
      tone(buzzer, 294, 1000);
      digitalWrite(G, LOW);
      digitalWrite(R, HIGH);
      digitalWrite(B, LOW);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if (i==3)
    {
      tone(buzzer, 330, 1000);
      digitalWrite(G, LOW);
      digitalWrite(R, LOW);
      digitalWrite(B, HIGH);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if(i==4)
    {
      tone(buzzer, 349, 1000);
      digitalWrite(G, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(B, LOW);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if(i==5)
    {
      tone(buzzer, 392, 1000);
      digitalWrite(G, LOW);
      digitalWrite(R, HIGH);
      digitalWrite(B, HIGH);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if(i==6)
    {
      tone(buzzer, 440, 1000);
      digitalWrite(G, HIGH);
      digitalWrite(R, LOW);
      digitalWrite(B, HIGH);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
    else if(i==7)
    {
      tone(buzzer, 494, 1000);
      digitalWrite(G, HIGH);
      digitalWrite(R, HIGH);
      digitalWrite(B, HIGH);
      delay(1000);
      noTone(buzzer);
      delay(500);
    }
  
  }    
  
}


