#include <stdio.h>

void f(char* s) {
  printf("%0s", s);  // Undefined Behavior
}
