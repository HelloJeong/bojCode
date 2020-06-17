#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    char oper;
    cin >> s1 >> oper >> s2;

    if(oper == '*') {
        int zero = (s1.length() - 1) + (s2.length() - 1);
        cout << "1";
        for(int i = 0; i < zero; i++) {
            cout << "0";
        }
        cout << "\n";
    }
    else {
        int zero;
        if(s1 == s2) {
            zero = s1.length() - 1;
            cout << "2";
            for(int i = 0; i < zero; i++) {
                cout << "0";
            }
            cout <<"\n";
        }
        else {
            if(s1.length() < s2.length()) {
                string tmp = s1;
                s1 = s2;
                s2 = tmp;
            }
            cout << "1";
            zero = (s1.length() - 1) - s2.length();
            for(int i = 0; i < zero; i++) {
                cout << "0";
            }
            cout << "1";
            zero = s2.length() - 1;
            for(int i = 0; i < zero; i++) {
                cout << "0";
            }
            cout << "\n";
        }
    }
    return 0;
}
