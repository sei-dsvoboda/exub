int init(void) {return 0;}

int divide(int x) {
  int y = init(); // 0
  return x / y;   // Undefined Behavior
}
