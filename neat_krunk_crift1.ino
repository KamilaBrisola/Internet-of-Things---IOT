// SENSOR ULTRASSÔNICO E TRÊS LEDS

#define R 12
#define Y 10
#define G 8

const int pinoBuzzer = 2; //PINO DIGITAL EM QUE O BUZZER ESTÁ CONECTADO

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
  pinMode(Y, OUTPUT);
  pinMode(G, OUTPUT);

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
  
  if(cm < 10){// SE A DISTÂNCIA ENTRE O OBJETO E O SENSOR ULTRASONICO FOR MENOR QUE 50CM, FAZ
  digitalWrite(R, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(G, LOW); 
  }    else if (cm >= 10 && cm < 20)
  {
  digitalWrite(Y, HIGH);
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  }
  else if (cm > 20){
  digitalWrite(G, HIGH);
  digitalWrite(R, LOW);
  digitalWrite(Y, LOW);
  }
  
  
}