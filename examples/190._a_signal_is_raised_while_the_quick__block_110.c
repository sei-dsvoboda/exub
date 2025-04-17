void exit_handler(void) {
  raise(SIGINT); // Undefined Behavior
}

int main(void) {
  if (atexit(exit_handler) != 0) {
    /* Handle error */
  }
  quick_exit(0);
  return 0;
}
