/*
 *  Basic hardware keylogger
 *
 *  Explanation: Simple code to execute payloads depending on the detected OS.
 * 
 *
 *  Copyright (C) 2019 Joel Serna & Ernesto Sanchez
 *
 *  Version:  1.0
 *  Design:   Joel Serna & Ernesto Sanchez
 *  Implementation: Joel Serna & Ernesto Sanchez
 *  Library:  @keyboardio
 *
 */

#include "FingerprintUSBHost.h"
#include "Keyboard.h"

void setup() {

    Keyboard.begin();
    String os;
    delay(3000);

    FingerprintUSBHost.guessHostOS(os);
	
    if(os == "Windows") {
        Serial.print("The Host OS is: ");
        Serial.println(os);

        // Hello World in Windows.
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('r');
        delay(100);
        Keyboard.releaseAll();
        delay(2000);
        Keyboard.print("notepad");
        delay(1000);
        Keyboard.press(KEY_RETURN);
        delay(100);
        Keyboard.releaseAll();
        delay(3000);
        Keyboard.print("Hello World");		
      }
	
    else if(os == "Linux") {
        Serial.print("The Host OS is: ");
        Serial.println(os);

        // Hello World in Linux.
        Keyboard.press(KEY_LEFT_ALT);
        Keyboard.press(KEY_F2);
        delay(100);
        Keyboard.releaseAll();
        delay(2000);
        Keyboard.print("gedit");
        delay(1000);
        Keyboard.press(KEY_RETURN);
        delay(100);
        Keyboard.releaseAll();
        delay(3000);
        Keyboard.print("Hello World");
      }
	
    else if(os == "MacOS") {
        Serial.print("The Host OS is: ");
        Serial.println(os);

        // Hello World in MacOS.
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press(' ');
        delay(100);
        Keyboard.releaseAll();
        delay(2000);
        Keyboard.print("Terminal");
        delay(1000);
        Keyboard.press(KEY_RETURN);
        delay(100);
        Keyboard.releaseAll();
        delay(3000);
        Keyboard.print("Hello World");
      }
}
void loop() {
    // put your main code here, to run repeatedly:
}
