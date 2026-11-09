#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

static jmp_buf buf;
static void bad(void);

static void g(void) {
  if (setjmp(buf) == 0) {
    printf("setjmp() invoked\n");
  } else {
    printf("longjmp() invoked\n");
  }
}

static void f(void) {
  g();
}

static void setup(void) {
  f();
}

void do_stuff(void) {
  void (*b)(void) = bad;
  // ...
  longjmp(buf, 1);   // Undefined Behavior
}

static void bad(void) {
  printf("Should not be called!\n");
  exit(1);
}

int main(void) {
  setup();
  do_stuff();
}
