#include <stdio.h>

int f(int n) {
    if(n == 1 || n == 0) return 1;
    return n * f(n-1);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", f(n) / (f(k) * f(n-k)));
    return 0;
}
