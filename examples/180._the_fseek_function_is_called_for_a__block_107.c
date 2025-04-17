FILE* f = fopen("foo", "r");
if (f == NULL) {
  printf("Can't open foo\n");
}
fseek(f, 5, SEEK_CUR);  // Undefined behavior
