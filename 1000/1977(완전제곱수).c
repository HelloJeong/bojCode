#include <stdio.h>

int main() {
    int m, n, i, sum = 0, min = -1;
    scanf("%d %d", &m, &n);

    for(i = 1; i*i <= n; i++) {
        if( i*i >= m ) {
            sum += i*i;
            if( min == -1 )
                min = i * i;
        }
    }


    if(sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);

    return 0;
}
