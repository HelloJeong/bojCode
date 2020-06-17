#include <stdio.h>
#include <math.h>
/*nC4*/
int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", (n * (n - 1) * (n - 2) * (n - 3)) / 24);

    return 0;
}
