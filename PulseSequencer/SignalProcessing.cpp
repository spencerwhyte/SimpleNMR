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
void SignalProcessing::exciteAtLarmourFrequency(int frequency){
	if(frequency != 0){ // They are just starting the excitation
		float ampl = 0.5;                // Don't exceed 0.5 or clipping will occur

        	tb = gr_make_top_block("excite");

        	// Construct a real-valued signal source for each tone, at given sample rate

	        gr_sig_source_f_sptr src0 = gr_make_sig_source_f(sampleRate, GR_SIN_WAVE, frequency, ampl);

	        // Construct an audio sink to accept audio tones
	
	        audio_sink::sptr  sink = audio_make_sink(sampleRate);

	        // Connect output #0 of src0 to input #0 of sink (left channel)

	        tb->connect(src0, 0, sink, 0); // Last parameter would be 1 in the case of the right channel

	        // if you use tb->start(), then later use tb->stop(), followed by tb->wait(), to cleanup

        	// GNU Radio before exiting.

        	tb->start();
		// tb->run();
	}else{ // If they specify a zero frequency, it means that they want to stop the excitation
		tb->stop();
		tb->wait();
		tb.reset();
	}
}

/*

	Records the FID in the form of an audio file (for now).
	Displays FFT of FID

*/
void SignalProcessing::startRecordingFID(){


}


/*
	Stops the recording of the FID that was started earlier
*/
void SignalProcessing::stopRecordingFID(){

}
