FILE *opener(const char *filename) {
  fpos_t offset;
  if (filename == NULL) {
    // ...
  }

  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    // ...
  }

  memset(&offset, 0, sizeof(offset));
  if (fsetpos(file, &offset) != 0) {  // Undefined Behavior
    // ...
  }

  return file;
}
