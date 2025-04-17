#include <stdarg.h>

// Undefined Behavior
#undef va_arg

int va_arg(void) {return 123;}
