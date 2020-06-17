#include <stdio.h>

int gcd(long long int a, long long int b) {
    if( b == 0 ) return a;
    gcd(b, a % b);
}

int main() {
    long long int a, b;

    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a * b / gcd(a, b));

    return 0;
}
