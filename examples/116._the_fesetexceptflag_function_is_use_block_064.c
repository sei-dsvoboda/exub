#pragma STDC FENV_ACCESS ON

fexcept_t excepts;
fesetexceptflag(&excepts,FE_ALL_EXCEPT);
// Undefined Behavior, excepts not set by fegetexceptflag
