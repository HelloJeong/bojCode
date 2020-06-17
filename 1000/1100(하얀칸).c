#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[9] = { 0 };
    int i, j, cnt = 0;
    for(i = 1; i <= 8; i++) {
        scanf("%s", str);
        if(i % 2 == 1) {
            for(j = 0; j < 8; j+=2) {
                if(str[j] == 'F')
                    cnt++;
            }
        }
        else {
            for(j = 1; j < 8; j+=2) {
                if(str[j] == 'F')
                    cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

