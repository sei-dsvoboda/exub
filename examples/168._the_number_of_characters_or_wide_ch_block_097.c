#include <stdio.h>

void f(int i) {
  printf("%*iX", INT_MAX, i);  // Undefined Behavior
}
