#include <stdio.h>

void f(int* pi) {
  printf("%lp", pi);  /* 'l' not defined for %p */ }
