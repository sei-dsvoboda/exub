extern int x;

x = 3; // Undefined Behavior if x is never defined
printf("x is %d!\n", x);
