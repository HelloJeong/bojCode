#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        for(int i = 0; i < 32; i++) {
            if( (x >> i) & 1 == 1) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
