char src[] = "This is a test";
const int string_size = strlen(src) + 1;
char dest[string_size];
int length = strxfrm(dest, src, string_size);
if (length >= string_size) {
  fprintf(stderr,"Transform error on %s\n", dest); // Undefined Behavior
}
