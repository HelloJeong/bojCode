#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    scanf("%d", &t);
    while(t--) {
        int cnt, sumC = 0;
        double sumG = 0;
        scanf("%d", &cnt);
        for(int i = 0; i < cnt; i++) {
            int c; double g;
            scanf("%d %lf", &c, &g);
            sumC += c;
            sumG += (c*g);
        }
        printf("%d %.1lf\n", sumC, sumG / sumC);
    }
    return 0;
}
