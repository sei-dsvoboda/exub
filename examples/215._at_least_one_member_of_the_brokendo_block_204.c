#include <time.h>

void func(struct tm *time_tm) {
  time_tm.tm_sec = 61;  // Invalid value, 0 <= tm_sec <= 60
  char *time = asctime(time_tm);  // Undefined Behavior
  // ...
}
