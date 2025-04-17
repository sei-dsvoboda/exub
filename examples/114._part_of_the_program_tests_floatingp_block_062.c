#pragma STDC FENV_ACCESS OFF

int set_excepts;
feclearexcept(FE_INVALID);
set_excepts = fetestexcept(FE_INVALID); // Undefined Behavior
if (set_excepts & FE_INVALID) {
  puts("INVALID");
}
