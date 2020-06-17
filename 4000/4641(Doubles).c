#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[15], idx = 0;

int comp(const void *a, const void *b) {
    int *ta = (int *)a;
    int *tb = (int *)b;
    if(*ta > *tb) return 1;
    else return -1;
}

void getFind() {
    int find = 0;
    int i, j;
    qsort(arr, idx, sizeof(int), comp);
    for(i = 0; i < idx; i++) {
        for(j = 1; j < idx; j++) {
            if(arr[i] * 2 == arr[j]) {
                find++;
                break;
            }
        }
    }
    printf("%d\n", find);
    idx = 0;
}

int main() {
    int x;
    while(1) {
        scanf("%d", &x);
        if(x == -1) break;
        else if(x == 0) getFind();
        else arr[idx++] = x;
    }
    return 0;
}
