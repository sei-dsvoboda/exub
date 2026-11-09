#include <stdarg.h>
#include <stdio.h>

int print_string(va_list *ap) {
  char* name = va_arg(*ap, char*);  // Undefined Behavior, if value is NULL
  if (name != NULL) {
    printf("Name: %s\n", name);
  } else {
    printf("No more names\n");
  }
  return 0;
}

int print_names(int count, ...) {
  va_list ap;
  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    print_string(&ap);
  }
  va_end(ap);
  print_string(NULL);               // Creates Undefined Behavior
  return 1;
}


void func() {
  print_names( 3, "Tom", "Dick", "Harry");
}
