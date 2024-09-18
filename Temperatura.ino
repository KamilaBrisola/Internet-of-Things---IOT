// C++ code
//

#define R 9
#define buzzer 12
#define triggerpin
#define button 13


const int pinoBuzzer = 12; //PINO DIGITAL EM QUE O BUZZER ESTÁ CONECTADO

int inches = 0;
int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(5, 7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)
  
  if(cm < 20){// SE A DISTÂNCIA ENTRE O OBJETO E O SENSOR ULTRASONICO FOR MENOR QUE 20CM, FAZ
    tone(buzzer, 262);
    digitalWrite(R, HIGH);    
       
  } else {
    noTone (buzzer);
    digitalWrite(R,LOW);
  }   
    
    if (digitalRead(button) == HIGH) {
    noTone(buzzer); // Desativa o buzzer
    digitalWrite(R, LOW); // Apaga o LED
    delay(500); // Debounce delay
    while (digitalRead(button) == LOW); // Espera o botão ser solto
  }
        }













