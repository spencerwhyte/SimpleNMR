/*
	Written by: Spencer Whyte
*/

#include "SignalProcessing.h"

SignalProcessing::SignalProcessing(){
	sampleRate = 44100; // This is the best sample rate on the mac book pro mid 2010, any other sample rate gives incorrect output waveforms

}

/*
	Generates a continuous wave at the given larmour frequency	

	int - The frequency in hertz (0 stops the excitation)
*/
void SignalProcessing::startExciteAtLarmourFrequency(int frequency){
	float ampl = 0.5;                // Don't exceed 0.5 or clipping will occur

       	tb = gr::make_top_block("excite");

       	// Construct a real-valued signal source for each tone, at given sample rate

        gr::analog::sig_source_f::sptr src0 = gr::analog::sig_source_f::make(sampleRate, gr::analog::GR_SIN_WAVE, frequency, ampl);

        // Construct an audio sink to accept audio tones
	
        gr::audio::sink::sptr  sink = gr::audio::sink::make(sampleRate);

        // Connect output #0 of src0 to input #0 of sink (left channel)

        tb->connect(src0, 0, sink, 0); // Last parameter would be 1 in the case of the right channel


        // if you use tb->start(), then later use tb->stop(), followed by tb->wait(), to cleanup

       	// GNU Radio before exiting.

       	tb->start();
	// tb->run();
}


void SignalProcessing::stopExciteAtLarmourFrequency(){
	tb->stop();
	tb->wait();
	tb.reset();
}

/*

	Records the FID in the form of an audio file (for now).
	Displays FFT of FID

*/
void SignalProcessing::startRecordingFID(){
	// Create the top block for the record flow graph
	tb = gr::make_top_block("record");
	// Construct an audio source that will record from line in
	gr::audio::source::sptr source = gr::audio::source::make(sampleRate);		
	int n_channels = 1;
	
	time_t seconds = time(0);	
	char identifier[255];
	sprintf(identifier, "./data/%ld.wav", seconds); 	
	gr::blocks::wavfile_sink::sptr wavFileSink = gr::blocks::wavfile_sink::make(identifier, n_channels, sampleRate); 	
	tb->connect(source,0,wavFileSink,0);
	tb->start();
}


/*
	Stops the recording of the FID that was started earlier
*/
void SignalProcessing::stopRecordingFID(){
	tb->stop();
	tb->wait();
	tb.reset();
}
