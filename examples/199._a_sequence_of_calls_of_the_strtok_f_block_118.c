#include <string.h>
#include <threads.h>

int bar(void*) {
  char *t = strtok(NULL, "#,"); // Undefined Behavior
  return t[0];
}


char str[] = "?a???b,,,#c";
char *t = strtok(str, "?");
thrd_t thr;
if (thrd_success != thrd_create(&thr, bar, 0)) {
  /* Handle error */
}

t = strtok(NULL, ","); // Undefined Behavior

int retval;
if (thrd_success != thrd_join(thr, &retval)) {
  /* Handle error */
}
