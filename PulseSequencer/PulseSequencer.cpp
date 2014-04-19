/*
	Written by: Spencer Whyte
*/


#include "PulseSequencer.h"

int main(int argc, char **argv)

{
	PulseSequencer * sequencer = new PulseSequencer();
	sequencer->tOneExperiment();
	return 0;
}

PulseSequencer::PulseSequencer(){
	electronics = new Electronics();
        signalProcessing = new SignalProcessing();
}



void PulseSequencer::tOneExperiment(){
	singlePulseExperiment(60*1000, 1000, 2000, 5000);
}


/*
	All times are in milliseconds, frquency in hertz
*/
void PulseSequencer::singlePulseExperiment(int polarizationTime, int excitationTime, int excitationFrequency, int decayTime){
	electronics->setPolarizeEnabled(true);  
	sleep(6);
	electronics->setPolarizeEnabled(false);
	electronics->setTransmitEnabled(true);
	signalProcessing->exciteAtLarmourFrequency(2000);
	sleep(6);
	signalProcessing->exciteAtLarmourFrequency(0);
	electronics->setTransmitEnabled(false); 
	electronics->setReceiveEnabled(true);
	signalProcessing->startRecordingFID();
	sleep(5);
	signalProcessing->stopRecordingFID();
        electronics->setReceiveEnabled(false);  
}

PulseSequencer::~PulseSequencer(){
	delete electronics;
	delete signalProcessing;
}


