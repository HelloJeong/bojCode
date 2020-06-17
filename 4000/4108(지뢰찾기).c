#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void find(char str[][102], int x, int y) {
    int cnt = 0, i, j;
    for(i = -1; i <= 1; i++) {
        for(j = -1; j <= 1; j++) {
            if(str[x+i][y+j] == '*')
                cnt++;
        }
    }
    str[x][y] = cnt + '0';
}

int main() {
    char str[102][102] = { 0 };
    int r, c, i, j;
    while(1) {
        int ch;
        scanf("%d %d", &r, &c);
        memset(str, 0, sizeof(char) * 102 * 102);
        if(r == 0 && c == 0) break;
        for(i = 1; i <= r; i++) {
            for(j = 1; j <= c; j++) {
                scanf(" %c", &str[i][j]);
            }
        }
        for(i = 1; i <= r; i++) {
            for(j = 1; j <= c; j++) {
                if(str[i][j] == '.')
                    find(str, i, j);
            }
        }
        for(i = 1; i <= r; i++) {
            for(j = 1; j <= c; j++)
                printf("%c", str[i][j]);
            printf("\n");
        }
    }

    return 0;
}
