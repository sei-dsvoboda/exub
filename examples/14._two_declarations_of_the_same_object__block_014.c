// In a.c:
extern int i;  // Undefined Behavior

int f(void) {
  return ++i;
}


// In b.c:
short i;       // Undefined Behavior
