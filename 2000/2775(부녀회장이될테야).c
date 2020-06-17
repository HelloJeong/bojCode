#include <stdio.h>

int getSum(int arr[14][15], int f, int k) {
    int sum = 0, i;
    for(i = 1; i <= k; i++) 
        sum += arr[f][i];
    return sum;
}

int main() {
    int arr[15][15] = { 0 };
    int i, j, t, k, n;
    for(i = 1; i < 15; i++) {
        arr[i-1][1] = 1;
        arr[14][i] = i;
    }

    for(i = 13; i >= 0; i--) {
        for(j = 2; j < 15; j++) {
            arr[i][j] = getSum(arr, i+1, j);
        }
    }

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", arr[14-k][n]);
    }
    
    return 0;
}
