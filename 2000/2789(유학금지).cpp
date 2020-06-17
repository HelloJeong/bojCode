#include <bits/stdc++.h>

using namespace std;

bool CAMB[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string camb = "CAMBRIDGE";
    string str;
    string result = "";

    for(int i = 0; i < camb.length(); i++) {
        CAMB[camb[i]-'0'] = true;
    }

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(CAMB[str[i]-'0']) continue;
        result += str[i];
    }
    
    cout << result << "\n";

    return 0;
}
