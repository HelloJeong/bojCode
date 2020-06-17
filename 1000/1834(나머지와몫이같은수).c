#include <stdio.h>

int main() {
    long long int n, i, sum = 0;
    scanf("%lld", &n);
    
    for(i = 1; i < n; i++)
        sum += n * i + i;

    printf("%lld\n", sum);
    return 0;
}
