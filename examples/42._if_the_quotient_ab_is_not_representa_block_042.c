int init(void) {return -1;}

int remainder(int x) {
  int y = init(); // -1
  return x % y;   // Undefined Behavior
}

int f(void) {
  return remainder(INT_MIN);
}
