#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    vector<string> v;
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        v.push_back(str+i);
    }
    sort(v.begin(), v.end());
    int size = v.size();
    for(int i = 0; i < size; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}
