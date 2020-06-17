#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(const void *a, const void *b) {
    if( (int *)a < (int *)b ) return -1;
    else if( (int *)a > (int *)b ) return 1;
    else return 0;
}

int gcd(int a, int b) {
    if( b == 0 ) return a;
    return gcd(b, a % b);
}

int main() {
    int n, i, gap;
    int arr[101] = { 0 };

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), comp);

    gap = arr[1] - arr[0];
    for(i = 1; i < n - 1; i++)
        gap = gcd(gap, arr[i+1] - arr[i]);

    gap = abs(gap);

    for(i = 2; i <= gap / 2; i++) {
        if( gap % i == 0 )
            printf("%d ", i);
    }
    printf("%d\n", gap);

    return 0;
}
