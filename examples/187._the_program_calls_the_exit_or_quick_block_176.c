#include <stdlib.h>

void exit1(void) {
  // Cleanup code ...
  return;
}

void exit2(void) {
  extern int some_condition;
  if (some_condition) {
    // More cleanup code ...
    exit(0);  // Undefined Behavior when invoked within exit()
  }
  return;
}

int main(void) {
  if (atexit(exit1) != 0) {
    // Handle Error
  }
  if (atexit(exit2) != 0) {
    // Handle Error
  }
  // Program code ...
  return 0;
}
