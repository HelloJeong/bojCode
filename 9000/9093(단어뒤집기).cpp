#include <bits/stdc++.h>

using namespace std;

void print(stack<char> &s) {
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        stack<char> s;
        string str;
        getline(cin, str);
        str += '\n';
        for(char ch : str) {
            if(ch == ' ' || ch == '\n') {
                print(s);
                cout << ch;
            }
            else {
                s.push(ch);
            }
        }
    }

    return 0;
}
