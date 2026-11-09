typedef struct st {
  int num1;
  int num2;
} binary_s;

size_t z = offsetof( binary_s, num3);   // Undefined Behavior, should be num2
