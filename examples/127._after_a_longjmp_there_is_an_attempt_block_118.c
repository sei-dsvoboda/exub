jmp_buf buf;

void f(void) {
  int i = 0;
  if (setjmp(buf) != 0) {
    printf("%i\n", i);      // Undefined Behavior
    // ...
  }
  i = 2;
  g();
}

void g(void) {
  // ...
  longjmp(buf, 1);
}
