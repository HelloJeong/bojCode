#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<int> q;
    int t;
    cin >> t;
    while(t--) {
        string command;
        cin >> command;
        cin.ignore();
        if(command == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if(command == "pop") {
            if(!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else {
                cout << "-1\n";
            }
        }
        else if(command == "size") {
            cout << q.size() << "\n";
        }
        else if(command == "empty") {
            cout << (q.empty() ? "1\n" : "0\n");
        }
        else if(command == "front") {
            if(!q.empty()) {
                cout << q.front() << "\n";
            }
            else {
                cout << "-1\n";
            }
        }
        else if(command == "back") {
            if(!q.empty()) {
                cout << q.back() << "\n";
            }
            else {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
