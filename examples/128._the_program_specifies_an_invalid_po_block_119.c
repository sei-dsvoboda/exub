#include <signal.h>

void *handler = NULL;
signal(SIGALRM, handler);  // Undefined Behavior
