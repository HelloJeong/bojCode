#include <bits/stdc++.h>

using namespace std;

int x, y, w, h;

int solve() {
    int width = (w - x) < x ? w - x : x;
    int height = (h - y) < y ? h - y : y;

    return width < height ? width : height;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x >> y >> w >> h;

    cout << solve() << "\n";

    return 0;
}
