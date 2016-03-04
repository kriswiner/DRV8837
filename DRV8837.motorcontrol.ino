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
const int R1 = 4;
const int R2 = 22;
const int R3 = 20;
const int R4 = 6;
const int POT = 19; // if you put a potentiometer on a GPIO, you can set the PWMOUT this way as a test

void setup()
{
  
  // define motor driver sleep pin as output
  pinMode(Sleep, OUTPUT);
  // Enable DRV8837 motor driver
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

 analogWrite(R1, 0);
 analogWrite(R2, 0);
 analogWrite(R3, 0);
 analogWrite(R4, 0);
 
}

void loop()
{
// PWMout = analogRead(POT)/4;
 
 for(int ii = 1; ii < 256; ii++) {  // slowly ramp the motors to full speed then ramp down
   PWMout = ii;
   analogWrite(F1, PWMout);
   analogWrite(F2, PWMout);
   analogWrite(F3, PWMout);
   analogWrite(F4, PWMout);
   delay(200);
 }
 
 delay(2000);
 
  for(int ii = 1; ii < 256; ii++) {
   PWMout =  256 - ii;
   analogWrite(F1, PWMout);
   analogWrite(F2, PWMout);
   analogWrite(F3, PWMout);
   analogWrite(F4, PWMout);
   delay(200);
 }
 
  delay(2000);
 
}
