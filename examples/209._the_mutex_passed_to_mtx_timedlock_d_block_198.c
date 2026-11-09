#include <threads.h>
#include <time.h>

mtx_t m;
if (thrd_success != mtx_init(&m, mtx_plain)) { // Oops, should be mtx_timed!
  // Handle Error
}

struct timespec ts;
if (0 == timespec_get(&ts, TIME_UTC)) {
  // Handle Error
}
ts.tv_sec += 1; // 1 second from now

if (thrd_success != mtx_timedlock(&m, &ts)) { // Undefined Behavior
  // Handle Error
}

mtx_destroy(&m);
