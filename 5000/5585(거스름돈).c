#include <stdio.h>
#include <math.h>

int main() {
    int n, i, k = 0;
    scanf("%d", &n);

    n = 1000 - n;
    k = n / 500;
    n = n % 500;
    k += n / 100;
    n = n % 100;
    k += n / 50;
    n = n % 50;
    k += n / 10;
    n = n % 10;
    k += n / 5;
    n = n % 5;
    k += n;

    printf("%d\n", k);

    return 0;
}
