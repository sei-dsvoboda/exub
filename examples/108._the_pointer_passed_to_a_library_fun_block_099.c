void f1(size_t nchars) {
  char *p = malloc(nchars);
  if (nchars == SIZE_MAX) {
    // Handle Error
  }
  const size_t n = nchars + 1;
  if (p) {
    memset(p, 0, n); // Undefined Behavior, 1-byte buffer overflow
    // ...
  }
}
