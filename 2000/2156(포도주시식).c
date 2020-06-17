#include <stdio.h>

int getMax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int arr[10001] = { 0 };
    int dp[10001] = { 0 };
    int n, i;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];
    for(i = 3; i <= n; i++)
        dp[i] = getMax(getMax(dp[i-1], dp[i-2]+arr[i]), dp[i-3] + arr[i-1] + arr[i]);

    printf("%d\n", dp[n]);
    return 0;
}
