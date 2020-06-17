#include <stdio.h>
#include <math.h>

int main() {
    int arr[10000] = { 0 };
    int arrLength  = 0;
    int t, x, i, j, k, xPrime, xA, xB;

    for(i = 2; i <= 10000; i++) {
        for(j = 2; j <= sqrt((double)i); j++) {
            if(i % j == 0) break;
        }
        if(j > sqrt((double)i)) arr[arrLength++] = i;
    }

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &x);
        for(j = arrLength-1; j >= 0; j--) {
            if(arr[j] <= x) {
                xPrime = j;
                break;
            }
        }

        for(j = xPrime; j >= 0; j--) {
            for(k = 0; k <= j; k++) {
                if(arr[j] + arr[k] == x) {
                    xA = arr[k];
                    xB = arr[j];
                }
            }
        }
        printf("%d %d\n", xA, xB);
    }

    return 0;
}
