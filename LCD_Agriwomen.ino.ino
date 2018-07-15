// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

void setup() {
  //Temp sensor TMP36GZ
  pinMode(A5,INPUT); // Configuring pin A1 as input
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.clear();  
  }

void loop() {
  lcd.setCursor(0,0);
  // Print a message to the LCD.
  lcd.print("HYDROPONIC FARM");
  
  lcd.setCursor(0,1);
  int ADC_Val = analogRead(A5); 
  float voltage = ADC_Val * 5.0;
  voltage /= 1024.0; 
  float tempC = (voltage - 0.5) * 100 ;                                           
  lcd.print("temp(degC):"); 
  lcd.print(tempC); // Prints temp in degree celsius
  delay(1000);
  }

