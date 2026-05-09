#include uart.h

void uart_init(void)
{
  UART_CR |= UART_ENABLE;
}

void uart_send_char(char c)
{
  while (!(UART_SR & UART_TX_READY)) // polling
    {
      // wait
    }
  UART_DR = c;
}

