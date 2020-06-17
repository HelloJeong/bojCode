#include <stdio.h>

int main() {
    int x, i;
    long long int dp[1001] = { 0, 1, 3 };

    scanf("%d", &x);

    for(i = 3; i <= x; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-2];
        dp[i] %= 10007;
    }

    printf("%lld\n", dp[x]);

    return 0;
}
