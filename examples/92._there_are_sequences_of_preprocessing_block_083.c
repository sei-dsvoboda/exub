#include <string.h>

void func(const char *src) {
  // Validate the source string; calculate size
  char *dest;
  // malloc() destination string
  memcpy(dest, src,
    #ifdef PLATFORM1
      12  // Undefined Behavior, if memcpy() defined as macro
    #else
      24
    #endif
  );
  // ...
);
