static int a;
int f(void) {
  int a;
  {
     extern int a; // not internal!
  }
}
