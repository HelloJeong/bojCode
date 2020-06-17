#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[101];
    int i = 0;
    scanf("%s", str);

    while(str[i] != '\0') {
        i++;
    }
    printf("%d\n", i);

    return 0;
}
