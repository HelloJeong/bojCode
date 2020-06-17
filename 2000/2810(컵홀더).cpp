#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string str;
    int cnt = 1;
    cin >> n >> str;

    for(int i = 0; i < n; i++) {
        cnt++;
        if(str[i] == 'L') {
            i++;
        }
    }
    if(cnt > str.length()) {
        cout << str.length() << "\n";
    }
    else {
        cout << cnt << "\n";
    }
    return 0;
}
