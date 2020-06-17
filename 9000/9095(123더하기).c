#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int d[12] = { 0, 1, 2, 4 };
    int i, t, x;
    scanf("%d", &t);
    for(i = 4; i <= 11; i++)
        d[i] = d[i-1] + d[i-2] + d[i-3];
    for(i = 0; i < t; i++) {
        scanf("%d", &x);
        printf("%d\n", d[x]);
    }
}
