#include <stdio.h>
#include <math.h>

int main() {
    int t, i, v, e;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d %d", &v, &e);
        printf("%d\n", abs(v-e-2));
    }
    return 0;
}
