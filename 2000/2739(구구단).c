#include <stdio.h>

int main() {
    int dan, i;
    scanf("%d", &dan);
    for(i = 1; i < 10; i++)
        printf("%d * %d = %d\n", dan, i, dan*i);
    return 0;
}
