#include <stdio.h>
int main(float argc) {  // Undefined Behavior
  printf("main argument count:%f\n", argc); 
  return 0;
}
