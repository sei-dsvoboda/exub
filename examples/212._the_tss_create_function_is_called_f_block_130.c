#include <threads.h>

void destructor(void* arg) {
  tss_t key;
  if (thrd_success != tss_create(&key, 0)) { // Undefined Behavior
    /* Handle error */
  }
}

int func(void*) {
  tss_t key;
  if (thrd_success != tss_create(&key, destructor)) {
    /* Handle error */
  }
  static char str[] = "Hello";
  tss_set(key, str);
  return 0;
}

int foo(void*) {
  thrd_t thr;
  if (thrd_success != thrd_create(&thr, func, 0)) {
    /* Handle error */
  }

  int retval;
  if (thrd_success != thrd_join(thr, &retval)) {
    /* Handle error */
  }
  return 0;
}
