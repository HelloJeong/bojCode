#include <stdio.h>
#include <math.h>

int main() {
    int a, b, n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}