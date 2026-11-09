void f1(void) {
  char *locale = setlocale(LC_ALL, 0);
  if (locale != NULL) {
    char *cats[8];
    char *sep = locale;
    cats[0] = locale;
    int i;

    if (sep) {
      for (i = 0; (sep = strstr(sep, ";:")) && i < 8; ++i) {
        *sep = '\0';   // Undefined Behavior
        cats[i] = ++sep;
      }
    }
  }
}
