FILE* f = fopen("foo", "rb");
if (f == NULL) {
  printf("Can't open foo\n");
}
const int buf_size = 250;
wchar_t buffer[buf_size];
for (size_t i = 0; i < buf_size; i++) {
  buffer[i] = 0;
}
size_t bytes = fread( buffer, sizeof(wchar_t), buf_size, f);
printf("%lu bytes read\n", bytes);
if (bytes < buf_size) { // hmmm, less bytes read than expected
  printf("Possible partial byte read is %.02x, %c\n", buffer[bytes], buffer[bytes]);
  // Undefined Behavior if buffer has partially-read character
}
