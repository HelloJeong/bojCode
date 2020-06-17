#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, a, b, c, d;
    int kor, math;
    cin >> l >> a >> b >> c >> d;

    if(a % c == 0) {
        kor = a / c;
    }
    else {
        kor = a / c + 1;
    }
    if(b % d == 0) {
        math = b / d;
    }
    else {
        math = b / d + 1;
    }
    cout << l - max(kor, math) << "\n";

    return 0;
}
