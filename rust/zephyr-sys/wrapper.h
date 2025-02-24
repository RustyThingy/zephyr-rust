// Work around compile error on x86 with clang < 3.9.0 where __float128 is not
// defined
#define _GCC_MAX_ALIGN_T

#include <kernel.h>
#include <all_syscalls.h>
#include <version.h>
#include <device.h>
#include <drivers/uart.h>
#include <uart_buffered.h>
#include <drivers/eeprom.h>
#include <bluetooth/gatt.h>

#ifdef CONFIG_POSIX_CLOCK
#include <posix/time.h>
#endif

// Create a constant we can use from Rust in all cases
#ifdef CONFIG_USERSPACE
const bool RUST_CONFIG_USERSPACE = true;
#else
const bool RUST_CONFIG_USERSPACE = false;
#endif
