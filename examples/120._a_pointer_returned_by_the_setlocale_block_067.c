#include <locale.h>

char *locale1 = setlocale(LC_ALL, "");
assert(locale1);
/* ... */
char *locale2 = setlocale(LC_ALL, "");
int size = strlen(locale1);  // Undefined Behavior
