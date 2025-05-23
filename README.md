# UART Transmitter (AVR C)

This project initializes UART on an ATmega328P microcontroller to send a byte (`0x02`) every 100 ms at 9600 baud. It's useful for debugging or testing UART output with an oscilloscope or terminal.This project is done in the university signals lab.

## Features
- 9600 baud rate UART transmission
- Manual transmission using polling
- 100ms delay between bytes

## Technologies Used
- C
- AVR-GCC
- AVR Libc
- Atmel Studio / Microchip Studio

## Usage
1. Flash to ATmega328P using ISP programmer
2. Connect TX to USB-TTL adapter or oscilloscope
3. Observe `0x02` being sent repeatedly

## License
MIT License
