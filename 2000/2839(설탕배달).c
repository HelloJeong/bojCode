#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    if(n == 4 || n == 7)
        k = -1;
    else if(n % 5 == 0)
        k = n / 5;
    else if(n % 5 == 1 || n % 5 == 3)
        k = n / 5 + 1;
    else 
        k = n / 5 + 2;

    printf("%d\n", k);

    return 0;
}
