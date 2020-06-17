#include <stdio.h>

int getMin(int a, int b) {
    return a > b? b : a;
}

int main() {
    int x, i;
    int dp[1000001] = { 0, 0, 1, 1 };
    int arr[3] = { 0 }; // /3, /2, -1

    scanf("%d", &x);

    for(i = 4; i <= x; i++) {
        arr[0] = arr[1] = arr[2] = 987654321;
        arr[2] = dp[i-1] + 1;
        if( i % 3 == 0 )
            arr[0] = dp[i/3] + 1;
        if( i % 2 == 0 )
            arr[1] = dp[i/2] + 1;
        dp[i] = getMin(arr[0], getMin(arr[1], arr[2]));
    }

    printf("%d\n", dp[x]);


    return 0;
}
