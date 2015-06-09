// Define motor pWM output variable
int PWMout;
// Define sleep pin
const int Sleep = 2;
// We'll be controlling the motors from pins 3, 4, 5, 6, and 20, 21, 22, and 23.
// This must be one of the PWM-capable pins.
const int F1 = 3;
const int F2 = 23;
const int F3 = 21;
const int F4 = 5;
const int R1 = 22;
const int R2 = 4;
const int R3 = 20;
const int R4 = 6;
const int POT = 19;

void setup()
{
  // define motor driver sleep pin as output
  pinMode(Sleep, OUTPUT);
  // Enable DRV8837motor driver
  digitalWrite(Sleep, HIGH);
  
  // define motor control pins as output
  pinMode(F1, OUTPUT);
  pinMode(F2, OUTPUT);
  pinMode(F3, OUTPUT);
  pinMode(F4, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(POT, INPUT);
 
 
}

void loop()
{
 PWMout = analogRead(POT)/4;
 
// Serial.println(PWMout);
 
  // run PWM to all four forward motor control pins for test
 analogWrite(F1, PWMout);
 analogWrite(F2, PWMout);
 analogWrite(F3, PWMout);
 analogWrite(F4, PWMout);
}
