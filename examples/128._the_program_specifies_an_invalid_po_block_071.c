#include <signal.h>

void *handler = NULL;
signal(SIG_IGN, handler);  // Undefined Behavior
