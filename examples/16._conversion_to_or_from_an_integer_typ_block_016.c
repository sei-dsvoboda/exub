void func(float f_a) {
  int i_a;
  i_a = f_a;  // Undefined Behavior if the integral part of f_a cannot be represented.
}
