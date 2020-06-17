#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[51] = { 0 };
    int t, i, j;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%s", str);
        j = 0;
        while(str[j] != '\0') {
            str[j] = str[j] + 1;
            if(str[j] > 'Z') str[j] = 'A';
            j++;
        }

        printf("String #%d\n%s\n\n", i+1, str);
    }
    return 0;
}
