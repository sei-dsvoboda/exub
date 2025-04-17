#include <stdio.h>
#include <stdarg.h>

void f(int first, ...) {
  int local = 0;
  va_list args;
  va_start( args, local);          // Oops, not first fixed arg
  vprintf("Hello, %s\n", args);    // Undefined Behavior
}
