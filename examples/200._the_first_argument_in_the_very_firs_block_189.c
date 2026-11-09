#include <string.h>

static char str[] = "?a???b,,,#c";
char *t;
t = strtok(NULL, "?");  // Undefined Behavior
