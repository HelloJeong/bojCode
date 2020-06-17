#include <stdio.h>

int memo[1001][1001];

int f(int n, int k) {
    if(n == k || k == 0) return 1;
    if(memo[n][k] > 0) return memo[n][k];

    memo[n][k] = f(n-1,k-1) + f(n-1, k);
    return memo[n][k] % 10007;
}


int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);

    printf("%d\n", f(n, k));
    return 0;
}
