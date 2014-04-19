#include <gnuradio/gr_top_block.h>

#include <gnuradio/gr_sig_source_f.h>

#include <gnuradio/gr_audio_sink.h>

#include "Electronics.h" 

#include <unistd.h>

int main(int argc, char **argv)

{

	int rate = 44100;                // Audio card sample rate

	float ampl = 0.5;                // Don't exceed 0.5 or clipping will occur

	// Construct a top block that will contain flowgraph blocks.  Alternatively,

	// one may create a derived class from gr_top_block and hold instantiated blocks

	// as member data for later manipulation.

	gr_top_block_sptr tb = gr_make_top_block("dial_tone");

	// Construct a real-valued signal source for each tone, at given sample rate

	gr_sig_source_f_sptr src0 = gr_make_sig_source_f(rate, GR_SIN_WAVE, 350, ampl);

	gr_sig_source_f_sptr src1 = gr_make_sig_source_f(rate, GR_SIN_WAVE, 440, ampl);

	// Construct an audio sink to accept audio tones

	audio_sink::sptr  sink = audio_make_sink(rate);
   


	// Connect output #0 of src0 to input #0 of sink (left channel)

	tb->connect(src0, 0, sink, 0);

	// Connect output #0 of src1 to input #1 of sink (right channel)

	tb->connect(src1, 0, sink, 1);

	// Tell GNU Radio runtime to start flowgraph threads; the foreground thread

	// will block until either flowgraph exits (this example doesn't) or the

	// application receives SIGINT (e.g., user hits CTRL-C).

	//

	// Real applications may use tb->start() which returns, allowing the foreground

	// thread to proceed, then later use tb->stop(), followed by tb->wait(), to cleanup

	// GNU Radio before exiting.

	Electronics * electronics = new Electronics();

	while(1){
		usleep(10000);
		electronics->setPolarizeEnabled(true);	
		usleep(10000);
		electronics->setPolarizeEnabled(false);
	}		
	tb->run();

	// Exit normally.

	return 0;
}

