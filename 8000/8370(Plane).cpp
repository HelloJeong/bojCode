#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 2;
    int s = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        s += a*b;
    }
    cout << s << "\n";
    return 0;
}
