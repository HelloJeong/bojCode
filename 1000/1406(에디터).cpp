#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    stack<char> left, right;
    int t;
    cin >> str;
    for(char c : str) {
        left.push(c);
    }

    cin >> t;
    while(t--) {
        char oper;
        cin >> oper;
        cin.ignore();
        switch(oper) {
            case 'L':
                if(!left.empty()) {
                    right.push(left.top());
                    left.pop();
                }
                break;
            case 'D':
                if(!right.empty()) {
                    left.push(right.top());
                    right.pop();
                }
                break;
            case 'B':
                if(!left.empty()) {
                    left.pop();
                }
                break;
            case 'P':
                char c;
                cin >> c;
                left.push(c);
                break;
        }
    }

    while(!left.empty()) {
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()) {
        cout << right.top();
        right.pop();
    }
    cout << "\n";

    return 0;
}
