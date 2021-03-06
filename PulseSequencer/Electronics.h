#include "SerialPort.h"
/*
	Written by: Spencer Whyte

	The purpose of this class is to provide an easy interface to the electronics that will
	control the NMR experiment.

*/


class Electronics
{

private:
	SerialPort * serialPort;

public:

	Electronics();
	
	// Turn on or off the polarization coil
	void setPolarizeEnabled(bool enabled);

	// Connect or disconnect the transmit hardware from the coil 		
	void setTransmitEnabled(bool enabled); 		

	// Connect or disconnect the receive hardware from the coil
	void setReceiveEnabled(bool enabled);
	
};

typedef boost::shared_ptr<Electronics> Electronics_ptr;

