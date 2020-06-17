#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> members, result;
    int n, m;
    int size, cnt;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string name;
        cin >> name;
        members.push_back(name);
    }

    for(int i = 0; i < m; i++) {
        string name;
        cin >> name;
        members.push_back(name);
    }

    sort(members.begin(), members.end());

    size = members.size();
    cnt = 0;
    for(int i = 0; i < size-1; i++) {
        if(members[i] == members[i+1]) {
            cnt++;
            result.push_back(members[i]);
            i++;
        }
    }
    size = result.size();
    cout << cnt << "\n";
    for(int i = 0; i < size; i++) {
        cout << result[i] << "\n";
    }
    return 0;
}
