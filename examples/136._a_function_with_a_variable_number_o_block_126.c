#include <stdio.h>
#include <stdarg.h>

void f(int last, ...) {
  va_list args;
  int number = va_arg(args, int);  // Undefined Behavior
  va_start( args, last);           // Oops, should precede va_args!
  printf("The number is %d\n", number);
  va_end(args);
}

int main(void) {
  f(1, 2, 3);
  return 0;
}
