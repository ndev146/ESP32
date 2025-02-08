/*
Board/Controller : ESP32 Dev Module
Task             : ESP32 - Inbuilt LED (2nd pin) blink/control with a delay of 1 sec (or 5000 for 5 secs)
By               : ndev146 : 7th Feb, 2025. Working
*/

#define onBoardLed 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);

  pinMode(onBoardLed, OUTPUT);  // Led pin and Mode is OUTPUT

}

void loop() {    
  // put your main code here, to run repeatedly:
  digitalWrite(onBoardLed, HIGH);
  Serial.println("Led is now ON");
  delay(5000);

  digitalWrite(onBoardLed, LOW);
  Serial.println("Led is now OFF");
  delay(5000);
}
