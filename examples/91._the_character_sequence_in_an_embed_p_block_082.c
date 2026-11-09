// Embed a text file and manually append a null-terminator
const char message[] = {
#embed "123message.txt"    // Undefined Behavior
, '\0'
};
