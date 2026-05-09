#include uart.h

void uart_init(void)
{
  UART_CR |= UART_ENABLE;
}
