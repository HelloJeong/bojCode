#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    int *m = (int *)a;
    int *n = (int *)b;

    if(*m > *n) return 1;
    else if(*m < *n) return -1;
    else return 0;
}

int main() {
    int *arr;
    int n, k, i;
    
    scanf("%d %d", &n, &k);

    arr = (int *)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int),comp);

    printf("%d\n", arr[k-1]);


    free(arr);
    return 0;
}
