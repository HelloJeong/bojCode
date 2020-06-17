#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[1001] = { 0 };
    int dp[1001] = { 0 };
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
    }
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(dp[i] == -1 || dp[i] > dp[i-j]+arr[j])
            dp[i] = dp[i-j]+arr[j];
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
