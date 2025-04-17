#include <stdio.h>
#include <stdarg.h>

int main(void) {
  int x[] = {1, 2};
  int y[] = {3, 4};
  my_printf("My data", x, y);
}

void my_printf(const char* prefix, ...) {
  va_list args;
  int *x;
  int *y;
  va_start( args, prefix);
  x = va_arg( args, int*);   // Valid
  y = va_arg( args, void()); // Undefined Behavior
  va_end( args);
  printf("%s: [%d, %d], [%d, %d]\n", prefix, x[0], x[1], y[0], y[1]);
}
