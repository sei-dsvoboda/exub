#include <stdio.h>

double sin(double x) {
  return x - 3.0;
}

#include <math.h>
// Undefined Behavior, sin() already defined

int main(void) {
  double p = 3.14; // almost pi
  printf("sin( %f) is %f\n", p, sin(p));
  return 0;
}
