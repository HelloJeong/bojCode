#include <stdio.h>

int dp[1001], num[1001];

int main()
{
    int n, max = 0;
    int i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int tmpMax = 0;
        scanf("%d",&num[i]);

        for (j = 1; j < i; j++) {
            if (num[j] < num[i]) {
                if (dp[j] > tmpMax) 
                    tmpMax = dp[j];
            }
        }
        dp[i] = tmpMax + 1;
        if (dp[i] > max)
            max = dp[i];
    }

    printf("%d\n", max);

    return 0;
}
