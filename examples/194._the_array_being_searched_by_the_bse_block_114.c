int compare(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int arr[] = {2, 3, 5, 11, 7}; // Oops, mis-ordered array
int n = sizeof(arr)/sizeof(arr[0]);
int key = 7;
int *result = (int*)bsearch(&key, arr, n, sizeof(int), compare);
// Undefined Behavior
