#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 5;
    int s = 0;
    while(n--) {
        int x;
        cin >> x;
        s += x;
    }
    cout << s << "\n";
    return 0;
}
