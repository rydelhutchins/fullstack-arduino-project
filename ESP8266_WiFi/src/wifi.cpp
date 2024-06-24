#include "wifi.h"

// Define your WiFi credentials
const char* ssid = "MagicWifi";
const char* password = "&75eq1hh671D!";

// Define the function to connect to WiFi
void connectToWiFi() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}
