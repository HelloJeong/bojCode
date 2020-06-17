#include <stdio.h>

int main() {
    int i, n, x;
    scanf("%d", &n);
    for(i = 1; i < 10; i++) {
        scanf("%d", &x);
        n -= x;
    }
    printf("%d\n", n);
    return 0;
}
