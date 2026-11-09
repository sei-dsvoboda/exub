#include <stdio.h>
#include <threads.h>
#include <time.h>

struct tm *now = NULL;

int how_soon_is_now(void *) {
  time_t n1;
  if ((time_t) -1 == time(&n1)) {
    // Handle Error
  }
  now = localtime(&n1);
  return 0;
}

int main(void) {
  thrd_t thr;
  if (thrd_success != thrd_create(&thr, how_soon_is_now, 0)) {
    // Handle Error
  }

  int retval;
  if (thrd_success != thrd_join(thr, &retval)) {
    // Handle Error
  }

  char buf[1024];
  puts("The time is: ");
  if (strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S %Z",
               now) > 0) { // Undefined Behavior
    puts(buf);
  }
  return 0;
}
