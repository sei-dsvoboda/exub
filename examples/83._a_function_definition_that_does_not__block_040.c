int next(int *ip) [[reproducible]] {
  return *ip++; // Undefined Behavior, not idempotent
}
