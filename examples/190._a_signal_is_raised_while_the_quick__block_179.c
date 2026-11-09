void exit_handler(void) {
  raise(SIGINT);   // Undefined Behavior
}

int main(void) {
  if (at_quick_exit(exit_handler) != 0) {
    // Handle Error
  }
  quick_exit(0);
  return 0;
}
