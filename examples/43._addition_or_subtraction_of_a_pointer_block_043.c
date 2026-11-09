#define TABLESIZE 100
static int table[TABLESIZE];

int *f(int index) {
  if (index < TABLESIZE) {  // doesn't check for negative values
    return table + index;   // Undefined Behavior
  }
  return NULL;
}

int *g(void) {
  return f(getc()); // could be EOF (-1)
}
