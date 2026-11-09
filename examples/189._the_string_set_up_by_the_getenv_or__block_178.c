void f3(void) {
  char *shell_dir = getenv("SHELL");

  if (shell_dir != NULL) {
    char *slash = strrchr(shell_dir, '/');
    if (slash) {
      *slash = '\0';  // Undefined Behavior
    }
    // Use shell_dir...
  }
}
