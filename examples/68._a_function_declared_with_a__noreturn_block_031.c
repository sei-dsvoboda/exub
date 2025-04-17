#include <stdnoreturn.h>
_Noreturn void f(void) {
  return;  // Undefined Behavior at run-time
}
