#include <stdio.h>

int main() {
    int sum = 0;
    int x, n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%1d", &x);
        sum += x;
    }
    printf("%d\n", sum);
}
