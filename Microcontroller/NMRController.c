#include <msp430g2553.h>

/*
By: Spencer Whyte

This controls the polarization and transmit/receive coils by listening
for commands over a serial connection and controlling the relays.

*/


int dataIndex = 0; 
char data[67];
int hasCompletedSerialTransfer = 0;


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

void initialize_button(){
	P1OUT |= 8;
	P1REN |= 8;
	P1IE |= 0x08; // P1.3 interrupt enabled
	P1IFG &= ~0x08; // P1.3 IFG cleared
}

void wait_for_button_press(){
	__bis_SR_register(LPM0_bits + GIE); // Enter low power mode and wait for the user to press the button
		
}

void initialize_leds(){
	P1DIR |= (BIT0|BIT6); // Set the LEDs on P1.0, P1.6 as outputs
	P1OUT = BIT0; // Indicate that serial transfer is incomplete by displaying the yellow light
}

void main(void)
 
{
	WDTCTL = WDTPW + WDTHOLD; // Stop WDT

	initialize_leds(); // Initialize the LED's

	initialize_uart(); // Initialize the hardware for the serial connection
	
	enableUARTInterrupt();	

	__bis_SR_register(LPM0_bits + GIE); // Enter low power mode and wait for serial transfer to complete

	disableUARTInterrupt();

	P1OUT = BIT6; // Indicate completion of serial transfer by turning on the green LED

	while(1){
		initialize_button();	
		wait_for_button_press();	
		P1OUT = ~P1OUT;
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
	while (!(IFG2&UCA0TXIFG)); // USCI_A0 TX buffer ready?
	UCA0TXBUF = UCA0RXBUF; // Echo back received character

	/*
	if(UCA0RXBUF == '0'){ // We just received a 0
		data[dataIndex] = 0;	
		dataIndex ++;	
	}else if (UCA0RXBUF == '1'){ // We just received a 1
		
		data[dataIndex] = 1;	
		dataIndex++;
	}
	*/

	//if(dataIndex == 67){
      	//	__bic_SR_register_on_exit(CPUOFF); // Exit low power mode	
	//}	
	
	/* 
	if (UCA0RXBUF == 'R') 
		P1OUT |= BIT0; // Turn on P1.0 red LED when R is received
	else if (UCA0RXBUF == 'r') 
		P1OUT &= ~BIT0; // Turn off P1.0 red LED when r is received
	if (UCA0RXBUF == 'G') 
		P1OUT |= BIT6; // Turn on P1.6 green LED when G is received
	else if (UCA0RXBUF == 'g') 
		P1OUT &= ~BIT6; // Turn off P1.6 green LED when g is received
	*/


	if((UCA0RXBUF & 1) != 0){ // Turn on the red red LED
		P1OUT |= BIT0;
	}else{
		P1OUT &= ~BIT0;
	}

	if((UCA0RXBUF & 2) != 0){ // Turn on the green LED
                P1OUT |= BIT6;
        }else{
                P1OUT &= ~BIT6;
        }



}



