#include <stdio.h>

int getMax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int arr[301] = { 0 };
    int dp[301] = { 0 };
    int t, i;
    
    scanf("%d", &t);

    for(i = 1; i <= t; i++)
        scanf("%d", &arr[i]);

    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];

    for(i = 3; i <= t; i++)
        dp[i] = getMax(arr[i-1]+dp[i-3], dp[i-2]) + arr[i];

    printf("%d\n", dp[t]);

    return 0;
}
