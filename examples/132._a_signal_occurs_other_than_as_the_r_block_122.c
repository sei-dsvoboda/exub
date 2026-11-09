#define MAX_MSG_SIZE 24
char *err_msg;

void handler(int signum) {
  if ((strcpy(err_msg, "SIGINT detected.")) == err_msg){ // Undefined Behavior
    // ...
  }
}

int main(void) {
  signal(SIGINT, handler);

  err_msg = malloc(MAX_MSG_SIZE);
  if (err_msg == NULL) {
    /// Handle Error
  }
  if ((strcpy(err_msg, "No errors yet.")) == err_msg) {
    // ...
  }

  // Main code loop ...

  return EXIT_SUCCESS;
}
