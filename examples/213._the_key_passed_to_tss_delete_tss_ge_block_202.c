#include <threads.h>

int func(void *) {
  tss_t key;
  static char str[] = "Hello";
  tss_set(key, str); // Undefined Behavior, key not initialized by tss_create()
  return 0;
}

int foo(void *) {
  thrd_t thr;
  if (thrd_success != thrd_create(&thr, func, 0)) {
    // Handle Error
  }

  int retval;
  if (thrd_success != thrd_join(thr, &retval)) {
    // Handle Error
  }
  return 0;
}
