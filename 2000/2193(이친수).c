#include <stdio.h>
#include <math.h>

typedef long long int ll;
int main() {
    ll arr[91] = { 0, 1, 1 };
    int i, n;

    scanf("%d", &n);

    for(i = 3; i <= n; i++)
        arr[i] = arr[i-1] + arr[i-2];

    printf("%lld\n", arr[n]);
    return 0;
}
