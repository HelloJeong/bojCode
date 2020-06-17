#include<stdio.h>

int memo[45] = {1,1,};

int fibonacci(int n) {
    if ( n <= 1) return memo[n];
    else if(memo[n] > 0) return memo[n];
    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main () {
    int T, i; //testCase
    int temp;
    scanf("%d",&T);
    fibonacci(45);

    for(i = 0 ; i < T ;i++) {
        scanf("%d", &temp);

        if (temp == 0) printf("1 0\n");
        else if(temp == 1) printf("0 1\n");
        else printf("%d %d\n", memo[temp-2], memo[temp-1]);
    }

    return 0;
}
