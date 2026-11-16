#include <stdarg.h>
#include <stdio.h>

int print_string(va_list *ap) {
  char* name = va_arg(*ap, char*);  // Undefined Behavior
  // if next arg is (int) 0 and sizeof(int) != sizeof(char*)

  if (name != NULL) {
    printf("Name: %s\n", name);
    return 1;
  }
  printf("No more names\n");
  return 0;
}

int print_names(int first, ...) {
  va_list ap;
  va_start(ap, 456);
  while (print_string(&ap)) {}
  va_end(ap);
  return 1;
}

void func() {
  print_names( 123, "Tom", "Dick", "Harry", (int) 0); // Creates Undefined Behavior
}
