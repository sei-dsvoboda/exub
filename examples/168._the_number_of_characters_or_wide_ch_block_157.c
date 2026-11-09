#include <stdio.h>
#include <limits.h>

char dest[10];

int f(int i) {
  return snprintf(dest, 10, "%*iX", INT_MAX, i);  // Undefined Behavior
}
