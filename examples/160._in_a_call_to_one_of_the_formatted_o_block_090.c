#include <stdio.h>

void f(char c) {
  printf("%.3c", c);  // Undefined Behavior
}
