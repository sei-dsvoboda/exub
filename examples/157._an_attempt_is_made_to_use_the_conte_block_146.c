#include <stdio.h>

#define SIZE 1024
char buf[SIZE];
FILE *file = fopen("foo", "r");
if (file == NULL ||
    setvbuf(file, buf, _IOFBF, SIZE) != 0) {
  // Handle Error
}
// ...
putchar(buf[0]);  // Undefined Behavior
