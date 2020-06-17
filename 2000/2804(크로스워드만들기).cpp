#include <bits/stdc++.h>

using namespace std;

bool CAMB[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int crossX, crossY;
    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {
        for(int j = 0; j < b.length(); j++) {
            if(a[i] == b[j]) {
                crossX = i;
                crossY = j;
                i = 99;
                break;
            }
        }
    }

    for(int i = 0; i < b.length(); i++) {
        if(i == crossY) {
            cout << a << "\n";
            continue;
        }
        for(int j = 0; j < a.length(); j++) {
            if(j == crossX) {
                cout << b[i];
            }
            else {
                cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}
