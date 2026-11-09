#include <assert.h>

struct {
  int x;
  int y;
} s;
assert(s);  // Undefined Behavior
