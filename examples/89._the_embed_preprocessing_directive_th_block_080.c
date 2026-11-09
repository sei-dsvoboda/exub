// Embed a text file and manually append a null-terminator
const char message[] = {
#embed "message.txt" prefix(define pro 25) suffix(undef pro)
// Undefined Behavior
, '\0'
};
