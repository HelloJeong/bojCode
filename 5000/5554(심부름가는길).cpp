#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a+b+c+d) / 60 << "\n" << (a+b+c+d) % 60 << "\n";
    return 0;
}
