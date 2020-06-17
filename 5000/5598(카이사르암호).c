#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1001] = { 0 };
    int i, len;

    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        str[i] -= 3;
        if(str[i] < 'A') str[i] += 26;
    }
    printf("%s\n", str);
    return 0;
}
