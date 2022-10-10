// setup function is used at the start of the program
// it's used to initialize some basic information before the event loop
// from this point on I will be refering to the loop function as the event loop since it's easier
void setup() {
  // pinMode function sets the given pins I/O status (in this case it sets it as output)
  pinMode(13, OUTPUT);

}

// infinite loop where all the events take place
void loop() {
  // digitalWrite sets the state of the pin as either logical 1 (HIGH) or 0 (LOW) (in this case it's set to logical 1)
  digitalWrite(13, HIGH);   
  // delay function takes a number and gives a delay of that number in miliseconds
  delay(1000);
}
