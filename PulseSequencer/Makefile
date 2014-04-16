all: PulseSequencer

PulseSequencer: PulseSequencer.cpp
	g++ PulseSequencer.cpp -o PulseSequencer -lgnuradio-audio -L/usr/local/lib -lgnuradio-core -lgruel -lfftw3f -lm -I/usr/local/include/gnuradio -I/usr/local/include

clean:
	rm -rf PulseSequencer
