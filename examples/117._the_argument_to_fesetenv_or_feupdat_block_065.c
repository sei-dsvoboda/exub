#pragma STDC FENV_ACCESS ON

fenv_t fenv;
fesetenv(&fenv);
// Undefined Behavior, fenv not initialized
