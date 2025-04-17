union {
  float f;
  int i;
} u;

u.f = 3.14;
u.i = 123;
printf("value is %f\n", u.f); // Undefined Behavior
