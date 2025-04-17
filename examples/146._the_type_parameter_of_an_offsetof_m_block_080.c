int plus(int a, int b) {
  return a+b;
}

typedef int binary_f(int, int);
binary_f *add = plus;

typedef struct st {
  int num1;
  int num2;
} binary_s;

size_t z = offsetof( int (*)(int, int), num2);
