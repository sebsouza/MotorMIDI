#include <Arduino.h>
#include <AccelStepper.h>
#include <AFMotor.h>
 #include <MIDI.h>

AF_Stepper motor1(200, 1);
//AF_Stepper motor2(200, 2);

AccelStepper stepper(motor1.onestep(FORWARD, SINGLE), motor1.onestep(BACKWARD, SINGLE));

MIDI_CREATE_DEFAULT_INSTANCE();

