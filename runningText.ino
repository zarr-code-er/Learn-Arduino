#include <LiquidCrystal_I2C.h>

int kolom = 16;
int baris = 2;

LiquidCrystal_I2C lcd(0x27, kolom, baris);  


void setup() 
{
  lcd.init();                      
  lcd.backlight();
}

void loop() 
{
  int i;  
  lcd.setCursor(0,0);
  lcd.print("judi zeus99 tergacor parah");
  lcd.setCursor(0,1);
  lcd.print("Di Channel Alfian Center");
  for (i = 0 ; i < 16; i++) 
  {
    lcd.scrollDisplayRight(); 
    delay(200);
  } 

}