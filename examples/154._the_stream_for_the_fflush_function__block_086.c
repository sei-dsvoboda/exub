#include <stdio.h>

FILE* f = fopen("foo", "r");
fflush(f);  // Undefined Behavior
