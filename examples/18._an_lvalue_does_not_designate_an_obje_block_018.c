void func(void) {
  int *p;
  {
    int i = 1;
    p = &i;
    *p = 2;  // ok
  }
  *p = 3;    // Undefined Behavior

  int a[10];
  a[1] = 4;  // ok
  a[10] = 5; // Undefined Behavavior
}
