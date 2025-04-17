#define my_join(a, b) a ## b
char q[] = my_join(!, !);
// Ill-formed
