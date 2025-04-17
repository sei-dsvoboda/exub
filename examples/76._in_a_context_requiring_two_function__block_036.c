void fi(int* a) { (*a)++;}
void fl(long* a) { (*a)++;}

int repeat(void f(), int* a) {
  f(a);
  f(a);
  f(a);
}

int main () {
  int x = 1;
  repeat(fi, &x); // Undefined Behavior
  return 0;
}
