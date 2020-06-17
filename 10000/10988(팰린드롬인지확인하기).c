#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[101] = { 0 };
    int i, len;
    scanf("%s", str);
    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len-1-i])
            break;
    }
    if(i >= len / 2)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
