#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20] = { 0 };
    int i, sum = 0;
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++) {
        if(strchr("ABC", str[i])) sum+=3;
        else if(strchr("DEF", str[i])) sum+=4;
        else if(strchr("GHI", str[i])) sum+=5;
        else if(strchr("JKL", str[i])) sum+=6;
        else if(strchr("MNO", str[i])) sum+=7;
        else if(strchr("PQRS", str[i])) sum+=8;
        else if(strchr("TUV", str[i])) sum+=9;
        else if(strchr("WXYZ", str[i])) sum+=10;
    }
    printf("%d\n", sum);
    return 0;
}
