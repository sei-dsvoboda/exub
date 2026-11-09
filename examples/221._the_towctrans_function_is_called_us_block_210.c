#include <wchar.h>
#include <wctype.h>
#include <locale.h>

wint_t f(wint_t wc) {
  wctype_t lower = wctrans("tolower");
  setlocale(LC_CTYPE, "C");     // state changed
  return towctrans(wc, lower);  // Undefined Behavior
}
