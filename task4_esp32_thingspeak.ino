#include <WiFi.h>
#include "DHTesp.h"

const char* ssid = "Wokwi-GUEST";
const char* password = "";

String apiKey = "PASTE_YOUR_API_KEY";

const char* server = "api.thingspeak.com";

WiFiClient client;

DHTesp dht;

int DHT_PIN = 15;

void setup()
{
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");

  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop()
{
  TempAndHumidity data = dht.getTempAndHumidity();

  float temperature = data.temperature;

  Serial.print("Temperature:");
  Serial.println(temperature);

  if(client.connect(server,80))
  {
    String url = "/update?api_key="+apiKey+"&field1="+String(temperature);

    client.print(String("GET ") + url + " HTTP/1.1\r\n"+
                 "Host:"+server+"\r\n"+
                 "Connection: close\r\n\r\n");
  }

  delay(15000);
}