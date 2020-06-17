#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[4], str2[4], str3[4];
    int a, b;
    int i;
    
    scanf("%s %s", str1, str2);

    for(i = 0; i < 3; i++)
        str3[i] = str1[2-i];
    a = atoi(str3);

    for(i = 0; i < 3; i++)
        str3[i] = str2[2-i];
    b = atoi(str3);

    printf("%d\n", (a > b)? a : b);
    return 0;
}
