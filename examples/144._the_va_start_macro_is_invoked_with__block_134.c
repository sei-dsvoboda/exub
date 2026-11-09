#include <stdarg.h>

  #define PAREN (

void f(int last, ...) {
  va_list args;
  va_start( args, PAREN);   // Undefined Behavior
  va_end(args);
}
