Simple NMR
==============
This is my first adventure into NMR and I want to keep everything as simple as possible for the first design. 

The process goes a little something like this.

1. Apply a pre-polarizing pulse to the sample.
2. Transmit 90 degree pulse
3. Listen to the FID

Transmit/Receive Board
----------

There is a board which controls the polarization, transmission amplification, and receiver amplification. kicad designs for this board can be found in the RelayBoard folder.


To elaborate on the simple process described above, here is what actually happens.

1. Apply a pre-polarizing pulse to the sample
	- Configure the relays to disable transmit and receive functionality (To protect the electronics)
	- Turn on the polarization coil
	- Wait some fixed period of time
	- Turn off the polarization coil 

2. Transmit 90 degree pulse
	- Configure the relays to allow transmission
	- Tell GNURadio to output a sine wave at the larmour frequency to the sound card/audio interface
	- Wait 90 degrees worth of time
	- Tell GNURadio to stop the output
	- Configure the relays to disable transmission

3. Listen to the FID
	- Configure the relays to enable receiving
	- Tell GNURadio to record from line-in 
	- Apply a Peak hold FFT to the input signal to see what we received

Amplification Board
------------

There is another board which amplifies the transmitted and received signals. kicad designs for the amplifier board can be found in the AmplifierBoard folder.  
