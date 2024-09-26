#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define endereco  0x20 // Endereços comuns: 0x20, 0x3F
#define colunas   16
#define linhas    2
LiquidCrystal_I2C lcd(endereco, colunas, linhas);


void setup()
  
 
{
  pinMode(5, OUTPUT); //VERDE PED.
  pinMode(6, OUTPUT); //VERMELHO PED.
  pinMode(8, OUTPUT); //VERMELHO MOT.
  pinMode(9, OUTPUT); //AMAELO MOT.
  pinMode(10, OUTPUT); //VERDE MOTO.
lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
lcd.backlight(); // LIGA A ILUMINAÇÃO DO DISPLAY
lcd.clear(); // LIMPA O DISPLAY


}

void loop()
{
  digitalWrite(8, HIGH);
  lcd.setCursor(1, 0);
  lcd.print("VERMELHO MOT.");
  digitalWrite(5, HIGH);
  lcd.setCursor(1, 1);
  lcd.print("VERDE PED.");  
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  lcd.clear(); // LIMPA O DISPLAY
  
  digitalWrite(9, HIGH);
  lcd.setCursor(1, 0);
  lcd.print("AMARELO MOT.");
  digitalWrite(6, HIGH);
  lcd.setCursor(1, 1);
  lcd.print("VERMELHO PED.");
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  pinMode(7, OUTPUT);
  lcd.clear(); // LIMPA O DISPLAY
 

  digitalWrite(10, HIGH);
  lcd.setCursor(1, 0);
  lcd.print("VERDE MOT.");
  digitalWrite(6, HIGH);
  lcd.setCursor(1, 1);
  lcd.print("VERMELHO PED.");
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  lcd.clear(); // LIMPA O DISPLAY
 


 

}

