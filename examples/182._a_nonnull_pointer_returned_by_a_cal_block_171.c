#include <stdlib.h>
#include <assert.h>

size_t size = 0;
int *array = malloc(size * sizeof(int));
assert(array);
array[0] = 123;  // Undefined Behavior, out-of-bounds write
