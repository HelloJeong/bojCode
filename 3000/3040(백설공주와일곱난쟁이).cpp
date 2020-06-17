#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    int sum = 0;
    int i, j;

    for(i = 0; i < 9; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    for(i = 0; i < 8; i++) {
        for(j = i + 1; j < 9; j++) {
            if(sum - (v[i] + v[j]) == 100) {
                v[i] = v[j] = -1;
                i = 99;
                break;
            }
        }
    }

    sort(v.begin(), v.end());

    for(i = 2; i < 9; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}
