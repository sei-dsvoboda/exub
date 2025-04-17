#include <stdio.h>

char addr[] = "0x12345678"; // not produced by this code
void* ptr;
sscanf( addr, "%p", &ptr);  // Undefined Behavior
