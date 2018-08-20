#ifndef MICROPY_INCLUDED_RPI_BCM283X_H
#define MICROPY_INCLUDED_RPI_BCM283X_H

#include <stdint.h>

//#define IO_BASE   0x20000000U
#define IO_BASE     0x3F000000U

#define IOREG(X)  (*(volatile uint64_t *) (X))

#endif // MICROPY_INCLUDED_RPI_BCM283X_H
