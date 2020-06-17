#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> x, y;
    for(int i = 0; i < 3; i++) {
        int xx, yy;
        cin >> xx >> yy;
        x.push_back(xx);
        y.push_back(yy);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    if(x[0] == x[1]) {
        cout << x[2] << " ";
    }
    else {
        cout << x[0] << " ";
    }

    if(y[0] == y[1]) {
        cout << y[2] << "\n";
    }
    else {
        cout << y[0] << "\n";
    }

    return 0;
}
