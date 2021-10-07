#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

void setup(){
  pinMode(D7, OUTPUT);
}

void nyala(){
  digitalWrite(D7, HIGH);
}

void mati(){
  digitalWrite(D7, LOW);
}

void loop(){
  nyala();
  delay(500);
  mati();
}

// Kondisi LED 
// Active High = LED nyala ketika diberi nilai High
// (Pin Panjang dihubungkan ke Pin yang digunakan dan yang pendek ke GND)
// Active Low = LED nyala ketika diberi nilai Low
// (Pin Pendek ke Pin digunakan, Pin panjang ke Tegangan 5v atau 3v)
