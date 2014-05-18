
#include "SignalProcessing.h"

#include "Electronics.h"

#include <unistd.h>

#include <boost/thread/thread.hpp>

class PulseSequencer{

private:
	Electronics * electronics;
	SignalProcessing * signalProcessing;

public:
	PulseSequencer();
	void tOneExperiment();
	void singlePulseExperiment(int polarizationTime, int excitationTime, int excitationFrequency, int decayTime);
	
	void testRecord();
	~PulseSequencer();
};
