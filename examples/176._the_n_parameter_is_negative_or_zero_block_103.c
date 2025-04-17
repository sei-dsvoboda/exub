const int buf_size = -1;      // Oops, should be > 0
char buf[buf_size];
FILE* f = fopen("foo", "r");
if (f == NULL) {
  printf("Can't open foo\n");
}
fgets( buf, buf_size, f);     // Undefined Behavior
