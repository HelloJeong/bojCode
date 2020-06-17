#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, z1;
    int x2, y2, z2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);

    printf("%d %d %d", abs(z1-x2), abs(y2/y1) ,abs(z2-x1));
    return 0;
}
