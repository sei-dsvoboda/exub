int i = 1, j = 2;
const int *cp = &i; // *cp is constant
int *ncp = &j;      // *ncp is modifiable
ncp = cp;           // valid
cp = ncp;           // Undefined Behavior: violates modifiable lvalue constraint for =
