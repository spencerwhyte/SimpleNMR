#include <msp430g2553.h>

/*
By: Spencer Whyte

This controls the polarization and transmit/receive coils by listening
for commands over a serial connection and controlling the relays.

This just turns the MSP430 into a cheap serial to parallel converter

*/

void enableUARTInterrupt(){
	IE2 |= UCA0RXIE; // Enable RX interrupt
}

void disableUARTInterrupt(){
	IE2 &= ~UCA0RXIE;
}


// Initializes the hardware used for the serial connection
// 9600 Baud
// 8N1
void initialize_uart(){
	BCSCTL1 = CALBC1_1MHZ; // Set DCO
	DCOCTL = CALDCO_1MHZ;
	P1SEL = BIT1 + BIT2 ; // P1.1 = Polarization, P1.2=T/R
	P1SEL2 = BIT1 + BIT2 ; // P1.1 = Polarization , P1.=T/R
	UCA0CTL1 |= UCSSEL_2; // SMCLK
	UCA0BR0 = 104; // 1MHz 9600
	UCA0BR1 = 0; // 1MHz 9600
	UCA0MCTL = UCBRS0; // Modulation
	UCA0CTL1 &= ~UCSWRST; // Initialize USCI state machine
}

void wait_for_button_press(){
	__bis_SR_register(LPM0_bits + GIE); // Enter low power mode and wait for the user to press the button
		
}

void initialize_leds(){
	P1DIR |= (BIT0|BIT4|BIT5); // Set the LEDs on P1.0, P1.6 as outputs
	P1OUT = 0; // Indicate that serial transfer is incomplete by displaying the yellow light
}

void main(void)
 
{
	WDTCTL = WDTPW + WDTHOLD; // Stop WDT

	initialize_leds(); // Initialize the LED's

	initialize_uart(); // Initialize the hardware for the serial connection
	
	enableUARTInterrupt();	

	__bis_SR_register(LPM0_bits + GIE); // Enter low power mode and wait for serial transfer to complete

	while(1){

	}
}




// Interrupt for the REPLAY button press
__attribute__((interrupt(PORT1_VECTOR)))
void Port_1_ISR(void)
{
	P1IFG &= ~0x08; // P1.3 IFG cleared
	__bic_SR_register_on_exit(CPUOFF);
}

 
// Echo back RXed character, confirm TX buffer is ready first

__attribute__((interrupt(USCIAB0RX_VECTOR)))
void USCI0RX_ISR(void){
		
	/*
		BEGIN JUNK
		This is only going to slow things down if we send the character back
	*/
	while (!(IFG2&UCA0TXIFG)); // USCI_A0 TX buffer ready?
	UCA0TXBUF = UCA0RXBUF; // Echo back received character
	/*
		END JUNK
	*/
	
	if((UCA0RXBUF & 1) != 0){ // Pin 1.0
		P1OUT |= BIT0;
	}else{
		P1OUT &= ~BIT0;
	}

	if((UCA0RXBUF & 2) != 0){ // Pin 1.4 
                P1OUT |= BIT4;
        }else{
                P1OUT &= ~BIT4;
        }

	if((UCA0RXBUF & 4) != 0){ // Pin 1.5 
                P1OUT |= BIT5;
        }else{
                P1OUT &= ~BIT5;
        }

}



