double double_double(double x) {
  return x * 2;
}

auto (*fn)(double x) = double_double; // Undefined Behavior
