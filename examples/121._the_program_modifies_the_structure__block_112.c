void f2(void) {
  struct lconv *conv = localeconv();
  if ('\0' == conv->decimal_point[0]) {
    conv->decimal_point = ".";   // Undefined Behavior
  }
  if ('\0' == conv->thousands_sep[0]) {
    conv->thousands_sep = ",";   // Undefined Behavior
  }
}
