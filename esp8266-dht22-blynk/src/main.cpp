// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPL1sxOKltl"
#define BLYNK_DEVICE_NAME "HIEN THI DHT22"

#define BLYNK_FIRMWARE_VERSION        "1.0.1"
#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG
#define USE_NODE_MCU_BOARD
#include "BlynkEdgent.h"
#include "DHT.h"
#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

#define DHTPIN 5
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
unsigned long times=millis();
#define analogPin A0

int value;
int phantram;
WidgetLED led(V0);
BlynkTimer timer;



String Arduino1;
char rdata;

void blinkLedWidget(){
  if (led.getValue()) {
    led.off();
  } else {
    led.on();
  }
}

void setup(){
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  dht.begin();
  timer.setInterval(1000L, blinkLedWidget);
}

void loop() {

  if (Serial.available() )
   {
  BlynkEdgent.run();
  timer.run();
  if(millis()-times>2000){
    // Reading temperature or humidity
    float t = dht.readTemperature();
    float h = dht.readHumidity();

    if (isnan(h) || isnan(t)) {
      Serial.println(F("Failed to read from DHT sensor!"));


    int found = 0;
    int strIndex[] = { 0, -1 };
    int maxIndex = data.length() - 1;
 
    for (int i = 0; i <= maxIndex && found <= index; i++) {
        if (data.charAt(i) == separator || i == maxIndex) {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i+1 : i;
        }
    }
    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}



    Blynk.virtualWrite(V1,t);
    Blynk.virtualWrite(V2,h);
    Serial.print(F("Temperature: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(F("Humidity: "));
    Serial.print(h);
    Serial.println(F("%"));
  
    times = millis();
  }
}