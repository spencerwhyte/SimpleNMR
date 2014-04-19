#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>
#include <boost/system/error_code.hpp>
#include <boost/system/system_error.hpp>
#include <boost/bind.hpp>
#include <boost/thread.hpp>

/*
        Written by: Spencer Whyte

	The purpose of this class is to provide a basic interface to the serial port.
*/
class SerialPort 
{

        boost::shared_ptr<boost::asio::serial_port> serialPort;
        boost::asio::io_service ioService;
        // Sets up the serial port and all of it's parameters 
public:
        SerialPort();

	// Send a single serial byte
	void sendData(char data);

};

