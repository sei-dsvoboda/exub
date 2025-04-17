#include <stdio.h>
#include <stdarg.h>

void g(va_list args) {
  int number = va_arg(args, int);
  printf("The first variadic number is %d\n", number);
}

void f(int last, ...) {
  va_list args;
  va_start( args, last);
  g(args);
  int number = va_arg(args, int);  // Undefined Behavior
  printf("The next variadic number is %d\n", number);
  va_end(args);
}

void main(void) {
  f(1, 2, 3);
}
