void f(void) {
  int *i_ptr;
  char c;
  i_ptr = (int *)&c;  // Undefined Behavior
  // ...
}
