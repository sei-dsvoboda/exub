#include <stdio.h>
#include <errno.h>

char* inval = strerror(EINVAL);
char* perm = strerror(EPERM);
printf("Invalid: %s\n", inval); /* Undefined Behavior, invalidated by perm */
printf("Permission: %s\n", perm);
