void f(void) {
  float a = 4.0 / 7;

  #pragma STDC FP_CONTRACT OFF
  // Undefined Behavior

  a *= 7;
  printf("A is %f\n", a);
}
