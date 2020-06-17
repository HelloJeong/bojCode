#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main() {
    int arr[2][4] = { 0 };
    int x, y, g;
    int i;

    for(i = 0; i < 4; i++)
        scanf("%d", &arr[0][i]);
    
    arr[1][0] = arr[0][0] * arr[0][3];
    arr[1][1] = arr[0][1] * arr[0][3];
    arr[1][2] = arr[0][2] * arr[0][1];
    arr[1][3] = arr[0][3] * arr[0][1];

    y = arr[1][0] + arr[1][2];
    x = arr[1][1];

    g = gcd(x, y);
    printf("%d %d\n", y/g, x/g);

    return 0;
}
