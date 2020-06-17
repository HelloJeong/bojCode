#include <stdio.h>

int dp[1001][3];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int r, g, b;
    int i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d %d %d", &r, &g, &b);

        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + r;
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + g;
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + b;
    }

    printf("%d\n", min(dp[n][0], min(dp[n][1], dp[n][2])));
    return 0;
}
