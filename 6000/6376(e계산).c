#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double f[10] = { 1, 1 };

int main() {
    int i, j;
    double result;
    for(i = 2; i < 10; i++)
        f[i] = f[i-1] * i;
    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n1 2\n2 2.5\n");
    for(i = 3; i < 10; i++) {
        result = 0;
        for(j = 0; j <= i; j++)
            result += (1/f[j]);
        printf("%d %.9lf\n", i, result);
    }
    return 0;
}
