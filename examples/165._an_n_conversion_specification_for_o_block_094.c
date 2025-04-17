#include <stdio.h>

void f(int* pi) {
  printf("%-n", pi);  // Undefined Behavior
}
