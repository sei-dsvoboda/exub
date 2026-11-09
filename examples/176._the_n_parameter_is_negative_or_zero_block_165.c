char buf[10];
FILE *f = fopen("foo", "r");
if (f == NULL) {
  printf("Can't open foo\n");
}
const int buf_size = 0;       // Oops, meant to be 10!
fgets( buf, buf_size, f);     // Undefined Behavior
