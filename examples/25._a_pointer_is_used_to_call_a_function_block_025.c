typedef char *(*fp_t)(void);
fp_t fp;
void f(void) {
  char *c;
  fp = (fp_t)strchr;  // from <string.h>
  c = fp();     // Undefined Behavior, incorrect arguments
}
