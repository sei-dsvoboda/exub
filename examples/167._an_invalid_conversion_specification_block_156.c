#include <stdio.h>

void f(int i) {
  printf("%q", i);  // Undefined behavior, %q not defined
}
