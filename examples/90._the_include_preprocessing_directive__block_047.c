#define str(s) # s
#define xstr(s) str(s)
#define INCFILE(n) z ## n

#include xstr(INCFILE(3).h
// Undefined Behavior: #include "z3.h"
