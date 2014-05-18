/*
	Written by: Spencer Whyte
*/

#include "Electronics.h"


#define POLARIZATION_BIT 1
#define TRANSMIT_BIT 2 
#define RECEIVE_BIT 4 
/*
 Opens up a connection to the electronics so that
 they can be configured.
*/

Electronics::Electronics(){
	serialPort = new SerialPort();
}

// Turn on or off the polarization coil
void Electronics::setPolarizeEnabled(bool enabled){
	if(enabled){
		serialPort->sendData(POLARIZATION_BIT);
	}else{
		serialPort->sendData(0);
	}	
}

// Connect or disconnect the transmit hardware from the coil
void Electronics::setTransmitEnabled(bool enabled){
	if(enabled){
		serialPort->sendData(TRANSMIT_BIT);
	}else{
		serialPort->sendData(0);	
	}
}

// Connect or disconnect the receive hardware from the coil
void Electronics::setReceiveEnabled(bool enabled){
	if(enabled){
		serialPort->sendData(RECEIVE_BIT);
	}else{
		serialPort->sendData(0);
	}
}

