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

## Circuit Connection

| ATmega328P Pin | Connects To       | Description                                                              |
|----------------|-------------------|--------------------------------------------------------------------------|
| PD1 (TX)       | USB-TTL RX        | Transmits UART data from the microcontroller to the USB-TTL adapter.     |
| GND            | USB-TTL GND       | Common ground reference between the microcontroller and USB-TTL adapter. |
| VCC            | 5V Power Supply   | Powers the ATmega328P (from a regulator or USB-TTL if supported).        |

>  **Note:** Only **TX** and **GND** are required for one-way serial output (sending data from microcontroller to PC). Connect RX (PD0) only if two-way communication is needed.


## License
**MIT License**
