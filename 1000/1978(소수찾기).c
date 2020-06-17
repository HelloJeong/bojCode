#include <stdio.h>

int main() {
    int n, i, j, k, x, cnt = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x == 1) continue;
        for(j = 2; j <= x / 2; j++) {
            if(x % j == 0) break;
        }
        if(j > x / 2) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
