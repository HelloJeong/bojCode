#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, h;
    cin >> n >> w >> h;
    while(n--) {
        int x;
        cin >> x;
        if(x <= w || x <= h || x * x <= w*w + h*h) {
            cout << "DA\n";
        }
        else {
            cout << "NE\n";
        }
    }
    return 0;
}
