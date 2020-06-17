#include <stdio.h>

int gcd(int a, int b) {
    if( b == 0 ) return a;
    gcd(b, a % b);
}

int main() {
    int a, b, t;

    scanf("%d %d", &a, &b);

    if(a > b) {
        t = a;
        a = b;
        b = t;
    }

    printf("%d\n", gcd(a, b));
    printf("%d\n", a * b / gcd(a, b));

    return 0;
}
