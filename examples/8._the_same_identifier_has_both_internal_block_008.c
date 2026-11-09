static int a;
int f(void) {
  int a;
  {
     extern int a; // Undefined Behavior, not internal!
  }
}
