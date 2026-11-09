#include <stdio.h>

void func(void) {
  static volatile int **ipp;
  static int *ip;
  static volatile int i = 0;

  printf("i = %d.\n", i);

  ipp = &ip;          // Undefined Behavior
  ipp = (int **) &ip; // Undefined Behavior
  *ipp = &i;          // Valid
  if (*ip != 0) {     // Valid
    // ...
  }
}
