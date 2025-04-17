enum people {
  Tom=1.0,  // Undefined Behavior
  Dick=2,
  Harry=3
};

struct s {
  int bit:1;
  int two_bits:2.5; // Undefined Behavior
  int all_the_bits;
};
