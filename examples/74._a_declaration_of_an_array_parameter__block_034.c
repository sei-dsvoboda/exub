const int size = 5;

int average(int numbers[static size]) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }
  return sum / size;
}

int main(void) {
  int a[3] = { 4, 1002, 27 };
  int result = average(a); // Undefined Behavior, array too small
  printf("Average is %d\n", result);
}
