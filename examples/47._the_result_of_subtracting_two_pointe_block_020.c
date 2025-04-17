#include <stdlib.h>
size_t size = 1 + (SIZE_MAX / 2); // this assumes sizeof(size_t) == sizeof(ptrdiff_t)
char* x = malloc(size);
assert(x != 0);
char* start = x;
char* too_far = x + size;
ptrdiff_t too_big = too_far - start;  // Undefined Behavior
