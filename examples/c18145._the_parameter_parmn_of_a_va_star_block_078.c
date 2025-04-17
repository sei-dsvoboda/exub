#include <stdio.h>
#include <stdarg.h>

void f(float last, ...) {
  register int wrong = 0;
  va_list args;
  va_start( args, wrong);  // Undefined Behavior
  int number = va_arg(args, int);  // Undefined Behavior, no arg!
  printf("The next variadic number is %d\n", number);
  va_end(args);
}
