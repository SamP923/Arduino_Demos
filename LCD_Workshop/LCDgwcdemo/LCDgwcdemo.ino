// include the library code:
#include <LiquidCrystal.h>
String string = "ap physics 2";
String string2 = "final!!!";

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  delay(3000);
  for(int x = 1; x <= string.length(); x++){
    delay(250);
    lcd.setCursor(0, 0);
    lcd.print(string.substring(0,x));
  }
  lcd.setCursor(0, 1);
  for(int x = 1; x <= string2.length(); x++){
    delay(250);
    lcd.setCursor(0, 1);
    lcd.print(string2.substring(0,x));
  }
  /*
  for(int x = 0; x < 3; x++){
    lcd.setCursor(8, 1);
    lcd.print("    ");
    delay(250);
    lcd.setCursor(8, 1);
    lcd.print(".");;
    delay(250);
    lcd.print(".");
    delay(250);
    lcd.print(".");
    delay(250);
  }

  //lcd.clear();
  */
}
