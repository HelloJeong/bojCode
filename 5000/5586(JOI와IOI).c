#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[10001] = { 0 };
    int i, len;
    int joi, ioi;
    joi = ioi = 0;

    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        if(str[i] == 'J' && str[i+1] == 'O' && str[i+2] == 'I')
            joi++;
        else if(str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I')
            ioi++;
    }
    printf("%d\n%d\n", joi, ioi);
    return 0;
}
