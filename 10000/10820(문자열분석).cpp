#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    while(1) {
        int cnt[4] = { 0 };
        if(getline(cin, str)) {
            int len = str.length();
            for(int i = 0; i < len; i++) {
                if(str[i] >= 'A' && str[i] <= 'Z') cnt[1]++;
                else if(str[i] >= 'a' && str[i] <= 'z') cnt[0]++;
                else if(str[i] >= '0' && str[i] <= '9') cnt[2]++;
                else cnt[3]++;
            }
            for(int i = 0; i < 4; i++) {
                cout << cnt[i] << " ";
            }
            cout << "\n";
        }
        else { break; }
    }
    return 0;
}
