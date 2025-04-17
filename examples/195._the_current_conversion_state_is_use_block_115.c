#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <memory.h>
#include <locale.h>

char str[50];
wchar_t wstr[50];
memset(wstr, 0, sizeof(wstr));
int counter = 0;
setlocale(LC_CTYPE, "HYPO");                // Use hypothetical encoding
/* Suppose standard input contains the single line: ↑□X□Y↓ */
fgets(str, sizeof(str), stdin);             // str == "↑□X□Y↓"
counter += mbtowc(wstr, str, 4);            // wstr == "□X", upper state
setlocale(LC_CTYPE, "C");                   // state changed
counter += mbtowc(wstr, &str[counter], 4);  // Undefined Behavior
