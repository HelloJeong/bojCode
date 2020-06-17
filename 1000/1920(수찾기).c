#include <stdio.h>
#include <stdlib.h>

int BSearch(int arr[], int len, int target) {
    int low, high, mid;

    low = 0;
    high = len - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == target) return 1;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return 0;
}
int comp(const void *a, const void *b) {
    int *pa = (int *)a;
    int *pb = (int *)b;

    if(*pa < *pb) return -1;
    else if(*pa > *pb) return 1;
    else return 0;
}

int main() {
    int arr[100000] = { 0 };
    int i, n, m, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), comp);

    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &x);
        printf("%d\n", BSearch(arr, n, x));
    }
    
    return 0;
}
