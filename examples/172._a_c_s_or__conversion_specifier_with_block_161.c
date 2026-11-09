#include <stdio.h>
#include <locale.h>

setlocale(LC_ALL, "UTF-8");
// In UTF-8: the Euro symbol == '€' == U+20AC == \xE2 \x82 \xAC == \342 \202 \254
const char invalid[] = {'\xE2', '\0'};  // invalid UTF-8
wchar_t wc;
sscanf(invalid, "%lc", &wc);  // Undefined Behavior
