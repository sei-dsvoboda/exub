struct f { struct f *x; } *p;
void g(void) {
  (struct f)p;
}
