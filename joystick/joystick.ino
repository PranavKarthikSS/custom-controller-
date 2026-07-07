#include <XInput.h>

// Button pin assignments
const int pinX  = 15;
const int pinY  = 14;
const int pinA  = 16;
const int pinB  = 10;

const int pinUp    = 3;
const int pinDown  = 5;
const int pinLeft  = 6;
const int pinRight = 4;

const int pinRB = 7;
const int pinLB = 2;

const int pinRT = 8;
const int pinLT = 9;

// Joystick analog pins
const int pinLX = A0;
const int pinLY = A1;
const int pinRX = A2;
const int pinRY = A3;

void setup() {
  // Buttons
  pinMode(pinA,     INPUT_PULLUP);
  pinMode(pinB,     INPUT_PULLUP);
  pinMode(pinX,     INPUT_PULLUP);
  pinMode(pinY,     INPUT_PULLUP);
  pinMode(pinLB,    INPUT_PULLUP);
  pinMode(pinRB,    INPUT_PULLUP);

  // D-Pad
  pinMode(pinUp,    INPUT_PULLUP);
  pinMode(pinDown,  INPUT_PULLUP);
  pinMode(pinLeft,  INPUT_PULLUP);
  pinMode(pinRight, INPUT_PULLUP);

  // trigger
  pinMode(pinLT,    INPUT_PULLUP);
  pinMode(pinRT,    INPUT_PULLUP);

  XInput.begin();
}

void loop() {
  // Buttons
  XInput.setButton(BUTTON_A,  !digitalRead(pinA));
  XInput.setButton(BUTTON_B,  !digitalRead(pinB));
  XInput.setButton(BUTTON_X,  !digitalRead(pinX));
  XInput.setButton(BUTTON_Y,  !digitalRead(pinY));
  XInput.setButton(BUTTON_LB, !digitalRead(pinLB));
  XInput.setButton(BUTTON_RB, !digitalRead(pinRB));

  //trigger
  XInput.setTrigger(TRIGGER_LEFT,  digitalRead(pinLT) ? 0 : 255);
  XInput.setTrigger(TRIGGER_RIGHT, digitalRead(pinRT) ? 0 : 255);



  // D-Pad
  XInput.setDpad(DPAD_UP,     !digitalRead(pinUp));
  XInput.setDpad(DPAD_DOWN,   !digitalRead(pinDown));
  XInput.setDpad(DPAD_LEFT,   !digitalRead(pinLeft));
  XInput.setDpad(DPAD_RIGHT,  !digitalRead(pinRight));

  // Read analogs
  int lx = analogRead(pinLX);
  int ly = analogRead(pinLY);
  int rx = analogRead(pinRX);
  int ry = analogRead(pinRY);

  // Set joystick values (map 0–1023 to -32768–32767)
  XInput.setJoystick(JOY_LEFT, map(lx, 0, 1023, 32767, -32768),  map(ly, 0, 1023, 32767, -32768));
  XInput.setJoystick(JOY_RIGHT, map(rx, 0, 1023, 32767,-32768), map(ry, 0, 1023, 32767, -32768));
  delay(5);
}