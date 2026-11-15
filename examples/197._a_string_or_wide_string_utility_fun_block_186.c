#include <string.h>

char str[] = "abc";
char *p = &(str[4]);  // Valid as long as p is not dereferenced.
strcmp(str, p); // Undefined Behavior
