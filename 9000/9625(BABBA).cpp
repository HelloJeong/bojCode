#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int fibo[46] = { 0, 1 };
    int k;

    cin >> k;

    for(int i = 2; i <= k; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    cout << fibo[k-1] << " " << fibo[k] << "\n";

    return 0;
}
