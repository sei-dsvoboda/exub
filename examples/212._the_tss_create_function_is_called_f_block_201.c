#include <threads.h>

void destructor(void *arg) {
  tss_t key;
  if (thrd_success != tss_create(&key, 0)) { // Undefined Behavior
    // Handle Error
  }
}

int func(void *) {
  tss_t key;
  if (thrd_success != tss_create(&key, destructor)) {
    // Handle Error
  }
  static char str[] = "Hello";
  tss_set(key, str);
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
