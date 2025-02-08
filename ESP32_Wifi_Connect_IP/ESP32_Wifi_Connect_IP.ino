/*
Board : ESP32 Dev Module
Task  : Connect the ESP32 to wifi and print the IP  
By    : ndev146, 8th Feb 2025


Note : Printed IP is not a constant. It may vary everytime, you connect to a router.
     : Press Reset/en button on ESP32, to see the output in SerialMonitor. Baud Rate : 115200

*/

#include <WiFi.h>
#include <WebServer.h>

// Replace with your network credentials
const char* ssid = "ConnectToMYRouter";
const char* password = "GiveMYPasswordHere";

WebServer server(80);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
