void f(const char *filename, char append_data[BUFSIZ]) {
  char data[BUFSIZ];
  FILE *file;

  file = fopen(filename, "a+");
  if (file == NULL) {
    // ...
  }
  if (fwrite(append_data, sizeof(char), BUFSIZ, file) != BUFSIZ) {
    // ...
  }
  if (fread(data, sizeof(char), BUFSIZ, file) != 0) {  // Undefined Behavior
    // ...
  }
  
  fclose(file);
}
