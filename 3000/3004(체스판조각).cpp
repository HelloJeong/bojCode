#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int cnt = 2;
    int result = 2;

    cin >> n;
    for(int i = 2; i <= n; i++) {
        result += cnt;
        if(i % 2 == 1) cnt++;
    }
    cout << result << "\n";
    return 0;
}
