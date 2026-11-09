void func(double d_a, long double big_d) {
  double d_b = (float)big_d;  // Undefined Behavior, if outside range
  float f_a = (float)d_a;     // Undefined Behavior, if outside range
  float f_b = (float)big_d;   // Undefined Behavior, if outside range
}
