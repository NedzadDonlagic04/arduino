// Initialized variables to store the pins of the button
// and output pin
const int BTN_PIN = 13;
const int OUTPUT_PIN = 12;

// Defined variables to save the state of the button
// and the value that'll be passed to the other arduino
bool btnState;
bool state = false;

void setup()
{
  // Defined I/O modes of the pins
  pinMode(BTN_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop()
{
  // Check if button was pressed, if it was
  // pass the value to the other arduino
  btnState = digitalRead(BTN_PIN);

  if(btnState)
  {
    digitalWrite(OUTPUT_PIN, state);
    state = !state;
  }
  delay(300);
}
