int next(int *ip) [[reproducible]] {
void adjust(unsigned *restrict x, unsigned *restrict y) [[reproducible]] {
    *x -= 3;  // Undefined Behavior, not reproducible
    *y += 2;  // Undefined Behavior, not reproducible
}
