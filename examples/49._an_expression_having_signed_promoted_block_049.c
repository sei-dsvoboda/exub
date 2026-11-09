#include <limits.h>
#include <stddef.h>
#include <inttypes.h>

void func(signed long si_a, signed long si_b) {
  signed long result1;
  if (si_a > (LONG_MAX >> si_b)) {
    // Handle Error
  } else {
    result1 = si_a << si_b;  // Undefined Behavior if si_a or si_b < 0
  }
  unsigned int uresult2 = -1 << ui_b; // Undefined Behavior if ui_b != 0
}
