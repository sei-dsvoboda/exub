#include <stdatomic.h>
#include <stdbool.h>

static _Bool flag;     // To eliminate undefined behavior, make this atomic

void init_flag(void) {
  flag = false;
}

// This function has a data race in the access of flag
// It also has a race condition in the read/modify/write sequence
// that is independent of the data race.
void toggle_flag(void) {
  flag = !flag;        // Undefined Behavior: data race
}

bool get_flag(void) {
  return flag;         // Undefined Behavior: data race
}
