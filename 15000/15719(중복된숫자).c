#include <stdio.h>

int main() {
    int t;
    long long m = 0;
    int x;
    int i;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &x);
        m += x;
    }

    printf("%d\n", m - (((long long)t * ( t - 1 )) / 2LL));
    return 0;
}
