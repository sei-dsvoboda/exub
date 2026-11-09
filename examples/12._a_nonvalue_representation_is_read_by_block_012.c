void f(size_t n) {
  int *a = malloc(n * sizeof(int));
  if (a != NULL) {
    for (size_t i = 0; i != n; ++i) {
      a[i] = a[i] ^ a[i]; // Undefined Behavior
    }
    // ...
    free(a);
  }
}
