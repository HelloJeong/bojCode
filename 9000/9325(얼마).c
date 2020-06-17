#include <stdio.h>

int main() {
    int t, i, j, s, q, p, n;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &s);
        scanf("%d", &n);
        for(j = 0; j < n; j++) {
            scanf("%d %d", &q, &p);
            s += (q*p);
        }
        printf("%d\n", s);
    }

    return 0;
}
