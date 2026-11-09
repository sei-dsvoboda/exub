void f1(void) {
  char *p = "string literal";
  p[0] = 'S';  // Undefined Behavior
  // ...
}
