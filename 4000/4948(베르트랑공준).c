#include <stdio.h>
#include <math.h>

int main() {
    int m, m2, i, j, cnt;

    while(1) {
        scanf("%d", &m);
        if(m == 0) break;

        m2 = m * 2;

        cnt = 0;
        for(i = m+1; i <= m2; i++) {
            for(j = 2; j <= sqrt((double)i); j++) {
                if( i % j == 0 ) break;
            }
            if( j > sqrt((double)i) ) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
