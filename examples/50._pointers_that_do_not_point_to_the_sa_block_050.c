struct {
  int x;
  int y;
} a, b;
if (&a.y < &b.y) {  // Undefined Behavior
  // ...
}
