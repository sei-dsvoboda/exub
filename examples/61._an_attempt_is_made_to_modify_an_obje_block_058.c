const int **ipp;
int *ip;
const int i = 42;

void func(void) {
  *ipp = &i;  // Valid
  *ip = 0;    // Undefined Behavior, modifies constant i (was 42)
  ipp = &ip;  // Constraint violation
}
