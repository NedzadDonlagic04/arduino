// Initializing variables that store led and button pins
// used later to take user input and output the correct value
const int LED_PIN = 13;
const int BTN_PIN = 12;

// Variables used to represent the current state 
// of the LED and button
bool ledState = false;
bool btnState;

void setup()
{
  // Defining the I/O modes of the pins
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
}

void loop()
{
  // Setting the state of the LED each iteration
  digitalWrite(LED_PIN, ledState);

  // Checking if the button was pressed
  // If so change the LED state
  btnState = digitalRead(BTN_PIN);
  
  if(btnState)
  {
    ledState = !ledState;
  }
  delay(300);
}
