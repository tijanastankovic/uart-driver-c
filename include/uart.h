#ifndef UART_H
#define UART_H

#include <stdint.h>

#define UART_BASE_ADDR 0x400C000

#define UART_DR (*(volatile uint32_t*)(UART_BASE_ADDR + 0x00))
#define UART_SR (*(volatile uint32_t*)(UART_BASE_ADDR + 0x04))
#define UART_CR (*(volatile uint32_t*)(UART_BASE_ADDR + 0x08))

#define UART_TX_READY (1 << 0)
#define UART_RX_READY (1 << 1)

#define UART_ENABLE (1 << 0)

void uart_init(void);

void uart_send_char(void);

char uart_recieve_char(void);

void uart_send_string(const char* str);

#endif
