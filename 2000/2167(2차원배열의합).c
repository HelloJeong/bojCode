#include <stdio.h>
#include <string.h>

int main(void){
    // int arr[301][301] = { 0 };
    int dp[301][301] = { 0 };
    int n, m, x1, y1, x2, y2;
    int i, j, k;

    scanf("%d %d", &n, &m);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            int x;
            scanf("%d", &x);
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + x;
        }
    }

    scanf("%d", &k);

    for(i = 0; i < k; i++) {
        int result;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        result = dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1];
        printf("%d\n", result);
    }


    return 0;
}
