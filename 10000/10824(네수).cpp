#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str1 = "";
    string str2 = "";
    for(int i = 0; i < 4; i++) {
        string tmp;
        cin >> tmp;
        if(i < 2) str1 += tmp;
        else str2 += tmp;
    }
    cout << stoll(str1) + stoll(str2) << "\n";
    return 0;
}
