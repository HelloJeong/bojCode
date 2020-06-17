#include <bits/stdc++.h>

using namespace std;

typedef struct Point {
    int x;
    int y;
} Point;

bool comp(const Point &a, const Point &b) {
    if(a.x == b.x) {
        return a.y < b.y ? true : false;
    }
    return a.x < b.x ? true : false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<Point> v;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << "\n";
    }
    
    return 0;
}
