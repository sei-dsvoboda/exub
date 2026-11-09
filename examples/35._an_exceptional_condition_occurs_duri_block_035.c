int add(void) {
  int x;
  scanf("%d", &x);  // Initialize x with an untrusted value, which could be INT_MAX
  return x + 1;     // Undefined Behavior
}
