/*
	Written by: Spencer Whyte
*/


#include <gnuradio/top_block.h>

#include <gnuradio/gr_sig_source_f.h>

#include <gnuradio/gr_audio_sink.h>

class SignalProcessing{

private:
	int sampleRate; // The sample rate of the audio interface being used
	gr_top_block_sptr tb;	

public:
	SignalProcessing();
	
	void exciteAtLarmourFrequency(int frequency);

	void startRecordingFID();

	void stopRecordingFID();
};
