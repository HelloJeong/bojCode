#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    char str[50][51] = { 0 };
    int i, j, n, len;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    len = strlen(str[0]);
    for(i = 0; i < len; i++) {
        for(j = 0; j < n-1; j++) {
            if(str[j][i] != str[j+1][i]) {
                printf("?");
                break;
            }
        }
        if(j == n-1)
            printf("%c", str[0][i]);
    }
    printf("\n");
    return 0;
}
