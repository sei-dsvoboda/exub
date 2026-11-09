void f(size_t num_elem) {
  int error_condition = 0;
  int *x = malloc(num_elem * sizeof(int));
  if (x == NULL) {
    // ...
  }
  // ...
  if (error_condition == 1) {
    // ...
    free(x);
  }
  // ...
  free(x);   // Undefined Behavior
  x = NULL;
}
