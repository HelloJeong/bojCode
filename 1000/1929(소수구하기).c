#include <stdio.h>
#include <math.h>

int main() {
    int m, n, i, j;

    scanf("%d %d", &m, &n);

    if(m == 1) m++;

    for(i = m; i <= n; i++) {
        for(j = 2; j <= sqrt((double)i); j++) {
            if( i % j == 0 ) break;
        }
        if( j > sqrt((double)i) ) {
            printf("%d\n", i);
        }
    }

    return 0;
}
