#include <bits/stdc++.h>

using namespace std;

int arr[100001], dp[100001];

int main()
{
    int n, ans;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }   
    ans = dp[1] = arr[1];
    for(int i = 2; i <= n; i++) {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        if(ans < dp[i]) ans = dp[i];
    }

    printf("%d\n", ans);
}
