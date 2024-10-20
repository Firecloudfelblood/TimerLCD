#include <LCD_I2C.h>

LCD_I2C lcd(0x27); // default address

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.backlight();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Counter: ");
  for(int i =1000; i > 0;i--){
    lcd.setCursor(9, 0);
    lcd.print(i);
  }
  lcd.clear();
  lcd.print("KABOOM!!!");
  lcd.blink();

  delay(1000);

  lcd.clear();

}
