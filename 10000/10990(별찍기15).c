#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    if(n == 1) {
        printf("*\n");
        return 0;
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++)
            printf(" ");
        if(i)
            printf("*");
        for(j = 0; j < 2 * i - 1; j++)
            printf(" ");
        printf("*\n");
    }


    return 0;
}
