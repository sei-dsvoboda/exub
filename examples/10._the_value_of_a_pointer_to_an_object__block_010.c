const char *p;
void dont_do_this(void) {
  const char c_str[] = "This will change";
  p = c_str; // Undefined Behavior if p subsequently read
}

void innocuous(void) {
  const char c_str[] = "Surprise, surprise";
  puts(c_str);
}

int main(void) {
  dont_do_this();
  innocuous();
  puts(p);  // On some platforms, this will print "Surprise, surprise"
  return EXIT_SUCCESS;
}
