#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);

int LED_PIN = 4;
const byte address[6] = "komic";
bool state = false;

void setup() {
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (radio.available()) {
    char text[32]="";
    radio.read(&text, sizeof(text));
    state = !state;
  }
  digitalWrite(LED_PIN, state);
}
