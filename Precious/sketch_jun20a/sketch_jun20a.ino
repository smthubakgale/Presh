// ref : https://www.electronicwings.com/arduino/lcd-16x2-interfacing-with-arduino-uno

#include <LiquidCrystal.h> 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3);

void setup() { 
  //:: Display 
  lcd.begin(16, 2);        
  //:: Battery Life 
  pinMode(A0 , INPUT);
  
  //
}

void loop() {
   float vol = 0.0;
 
   for(int k = 0 ; k < 50;k++)
   {
      vol += 1024 - analogRead(A0);
   }
   vol/= 50;
   vol = (vol*6.00)/1024;
    
    
   lcd.clear();
   lcd.println("Voltage : " + String(vol));
  
   delay(2000);
}
