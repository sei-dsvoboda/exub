// Includes declaration: void *malloc(size_t size)
#include <stdlib.h>

static void *malloc(int nbytes); // Undefined Behavior: int vs size_t
