#include <stdio.h>
#include <wchar.h>

int main(void) {
  FILE* in = fopen("foo.txt", "r");

  wchar_t wide_line[80];
  fgetws(wide_line, sizeof(wchar_t) * sizeof(wide_line), in);
  // the stream is now oriented for wide characters
  wprintf(L"The first line is: %ls", wide_line);

  char line[80];
  fgets(line, sizeof(line), in);  // Undefined Behavior
  printf("The second line is: %s", line);

  return 0;
}
