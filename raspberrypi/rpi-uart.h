#include <stdint.h>

void rpi_uart_init();
void rpi_uart_putc(char c);
uint32_t rpi_uart_getc(void);
uint32_t rpi_uart_rx_state(void);

void isr_irq_rpi_uart(void);