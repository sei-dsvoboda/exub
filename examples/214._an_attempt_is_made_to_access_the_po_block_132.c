#include <stdio.h>
#include <threads.h>
#include <time.h>

char* now = 0;

int bar(void*) {
  time_t n1;
  if ((time_t) -1 == time(&n1)) {
    /* Handle error */
  }
  struct tm* n2 = localtime(&n1);
  now = asctime(n2);
  return 0;
}

void foo(void) {
  thrd_t thr;
  if (thrd_success != thrd_create(&thr, bar, 0)) {
    /* Handle error */
  }

  int retval;
  if (thrd_success != thrd_join(thr, &retval)) {
    /* Handle error */
  }

  printf("The time is %s\n", now); // Undefined Behavior
}
