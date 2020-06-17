#include <bits/stdc++.h>

using namespace std;
// 2 4 8 , 2 8 4, ...
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int x;
    for(int i = 0; i < 3; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int diff = v[1] - v[0];
    if(v[1] + diff == v[2]) {
        cout << v[2] + diff << "\n";
    } else {
        diff = v[2] - v[1];
        if(diff > v[1] - v[0]) {
            cout << v[1] + (v[1]-v[0]) << "\n";
        }
        else {
            cout << v[1] - diff << "\n";
        }
    }
    return 0;
}
