#include <stdio.h>

int gcd(int a, int b) {
    if( b == 0 ) return a;
    gcd(b, a % b);
}

int main() {
    int t, a, b, c, i, j;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }
    return 0;
}
