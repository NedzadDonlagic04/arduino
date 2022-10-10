// Initialized variables that represent the pins of the LED
// and the pin which will take the input from the other arduino
const int LED_PIN = 13;
const int INPUT_PIN = 12;

// Declared a variable to save given state
bool ledState;

void setup()
{
  // Defined I/O modes of the pins
  pinMode(LED_PIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
}

void loop()
{
  // Read the state of the pin and turn on the LED
  // if the state is logical 1
  ledState = digitalRead(INPUT_PIN);
  digitalWrite(LED_PIN, ledState);
  delay(300);    
}
