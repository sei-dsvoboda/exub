#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int *arr = NULL;
qsort(arr, 0, sizeof(int), compare);
