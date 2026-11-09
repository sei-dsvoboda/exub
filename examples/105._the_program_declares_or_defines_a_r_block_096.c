// Identifiers that begin with _ are reserved at file scope.
static const unsigned int _max_limit = 1024; // Undefined Behavior
unsigned int _limit = 100; // Undefined Behavior
struct _data; // Undefined Behavior

/* Identifiers that begin with __ or _ followed by an uppercase letter
   are reserved for any use. */
unsigned int getValue(unsigned int __count) { // Undefined Behavior
  static unsigned int _CallCount; // Undefined Behavior
  _CallCount++;
  return __count < _limit ? __count : _limit;
}
