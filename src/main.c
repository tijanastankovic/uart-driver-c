#include "uart.h"

int main(void)
{
  uart_init();

  uart_send_string("UART initialized\n");

  while(1)
    {
      char received = uart_receive_char();

      uart_send_char(recieved);
    }

  return 0;
}
