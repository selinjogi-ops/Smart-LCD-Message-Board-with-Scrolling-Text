#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);   // Try 0x3F if 0x27 doesn’t work

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  String msg = "Welcome to AI & Robotics Lab - Selin Jogi Chittilappilly ";

  for (int i = 0; i < msg.length() - 15; i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(msg.substring(i, i + 16));
    delay(250);
  }
}


