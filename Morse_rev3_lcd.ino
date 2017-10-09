
#include <LiquidCrystal.h>
// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13; 
LiquidCrystal lcd(12, 11, 5, 4, 3, 7);

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  lcd.begin(16, 2);
  // ------------------------------------------------------------------
  char array[] = "Hello InSolution";
  String lcdt = "     Hello        Insolution!";
  // ------------------------------------------------------------------
  int pituus = sizeof(array);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    morse(array, pituus, lcdt);
  }
}

int morse(char* teksti, int pituus, String lcdt) {
  if (lcdt.length() > 16) {
    String alaosa = lcdt.substring(16);
    lcd.setCursor(0, 1);
    lcd.print(alaosa);
  }
  lcd.setCursor(0, 0);
  lcd.print(lcdt);
  int i;
  delay(200);
  for (i = 0; i < pituus; i = i + 1) {
    if (teksti[i] == 'a' or teksti[i] == 'A'){
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'b' or teksti[i] == 'B') {
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'c' or teksti[i] == 'C') {
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'd' or teksti[i] == 'D') {
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'e' or teksti[i] == 'E') {
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'f' or teksti[i] == 'F') {
      
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);
      delay(300);
      
    } else if (teksti[i] == 'g' or teksti[i] == 'G') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'h' or teksti[i] == 'H') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);   // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'i' or teksti[i] == 'I') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'j' or teksti[i] == 'J') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'k' or teksti[i] == 'K') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'l' or teksti[i] == 'L') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'm' or teksti[i] == 'M') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'n' or teksti[i] == 'N') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'o' or teksti[i] == 'O') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'p' or teksti[i] == 'P') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'q' or teksti[i] == 'Q') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'r' or teksti[i] == 'R') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 's' or teksti[i] == 'S') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 't' or teksti[i] == 'T') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'u' or teksti[i] == 'U') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'v' or teksti[i] == 'V') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'w' or teksti[i] == 'W') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);

    } else if (teksti[i] == 'x' or teksti[i] == 'X') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'y' or teksti[i] == 'Y') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == 'z' or teksti[i] == 'Z') {
      
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(200);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(100);
      digitalWrite(13, HIGH); tone(8,880);   // turn the LED on (HIGH is the voltage level)
      delay(100);              // wait for a second
      digitalWrite(13, LOW); noTone(8);    // turn the LED off by making the voltage LOW
      delay(300);
      
    } else if (teksti[i] == ' ') {
      delay(300);
    }
  }
  return 0;
}

