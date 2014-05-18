/*
	Written by: Spencer Whyte
*/

#include "PulseSequencer.h"

int main(int argc, char **argv)

{
	PulseSequencer * sequencer = new PulseSequencer();
	sequencer->tOneExperiment();
		
//	sequencer->testRecord();
	return 0;
}

void PulseSequencer::testRecord(){
	signalProcessing->startRecordingFID();
	sleep(5);
	signalProcessing->stopRecordingFID();
}

PulseSequencer::PulseSequencer(){
	electronics = new Electronics();
        signalProcessing = new SignalProcessing();
}



void PulseSequencer::tOneExperiment(){
	singlePulseExperiment(7*1000, 2800, 2000, 3000);
}


/*
	All times are in milliseconds, frquency in hertz
*/
void PulseSequencer::singlePulseExperiment(int polarizationTime, int excitationTime, int excitationFrequency, int decayTime){
	electronics->setPolarizeEnabled(true);  

	boost::this_thread::sleep(boost::posix_time::milliseconds(polarizationTime));	
	electronics->setPolarizeEnabled(false);
	electronics->setTransmitEnabled(true);
	signalProcessing->startExciteAtLarmourFrequency(2000);
	boost::this_thread::sleep(boost::posix_time::milliseconds(excitationTime));
	signalProcessing->stopExciteAtLarmourFrequency();
	electronics->setTransmitEnabled(false); 
	electronics->setReceiveEnabled(true);
	signalProcessing->startRecordingFID();
	boost::this_thread::sleep(boost::posix_time::milliseconds(decayTime));
	signalProcessing->stopRecordingFID();
        electronics->setReceiveEnabled(false);  
}

PulseSequencer::~PulseSequencer(){
	delete electronics;
	delete signalProcessing;
}

