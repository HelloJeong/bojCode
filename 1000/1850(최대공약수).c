#include <stdio.h>
typedef long long ll;

ll gcd(ll a, ll b) {
    if( b == 0 ) return a;
    gcd(b, a % b);
}
int main() {
    ll a, b, cnt, i;

    scanf("%lld %lld", &a, &b);
    
    cnt = gcd(a, b);

    for(i = 0; i < cnt; i++)
        printf("1");
    printf("\n");

    return 0;
}
