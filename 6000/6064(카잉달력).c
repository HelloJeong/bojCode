#include <stdio.h>

int main() {
    int m, n, x, y, t;
    int i, j, run;
    int result;

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d %d %d %d", &m, &n, &x, &y);

        run = m * n;

        result = -1;
        for(j = x; j <= run; j += m){
            if( (j - 1) % n + 1 == y){
                result = j;
                break;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
