union {
  float f;
  int i;
} u;

u.f = 3.14;
u.i++;                        // Undefined Behavior if u.i has non-value representation from previous statement.
printf("value is %f\n", u.f); // Undefined Behavior if u.f has non-value representation from previous statement.
