#include <stdlib.h>

int compare(const void *a, const void *b) {
    *(int *)a = *(int *)a + 1;  // Modify array contents!
    return (*(int *)a - *(int *)b);
}

int arr[] = {2, 1, 4, 1, 5, 9, 2, 6};
size_t n = sizeof(arr) / sizeof(arr[0]);
qsort(arr, n, sizeof(int), compare);
