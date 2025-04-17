#include <threads.h>

mtx_t m;
if (thrd_success != mtx_init(&m, mtx_plain)) {
  /* Handle error */
}

if (thrd_success != mtx_lock(&m)) {
  /* Handle error */
}

if (thrd_success != mtx_lock(&m)) {  // Undefined Behavior
  /* Handle error */
}

mtx_destroy(&m);
