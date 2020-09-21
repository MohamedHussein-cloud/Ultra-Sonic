#include <NewPing.h>
#define Trigger_pi 9
#define Echo_pi 10
#define Maximum_pi 200
NewPing pi(Trigger_pi,Echo_pi,Maximum_pi);
#include <LiquidCrystal.h>
int LCD1 = 13;
int LCD2 = 12;
int LCD3 = 7;
int LCD4 = 6;
int LCD5 = 5;
int LCD6 = 4;
int pos = 0;
int vos = 0;
LiquidCrystal lcd(LCD1,LCD2,LCD3,LCD4,LCD5,LCD6);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
}
void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(6,0);
lcd.print("pi:");
lcd.setCursor(6,1);
lcd.print(pi.ping_cm());
lcd.println("cm");
delay(500);
}
