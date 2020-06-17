#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < k - 1; j++) {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << ">\n";
    return 0;
}
