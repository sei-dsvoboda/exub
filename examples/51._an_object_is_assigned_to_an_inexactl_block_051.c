struct s { double i; } f(void);
union {
  struct {
    int f1;
    struct s f2;
  } u1;
  struct {
    struct s f3;
    int f4;
  } u2;
} g;

void func(void) {
  g.u2.f3 = g.u1.f2; // Undefined Behavior
}
