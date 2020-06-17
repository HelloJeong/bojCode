#include <stdio.h>
#include <string.h>

int main() {
    int t, re, i, j, k;
    char str[21];
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d %s", &re, str);
        for(j = 0; j < strlen(str); j++) {
            for(k = 0; k < re; k++)
                printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
