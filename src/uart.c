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

char uart_receive_char()
{
  while (!(UART_SR & UART_RX_READY)) 
    {
      // wait
    }
  
  return (char) UART_DR;
}

void uart_send_string(const char* str)
{
  while (*str != '\0') 
    {
      uart_send_char(*str);
      str++;
    }
}
