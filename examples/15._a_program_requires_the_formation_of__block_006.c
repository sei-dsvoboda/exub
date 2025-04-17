void *p1(void), *p2(void);
int f(void), g(void);
int i = (f()
         ? ((int (*)[g()])p1())
         : ((int (*)[])p2()))[0][0];
// Undefined Behavior, g() may not be evaluated if f() returns 0
