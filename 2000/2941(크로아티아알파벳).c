#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define PLUS(a, b)  a++; \
                    b++;

int main() {
    char str[101] = { 0 };
    int i, j, cnt = 0;

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++) {
        if(str[i] == 'c') {
            if(str[i+1] == '=' || str[i+1] == '-') {
                PLUS(i, cnt);
                continue;
            }
        }
        else if(str[i] == 'd') {
            if(str[i+1] == '-') {
                PLUS(i, cnt);
                continue;
            }
            if(str[i+1] == 'z' && str[i+2] == '=') {
                i+=2;
                cnt++;
                continue;
            }
        }
        else if(str[i] == 'l') {
            if(str[i+1] == 'j') {
                PLUS(i, cnt);
                continue;
            }
        }
        else if(str[i] == 'n') {
            if(str[i+1] == 'j') {
                PLUS(i, cnt);
                continue;
            }
        }
        else if(str[i] == 's') {
            if(str[i+1] == '=') {
                PLUS(i, cnt);
                continue;
            }
        }
        else if(str[i] == 'z') {
            if(str[i+1] == '=') {
                PLUS(i, cnt);
                continue;
            }
        }
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
