#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);

int BTN_PIN = 10;
char text[3] = "Hi";
const byte address[6] = "komic";
bool state;

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

  pinMode(BTN_PIN, INPUT);
}

void loop() {
  state = digitalRead(BTN_PIN);
  if(state) {
    radio.write(&text, sizeof(text));
  }
  delay(300);
}
