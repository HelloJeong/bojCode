#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    const int *m, *n;
    m = (int *)a;
    n = (int *)b;

    if (*m < *n)        return -1;
    else if (*m == *n)  return 0;
    else                return 1;
}

int main() {
    int n, i;
    int *arr = NULL;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*(n));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), comp);

    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
