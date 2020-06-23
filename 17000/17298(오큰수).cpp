#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1000001], ans[1000001];
    int idx = 1;
    int n;
    stack<int> s;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    s.push(1);
    for(int i = 2; i <= n; i++) {
        if(arr[s.top()] < arr[i]) {
            ans[s.top()] = arr[i];
            s.pop();
            if(!s.empty()) {
                i--;
                continue;
            }
        }
        s.push(i);
    }

    while(!s.empty()) {
        ans[s.top()] = -1;
        s.pop();
    }
    
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";


    return 0;
}
