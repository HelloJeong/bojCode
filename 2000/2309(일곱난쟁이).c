#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    int *x = (int *) a;
    int *y = (int *) b;
    if(*x > *y) return 1;
    else if(*x < *y) return -1;
    else return 0;
}

int main(void) {
    int arr[9] = { 0 };
    int i, j, sum = 0;

    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    qsort(arr, 9, sizeof(int), comp);

    for(i = 0; i < 8; i++) {
        for(j = i + 1; j < 9; j++) {
            int t = arr[i]+arr[j];
            if(sum - t == 100) {
                arr[i] = arr[j] = -1;
                break;
            }
        }
        if(arr[i] == -1) break;
    }

    for(i = 0; i < 9; i++) {
        if(arr[i] == -1) continue;
        printf("%d\n", arr[i]);
    }

    return 0;
}
