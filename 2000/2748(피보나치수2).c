#include<stdio.h>

long long memo[100] = {1,1,};

int fibonacci(int n) {
    if ( n <= 1) return memo[n];
    else if(memo[n] > 0) return memo[n];
    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main () {
    int T, i;

    scanf("%d",&T);
    
    for(i = 2; i <= T; i++)
        memo[i] = memo[i-1] + memo[i-2];

    printf("%lld\n", memo[i-2]);

    return 0;
}
