void f(void) {
  /* register */ int x;  // address of x not taken, so x could be stored in a register
  int y = x;             // Undefined Behavior
}
