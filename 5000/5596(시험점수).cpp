#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s[2] = { 0 };
    for(int i = 0; i < 2; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        s[i] = a + b + c + d;
    }
    cout << max(s[0], s[1]) << "\n";
    return 0;
}
