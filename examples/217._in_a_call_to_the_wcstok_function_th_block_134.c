#include <wchar.h>
#include <stdio.h>

wchar_t input[20] = L"foo bar baz";
wchar_t* buffer;
wchar_t* token = wcstok(input, L" ", &buffer);
while (token) {
  wprintf(L"%ls\n", token);
  wcscpy(buffer, input);             // buffer changed
  token = wcstok(0, L" ", &buffer);  // Undefined Behavior
}
