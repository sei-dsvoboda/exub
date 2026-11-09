#define MAX_MACHINE_NAME_LENGTH 64
char *get_machine_name(const char *path) {
  char *machine_name = malloc(MAX_MACHINE_NAME_LENGTH + 1);
  if (machine_name == NULL) {
    return NULL;
  }

  while (*path != '\\') {
    *machine_name++ = *path++;  // Undefined Behavior, if \ not in path
  }

  *machine_name = '\0';
  return machine_name;
}

void f(void) {
  char* host = get_machine_name("foo");  // no '\'
  puts(host);
}
