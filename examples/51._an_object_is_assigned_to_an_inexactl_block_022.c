const size_t limit = sizeof(int) + 1;
char bytes[limit];
int *p1 = (int*) &(bytes[0]);
int *p2 = (int*) &(bytes[1]); // overlaps with p1 (unless sizeof(int) == 1)
*p1 = 123;
*p2 = *p1; // Undefined Behavior
