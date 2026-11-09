void squirrel_away(char **ptr_param) {
  char local[10];
  // Initialize array ...
  *ptr_param = local;
}

void rodent(void) {
  char *ptr;
  squirrel_away(&ptr);
  char c = *ptr;  // Undefined Behavior: referred-to object no longer exists
}
