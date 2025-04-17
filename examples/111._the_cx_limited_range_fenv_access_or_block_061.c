void f(void) {
  float a = 4.0 / 7;
  #pragma STDC FP_CONTRACT OFF
  a *= 7;   // Undefined Behavior
  printf("A is %f\n", a);
}
