#include <stdio.h>

int add(int first, int second, ...);

int main () {
  int result = add(2, 3, 5, 7, 11, -1); // Undefined Behavior
  printf("Sum is %d\n", result);
  return 0;
}
