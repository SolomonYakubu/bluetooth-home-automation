
#include <SoftwareSerial.h>
SoftwareSerial myserial(2,3); // initialize software serial
int data;

int ledState = LOW;
unsigned long ledStarted = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); // Lamp 1
  pinMode(7, OUTPUT); // Lamp2
  pinMode(6, OUTPUT); // Lamp 3
  pinMode(5,OUTPUT); // Socket
  
  myserial.begin(9600);
}

void loop() {

  if (myserial.available()) {



    data = myserial.read();
    // We used a switch statement instead of multiple if-else statement to make the code cleaner
    switch (data) {
      case '1':  digitalWrite(8, HIGH); // ON Lamp1
        break;
      case '2':  digitalWrite(8, LOW); // OFF Lamp1
        break;
      case '3': digitalWrite(6, HIGH); // ON Lamp2
        break;
      case '4': digitalWrite(6, LOW); // OFF Lamp2
        break;
      case '5':digitalWrite(5, HIGH); // ON Lamp3
        
        break;
      case '6':digitalWrite(5, LOW); // OFF Lamp 3
        break;
         case '7':digitalWrite(7, HIGH); //ON Socket
        
        break;
      case '8':digitalWrite(7, LOW);  // OFF Socket
      break;

    }
   
    delay(100);
  }

}
