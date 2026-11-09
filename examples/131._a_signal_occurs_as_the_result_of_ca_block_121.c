void term_handler(int signum) {
  // SIGTERM handling specific ...
}

void int_handler(int signum) {
  // SIGINT handling specific ...
  if (raise(SIGTERM) != 0) {   // Undefined Behavior
    // Handle Error
  }
}

int main(void) {
  if (signal(SIGTERM, term_handler) == SIG_ERR) {
    // Handle Error
  }
  if (signal(SIGINT, int_handler) == SIG_ERR) {
    // Handle Error
  }

  // Program code ...

  if (raise(SIGINT) != 0) {
    // Handle Error
  }

  // More code ...

  return EXIT_SUCCESS;
}
