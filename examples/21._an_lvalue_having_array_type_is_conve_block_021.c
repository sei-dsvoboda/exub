void f(void) {
  register int a[3];
  int *p = a;  // Undefined Behavior
  a[0] = 1;
  p[0];
}
