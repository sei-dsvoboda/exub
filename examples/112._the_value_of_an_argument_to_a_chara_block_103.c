void count_preceding_whitespace(const char *s) {
  const char *t = s;
  size_t length = strlen(s) + 1;

  while (isspace(*t) && (t - s < length)) {  // Undefined Behavior, if char is signed and *t = -2
    ++t;
  }

  int c = UCHAR_MAX + 1;
  int result = isspace(c);                    // Undefined Behavior
}
