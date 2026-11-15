int init(void) {return -1;}

int compute_remainder(int x) {
  int y = init(); // -1
  return x % y;   // Undefined Behavior
}

int f(void) {
  return compute_remainder(INT_MIN);
}
