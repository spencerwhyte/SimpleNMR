/*
	Written by: Spencer Whyte
*/


#include <gnuradio/top_block.h>

#include <gnuradio/analog/sig_source_f.h>

#include <gnuradio/audio/sink.h>

#include <gnuradio/audio/source.h>

#include <gnuradio/blocks/wavfile_sink.h>

#include <gnuradio/qtgui/freq_sink_f.h>

#include <stdio.h>

class SignalProcessing{

private:
	int sampleRate; // The sample rate of the audio interface being used
	gr::top_block_sptr tb;	

public:
	SignalProcessing();
	
	void startExciteAtLarmourFrequency(int frequency);

	void stopExciteAtLarmourFrequency();

	void startRecordingFID();

	void stopRecordingFID();
};
