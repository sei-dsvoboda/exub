// In bash/bashline.h:
extern char *bash_groupname_completion_function(const char *, int);
// Undefined Behavior, the identifier exceeds 31 characters


// In a.c:
#include <bashline.h>

void w(const char *s, int i) {
  bash_groupname_completion_function(s, i);
  // This function was taken from GNU Bash, version 3.2.
  // https://www.gnu.org/software/bash/
}


// In b.c:
int bash_groupname_completion_funct; 
// Undefined Behavior, identifier not unique within 31 characters
