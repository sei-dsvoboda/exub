#include <stdio.h>
#include <stdarg.h>

void f(int first, ...) {
  va_list args;
  va_start( args);
  vprintf("Hello, %s\n", args);
  printf("First arg is %d\n", first);
  printf("Remaining arg is %p\n", (void*) args); // Undefined Behavior
}
