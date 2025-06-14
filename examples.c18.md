# Examples of Undefined Behavior for Annex J.2 in C18

For details about how to complete development of this document, see the [README](./README.md).

## Normative Text

### 37. For a call to a function without a function prototype in scope, the number of arguments does not equal the number of parameters (6.5.2.2).

``` c
// In another source file:
void copy(char *dst, const char *src) {
  if (!strcpy(dst, src)) {
    // Handle Error
  }
}


// In this source file -- no copy prototype in scope:
void copy();

void g(const char *s) {
  char buf[20];
  copy(buf, s, sizeof buf);  // Undefined Behavior
  // ...
}
```

Cite: TS17961 5.6 \[argcomp\] EXAMPLE 2

Reviewers: svoboda

### 38. For a call to a function without a function prototype in scope where the function is defined with a function prototype, either the prototype ends with an ellipsis or the types of the arguments after default argument promotion are not compatible with the types of the parameters (6.5.2.2).

``` c
// In another source file:
void buginf(const char *fmt, ...) {
  // ...
}


// In this source file -- no buginf prototype in scope:
void buginf();

void h(void) {
  buginf("bug in function %s, line %d\n", __func__, __LINE__);  // Undefined Behavior
  // ...
}
```

Cite: TS17961 5.6 \[argcomp\] EXAMPLE 3

Reviewers: svoboda

### 87. An adjusted parameter type in a function definition is not a complete object type (6.9.1).

``` c
// No previous definition of struct foo
void f(struct foo x) {}   // Undefined Behavior
```

Reviewers: j.myers

### 145. The parameter parmN of a va\_start macro is declared with the register storage class, with a function or array type, or with a type that is not compatible with the type that results after application of the default argument promotions (7.16.1.4).

``` c
#include <stdio.h>
#include <stdarg.h>

void f(float last, ...) {
  register int wrong = 0;
  va_list args;
  va_start( args, wrong);  // Undefined Behavior
  int number = va_arg(args, int);  // Undefined Behavior, no arg!
  printf("The next variadic number is %d\n", number);
  va_end(args);
}
```

Reviewers: svoboda

