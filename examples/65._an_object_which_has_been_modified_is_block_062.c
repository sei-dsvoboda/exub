// This is the same function signature as memcpy()
void *my_memcpy(void * restrict s1, const void * restrict s2, size_t n) {
  memcpy( s1, s2, n);
}

void abcabc(void) {
  char c_str[]= "abc123edf";
  char *ptr1 = c_str;
  char *ptr2 = c_str + strlen("abc");
  my_memcpy(ptr2, ptr1, 6);   // Undefined Behavior, objects of ptr1 & ptr2 overlap
  puts(c_str);
}
