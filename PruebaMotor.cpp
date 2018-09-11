#include "PruebaMotor.h"

void setup() {

	MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages

}

void loop() {

	if (MIDI.read())                // Is there a MIDI message incoming ?
	    {

//	        if(MIDI.getType()==0xB0)      // Get the type of the message we caught
//	        {

	            	motor1.onestep(FORWARD, SINGLE);
//
//	            	if(MIDI.getData1()==14){
//	            		stepper.setSpeed(MIDI.getData2());
//	            	}
//

//	        }

	    }

//	stepper.setSpeed(50);
	stepper.runSpeed();

}
