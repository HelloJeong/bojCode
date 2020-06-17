#include <stdio.h>

int main() {
    int n, i, cnt = 99;
    scanf("%d", &n);

    if( n < 100 ) {
        printf("%d\n", n);
        return 0;
    }
    for(i = 100; i <= n; i++) {
        int a, b, c;
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if(b - a == c - b) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
