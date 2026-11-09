void func(void) {
  if (sizeof(int) == sizeof(float)) {
    float f = 0.0f;
    int *ip = (int *)&f;
    printf("float is %f\n", f);
    (*ip)++; // Undefined Behavior
    printf("float is %f\n", f);
  }
}
