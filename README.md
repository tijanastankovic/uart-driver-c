# uart-driver-c

## Overview

This project implements a simple UART driver in C using memory-mapped registers and polling.

The project was created to practice low-level programming concepts commonly used in embedded and firmware development, including:
- register access
- bit manipulation
- polling
- pointer usage
- hardware/software interaction

---

## Functionality

The driver supports:
- UART initialization
- character transmission
- character reception
- string transmission

The example application in `main.c` demonstrates UART echo functionality by receiving a character and sending it back.

---

## Project Structure

```
uart-driver-c/
│
├── include/
│   └── uart.h
│
├── src/
│   ├── uart.c
│   └── main.c
│
└── README.md
```

## Implementation Details

Memory-Mapped Registers

UART registers are accessed through fixed memory addresses using pointers and the volatile keyword.

Example:
```#define UART_DR (*(volatile uint32_t*)(UART_BASE_ADDR + 0x00))```

Polling-Based Communication

The driver uses polling to check UART status before transmitting or receiving data.

Example:
```
while (!(UART_SR & UART_TX_READY))
{
    // wait until transmitter is ready
}
```

Bit Manipulation

Bit masks are used to configure and check register values.

Example: ``` #define UART_ENABLE (1 << 0) ```

## Example Flow

1. Initialize UART
2. Send initialization message
3. Wait for received character
4. Send received character back

## Concepts Practiced

- low-level C programming
- pointer arithmetic
- register access
- polling
- embedded software structure
- hardware interaction

## Possible Improvements

- interrupt-based communication
- configurable baud rate
- FIFO support
- timeout handling
- support for multiple UART instances
