int i = 1;
int* pi = &i;
nullptr_t n = nullptr;
memcpy(&n, pi, sizeof(n));
pi = n; // Undefined Behavior
