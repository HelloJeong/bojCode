#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int n, m;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cin >> m;
    while(m--) {
        int x;
        cin >> x;
        bool search = binary_search(v.begin(), v.end(), x);
        cout << (search ? 1 : 0) << " ";
    }
    cout << "\n";
    return 0;
}
