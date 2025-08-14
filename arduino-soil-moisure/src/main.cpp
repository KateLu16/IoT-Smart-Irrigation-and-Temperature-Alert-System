#include "DHT.h"
const int DHTPIN = 4;
const int DHTTYPE = DHT22;
int cambien = A0;
int relay = 6;


DHT dht(DHTPIN, DHTTYPE);

void setup()
    {
      Serial.begin (9600);
      pinMode (cambien, INPUT);
      pinMode (relay, OUTPUT);
      digitalWrite (relay, LOW);
      dht.begin ();
    }
void loop ()
{
    
    float h = dht.readHumidity ();
    float t = dht.readTemperature();

    int analog = analogRead (cambien);
    int phantram = map(analog, 0, 1023, 0, 100);
    int phantramthuc = 100 - phantram;

    Serial.print ("Nhiet do mt: "); 
    Serial.print (t); Serial.print(" "); Serial.println ("oC");

    Serial.print ("Do am mt: ");
    Serial.print (h); Serial.print(" "); Serial.println("%");

    Serial.print ("Do am dat: "); Serial.print (analog); Serial.print (" ");
   
    Serial.print ("~"); Serial.print (" ");  Serial.print (phantramthuc); Serial.println ("%");

    Serial.println ();
    delay (200);

    if (phantramthuc >=40)

    {
      digitalWrite (relay, LOW);
    }
  else 
  { 
    digitalWrite (relay, HIGH);
  }
}