#include <wchar.h>
#include <locale.h>

int f(wint_t wc) {
  wctype_t alpha = wctype("alpha");
  setlocale(LC_CTYPE, "C");     // state changed
  return iswctype(wc, alpha);   // Undefined Behavior
}
