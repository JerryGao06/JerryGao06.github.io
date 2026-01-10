/**
  * @file syringe_pump.ino
  * @brief Controls a syringe pump using an AccelStepper driver, with
  * LED indicators and safety limit switch.
  *
  * This sketch reads a button and a limit switch to toggle the
  * Pump between Idle, Running, and Error states. It calculates
  * the required stepper motor speed based on flow rate and
  * syringe diameter, then drives the stepper at that speed when
  * In Running mode.
  */

#include <AccelStepper.h>

//=== Stepper Motor Setup ===
// Using DRIVER interface: Step pin = 2, Direction pin = 3
AccelStepper stepper(AccelStepper::DRIVER, 2, 3);

//=== Pin Definitions ===
const int ledR = 4; ///< Red LED pin (Error indicator)
const int ledB = 5; ///< Blue LED pin (Idle indicator)
const int ledG = 6; ///< Green LED pin (Running indicator)
const int btnPin = 10; ///< Pushbutton pin (toggles pump state)
const int limitPin = 8; ///< Limit switch pin (safety shutoff)

//=== User-Adjustable Settings ===
const float flowRate = 5.0f; ///< Desired flow rate in mL/min
const int syringeSize = 10; ///< Syringe volume in mL (10 or 20)

//=== Physical Constants ===
const float dia10 = 14.35f; ///< Inner diameter of 10 mL syringe in mm
const float dia20 = 18.5f; ///< Inner diameter of 20 mL syringe in mm
const float lead = 2.0f; ///< Lead screw pitch in mm/rev
const int stepsRev = 200; ///< Full steps per revolution of stepper
const int microstep = 16; ///< Microstepping setting (1/16th steps)

//=== State Variables ===
bool running = false; ///< True when pump is actively running
bool errorLimit = false; ///< True if limit switch was triggered
bool lastButtonState = HIGH; ///< Stores previous button state for edge detection
float stepsPerSec = 0.0f; ///< Calculated steps per second for target flow

//=== Setup Function ===
void setup() {
  // Configure LED and input pins
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(limitPin, INPUT_PULLUP);

  // Calculate syringe cross-sectional area
  float dia = (syringeSize == 10) ? dia10 : dia20;
  float area = PI * pow(dia / 2.0f, 2);

  // Convert flowRate (mL/min) to mm per second of piston travel
  float mmPerSec = (flowRate * 1000.0f) / (area * 60.0f);

  // Convert linear piston speed to stepper steps per second
  stepsPerSec = mmPerSec * stepsRev * microstep / lead;

  // Initialize stepper speed limits
  stepper.setMaxSpeed(1000);        // Maximum allowed speed (steps/sec)
  stepper.setSpeed(stepsPerSec);    // Target speed (steps/sec)

  // Start in Idle state (blue LED)
  updateLEDs();
}

//=== Main Loop ===
void loop() {
  // Read inputs: button and limit switch
  bool buttonState = digitalRead(btnPin);
  bool limitState = (digitalRead(limitPin) == LOW);

  // 1) Safety: if limit switch is pressed, enter error state immediately
  if (limitState) {
    errorLimit = true;
    running = false;
  }
  // 2) On button FALLING edge, toggle states
  else if (buttonState == LOW && lastButtonState == HIGH) {
    if (errorLimit) {
      // From Error state: reset error and start running
      errorLimit = false;
      running = true;
    } else {
      // Toggle between Idle and Running
      running = !running;
    }
  }

  // Save button state for next edge detection
  lastButtonState = buttonState;

  // Update LED indicators based on current state
  updateLEDs();

  // Drive the stepper only in the Running state without error
  if (running && !errorLimit) {
    stepper.runSpeed();
  }
}

//=== LED Update Helper ===
/**
 * @brief Updates the three-color LED to reflect the current pump state.
 *        - Error (limit switch): RED on
 *        - Running: GREEN on
 *        - Idle: BLUE on (blue used over yellow for improved visibility contrast)
 */
void updateLEDs() {
  if (errorLimit) {
    // ERROR: RED
    digitalWrite(ledR, HIGH);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, LOW);
  } else if (running) {
    // RUNNING: GREEN
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, HIGH);
    digitalWrite(ledB, LOW);
  } else {
    // IDLE: BLUE
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, HIGH);
  }
}






