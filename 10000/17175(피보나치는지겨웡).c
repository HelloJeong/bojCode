#include <stdio.h>
#define MOD 1000000007
int dp[51] = { 1, 1, 3, 5 };

int main() {
    int n, i;
    scanf("%d", &n);

    for(i = 4; i <= n; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % MOD + 1; // 자신 호출하는 것까지

    printf("%d\n", dp[n]);

    return 0;
}
