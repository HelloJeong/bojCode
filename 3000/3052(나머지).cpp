#include <bits/stdc++.h>

using namespace std;

bool freq[42];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        freq[x % 42] = true;
    }
    int cnt = 0;
    for(int i = 0; i < 42; i++) {
        cnt += freq[i] ? 1 : 0;
    }
    cout << cnt << endl;
    return 0;
}
