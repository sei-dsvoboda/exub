void f(int x) {
  printf("x is %d\n", x);
}

void* p = (void*) f;
int (*g)(int) = p;
int y = g(123); // Undefined Behavior
printf("y is %d\n", y);
