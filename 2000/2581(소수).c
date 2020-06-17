#include <stdio.h>

int main() {
    int m, n, i, j, in = 0, sum = 0, min = -1;

    scanf("%d %d", &m, &n);

    if(m == 1) m++;

    for(i = m; i <= n; i++) {
        for(j = 2; j <= i / 2; j++) {
            if( i % j == 0 ) break;
        }
        if( j > i / 2 ) {
            if(min == -1)
                min = i;
            sum += i;
        }
    }
    if(min == -1)   printf("-1\n");
    else            printf("%d\n%d\n", sum, min);

    return 0;
}
