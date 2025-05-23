#define F_CPU 16000000UL  // 16 MHz Clock speed
#include <avr/io.h>
#include <util/delay.h>

void UART_init(unsigned int ubrr) {
	// Set baud rate
	UBRR0H = (unsigned char)(ubrr >> 8);
	UBRR0L = (unsigned char)ubrr;
	
	// Enable transmitter
	UCSR0B = (1 << TXEN0);
	
	// Set frame format: 8 data bits, 1 stop bit, no parity
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);  // 8-bit data
}

void UART_transmit(unsigned char data) {
	// Wait for empty transmit buffer
	while (!(UCSR0A & (1 << UDRE0)));
	
	// Put data into buffer, sends the data
	UDR0 = data;
}

int main(void) {
	UART_init(103);  // UBRR value for 9600 baud with 16 MHz clock

	while (1) {
		UART_transmit(0x02);  // Transmit binary 00000010
		_delay_ms(100);       // Delay to see individual frames on oscilloscope
	}
}


