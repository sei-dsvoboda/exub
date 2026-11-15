// Embed a text file and manually append a null-terminator
const char message[] = {
#embed "message.txt" limit(defined)
// Undefined Behavior
  '\0'
};
