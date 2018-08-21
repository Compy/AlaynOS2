#ifndef MICROPY_INCLUDED_RPI_RPI_H
#define MICROPY_INCLUDED_RPI_RPI_H

#include <stdint.h>
#include "bcm283x_systimer.h"

extern systimer_t *systimer;
#define MMIO_BASE       0x3F000000
#define SYSTMR_LO        ((volatile unsigned int*)(MMIO_BASE+0x00003004))
#define SYSTMR_HI        ((volatile unsigned int*)(MMIO_BASE+0x00003008))

volatile uint64_t systime(void);

extern void isr_irq_timer(void);
extern void isr_irq_mini_uart(void);

void rpi_init();

uint32_t rpi_freq_core();
uint32_t rpi_freq_cpu();

void wait_cycles(unsigned int n);
void wait_msec(unsigned int n);

#endif // MICROPY_INCLUDED_RPI_RPI_H
