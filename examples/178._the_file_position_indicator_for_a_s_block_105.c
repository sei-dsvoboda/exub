FILE* f = fopen("foo", "rb");
if (f == NULL) {
  printf("Can't open foo\n");
}
const int buf_size = 125;
char buffer[buf_size];
size_t bytes = fread( buffer, 1, buf_size, f);
printf("Read %ld bytes\n", bytes);
if (bytes < buf_size) { // uh-oh, error
  long pos = ftell( f); // Undefined Behavior if fread() had error
  printf("File is at %lu position \n", pos);
}
