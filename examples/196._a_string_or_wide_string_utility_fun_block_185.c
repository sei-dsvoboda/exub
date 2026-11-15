#include <stddef.h>
#include <string.h>
#include <wchar.h>

void func(void) {
  char str1[] = "0123456789";
  char str2[] = "0000000000";

  wcsncpy(str2, str1, 10 * sizeof(wchar_t)); // Undefined Behavior
}
