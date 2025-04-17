// In file1.c:
alignas(16) int a;

// In file2.c:
alignas(32) int a; // Undefined Behavior
