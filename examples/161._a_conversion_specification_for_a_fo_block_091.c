#include <stdio.h>

void f(int i) {
  printf("%*iX", i);  // Undefined Behavior
}
