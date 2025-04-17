#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

/* Assume this function is called with >INT_MAX arguments */
void f(int unused, ...) {
  va_list args;
  va_start( args, unused);

  static unsigned int size = (unsigned int) INT_MAX + 1U;

  char format_string[size*2 + 1]; // will be "%c%c%c..."
  // This assumes that SIZE_MAX > 2*UINT_MAX
  for (unsigned int i = 0; i < size; i += 2) {
    format_string[i] = '%';
    format_string[i+1] = 'c';
  }
  format_string[size*2] = '\0';

  vscanf(format_string, args);    // Undefined Behavior
}
