#include <stdarg.h>

void f(int last, ...) {
  va_list args;
  va_start( args, last);
  va_start( args, last);   // Undefined Behavior
  va_end(args);
}
