#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int arr[501][501];
int dp[501][501];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    dp[1][1] = arr[1][1];
    
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
        }
    }
    int m = dp[n][1];
    for(int i = 2; i <= n; i++) {
        m = max(m, dp[n][i]);
    }
    printf("%d\n", m);
    return 0;
}
