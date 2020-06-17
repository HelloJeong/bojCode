#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, p;
    int p1, p2;
    cin >> a >> b >> c >> d >> p;

    p1 = p * a;
    p2 = p <= c ? b : b + (d * (p-c));

    cout << min(p1, p2) << "\n";

    return 0;
}
