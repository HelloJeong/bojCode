#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i, j, index, len1, len2;
    char str[1000001] = { 0 };
    char boom[37] = { 0 };
    char res[1000001] = { 0 };

    index = 0;
    scanf("%s", str);
    scanf("%s", boom);

    len1 = strlen(str);
    len2 = strlen(boom);

    for(i = 0; i < len1; i++) {
        if(str[i] != boom[len2-1])
            res[index++] = str[i];
        else {
            for(j = 0; j <= len2-2; j++) {
                if(boom[j] != res[index-len2+1+j])
                    break;
            }
            if(j > len2-2) {
                for(j = 1; j < len2; j++)
                    res[index-j] = '\0';
                index -= len2-1;
            }
            else
                res[index++] = str[i];
        }
    }
    if(res[0] == '\0')
        printf("FRULA\n");
    else
        printf("%s\n", res);
    return 0;
}
