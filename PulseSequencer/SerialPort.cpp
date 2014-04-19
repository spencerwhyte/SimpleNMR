#include "SerialPort.h"

SerialPort::SerialPort(){
	serialPort = boost::shared_ptr<boost::asio::serial_port>(new boost::asio::serial_port(ioService));

        int baudRate = 9600;

        const char * portName = "/dev/ttyACM0";
        
        boost::system::error_code errorCode;

        serialPort->open(portName, errorCode);
        if (errorCode) {
                std::cout << "error : port_->open() failed... "
                << portName << " error message: " << errorCode.message().c_str() << std::endl;
                
        }

        // option settings...
        serialPort->set_option(boost::asio::serial_port_base::baud_rate(baudRate));
        serialPort->set_option(boost::asio::serial_port_base::character_size(8));
        serialPort->set_option(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::one));
        serialPort->set_option(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::none));
        serialPort->set_option(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::none));

        boost::thread t(boost::bind(&boost::asio::io_service::run, &ioService));
}


void SerialPort::sendData(char data){
	boost::system::error_code errorCode;
	serialPort->write_some(boost::asio::buffer(&data, 1), errorCode);
	if(errorCode){
		std::cout << "error: " << errorCode.message().c_str() << std::endl;
	}	
}
