#include <bits/stdc++.h>

using namespace std;

bool members[31];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        members[x] = true;
    }

    for(int i = 1; i <= 30; i++) {
        if(!members[i]) cout << i << "\n";
    }

    return 0;
}
