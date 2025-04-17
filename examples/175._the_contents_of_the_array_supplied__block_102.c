const int buf_size = 100;
char buf[buf_size];
FILE* f = fopen("foo", "r");
if (f == NULL) {
  printf("Can't open foo\n");
}
fgets( buf, buf_size, f);       // Oops, no check for failure
printf("Buf is now %s\n", buf); // Undefined Behavior if fgets() returned NULL
