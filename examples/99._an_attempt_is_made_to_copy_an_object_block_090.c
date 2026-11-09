#include <string.h>

void func(void) {
  char c_str[]= "test string";
  char *ptr1 = c_str;
  char *ptr2;

  ptr2 = ptr1 + 3;
  memcpy(ptr2, ptr1, 6);  // Undefined Behavior because of overlapping objects
}
