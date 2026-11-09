#define FOO 1

#define concat(uc1, uc2) uc1##uc2

#if concat(def, ined) FOO
// Undefined Behavior
