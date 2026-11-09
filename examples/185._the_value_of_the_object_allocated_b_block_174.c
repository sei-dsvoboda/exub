#include <stdio.h>
#include <stdlib.h>

unsigned char *p = malloc(10);
if (p != NULL) {
  printf("p[0] is %c\n", p[0]);  // Undefined Behavior
}
