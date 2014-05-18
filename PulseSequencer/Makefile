GNURADIO_LIBS=-lgnuradio-audio -lgnuradio-blocks -lgnuradio-analog -L/usr/local/lib -lgnuradio-runtime -lgnuradio-qtgui -lfftw3f -lm -lgnuradio-pmt -lQtNetwork -lQtSvg -lQtGui -lQtCore  
GNURADIO_INCLUDES=-I/usr/local/include -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtSvg




BOOST_LIBS=-lboost_system -lboost_thread 

all: PulseSequencer

PulseSequencer.o:
	g++ -c PulseSequencer.cpp $(GNURADIO_INCLUDES)  

SerialPort.o:
	g++ -c SerialPort.cpp $(GNURADIO_INCLUDES)

SignalProcessing.o:
	g++ -c SignalProcessing.cpp $(GNURADIO_INCLUDES)

Electronics.o:
	g++ -c Electronics.cpp $(GNURADIO_INCLUDES)

PulseSequencer: PulseSequencer.o Electronics.o SignalProcessing.o SerialPort.o
	g++ PulseSequencer.o Electronics.o SignalProcessing.o -o PulseSequencer SerialPort.o $(GNURADIO_LIBS) $(BOOST_LIBS) 

clean:
	rm -rf PulseSequencer PulseSequencer.o SignalProcessing.o Electronics.o SerialPort.o
