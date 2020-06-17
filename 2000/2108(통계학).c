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
    int n, i, sum = 0, median, max = -4001, min = 4001;
    int *arr = NULL;
    int freq[8001] = { 0 }, fmax;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*(n));

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        freq[ arr[i] + 4000 ]++;
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    qsort(arr, n, sizeof(int), comp);

    fmax = 0;

    for(i = 1; i < 8001; i++) {
        if(freq[i] > freq[fmax])
            fmax = i;
    }

    for(i = 0; i < 8001; i++) {
        if(fmax == i) continue;
        if(freq[i] == freq[fmax]) {
            fmax = i;
            break;
        }
    }

    median = arr[n / 2];

    printf("%.0f\n", (double)sum / n);
    printf("%d\n", median);
    printf("%d\n", fmax - 4000);
    printf("%d\n", max - min);

    free(arr);
    return 0;
}
