#include <stdio.h>
#include <math.h>

int main() {
    int n, k, t, i, j;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        int cnt = 0;
        scanf("%d %d", &n, &k);
        for(j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            cnt += x / k;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
