#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
//ou bien  0x3F,20,4
void setup()
{
  lcd.begin();
//lcd.init(); si ça ne fonctionne pas
  lcd.backlight();
  lcd.print("ELECTROCODEUR");
}


void loop()
{
}
