#include <wctype.h>

int main(void) {
  int flag = iswalpha(WINT_MIN);
  // Undefined Behavior if sizeof(wchar_t) < sizeof(wint_t)
