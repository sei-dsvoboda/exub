// In somefile.c:
long f(long x) {
  return x < 0 ? -x : x;
}

// In otherfile.c:
long f(int x);

int g(int x) {
  return f(x);  // Undefined Behavior
}
