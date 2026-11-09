#include <stdlib.h>
#include <setjmp.h>

jmp_buf env;
int val;

void exit1(void) {
  longjmp(env, 1);  // Undefined Behavior
}

int main(void) {
  if (atexit(exit1) != 0) {
    // Handle Error
  }
  if (setjmp(env) == 0) {
    exit(0);
  } else {
    return 0;
  }
}
