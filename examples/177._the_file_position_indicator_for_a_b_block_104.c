FILE* f = fopen("foo", "rb");
if (f == NULL) {
  printf("Can't open foo\n");
}
assert(ftell( f) == 0);
int c = 'A';
c = ungetc( c, f); // Undefined Behavior
