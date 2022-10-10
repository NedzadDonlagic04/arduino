// Initializing a constant array of ints to store the pins we're using
// as well as a constant to store it's size
// These will be used later on to iterate through the LEDs and make them
// turns on and off one by one
const int LED_PINS[] = {13, 12, 11, 10};
const int LED_LENGTH = sizeof(LED_PINS) / sizeof(LED_PINS[0]);

// Initializing the iterator
int iterator = 0;

void setup()
{
  // Setting all led pins as output
  for(int i=0; i<LED_LENGTH; i++)
  {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop()
{
  // Turning on the LED for 1 seconds then turning it off
  // After which the iterator will move onto the next LED
  digitalWrite(LED_PINS[iterator], HIGH);
  delay(1000);
  digitalWrite(LED_PINS[iterator], LOW);
  iterator = (iterator == LED_LENGTH)? 0 : iterator + 1;
}
