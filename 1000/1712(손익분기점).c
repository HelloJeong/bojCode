#include <stdio.h>
typedef long long ll;

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(b >= c) {
        printf("-1\n");
        return 0;
    }
    printf("%lld\n", a / (c - b) + 1);

    return 0;
}
