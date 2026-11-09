#define CUBE(X) ((X) * (X) * (X))
 
void func(void) {
  int i = 2;
  int a = 81 / CUBE(++i);  // Undefined Behavior
  // ...
}
