char src[] = "This is a test";
const int string_size = strlen(src) + 1;
char dest[string_size - 1];   // Oops, too small
int length = strxfrm(dest, src, string_size);
// Undefined Behavior
