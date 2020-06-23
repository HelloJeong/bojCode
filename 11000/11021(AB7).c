#include <stdio.h>
#include <math.h>

int main() {
    int a, b, i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1, a + b);
    }
    return 0;
}
