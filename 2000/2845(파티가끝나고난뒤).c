#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int l, p, x, m;
    int i;
    scanf("%d %d", &l, &p);
    m = l * p;
    for(i = 0; i < 5; i++) {
        scanf("%d", &x);
        printf("%d ", x - m);
    }
    return 0;
}
