#include <threads.h>

mtx_t m;
if (thrd_success != mtx_init(&m, mtx_plain)) {
  // Handle Error
}

if (thrd_success != mtx_unlock(&m)) {   // Undefined Behavior
  // Handle Error
}

mtx_destroy(&m);
