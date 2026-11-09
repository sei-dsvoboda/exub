void func(unsigned int ui_a, unsigned int ui_b) {
  unsigned int uresult1 = ui_a << ui_b;
  // Undefined Behavior if ui_b >= UINT_WIDTH
  unsigned int uresult2 = ui_a << -1; // Undefined Behavior
}
