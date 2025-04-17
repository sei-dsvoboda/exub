#include <stdio.h>

#define SIZE 1024
char buf[SIZE];
FILE _file = fopen("foo", "r");
if (file == 0 ||
    setvbuf(file, buf, buf ? IOFBF : IONBF, SIZE) != 0) {
  /* Handle error */
}
/* ... */
buf[0] = '\0';  // Undefined Behavior
