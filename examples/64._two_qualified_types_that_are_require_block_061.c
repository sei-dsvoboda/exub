const struct s { int mem; } cs = { 1 };
typedef int A[2][3];
const A a = {{4, 5, 6}, {7, 8, 9}}; // array of array of const int
int *pi;
const int *pci;
pi = &cs.mem;  // Undefined Behavior: violates type constraints for =
pci = &cs.mem; // valid
pi = a[0];     // Undefined Behavior: a[0] has type "const int *"
