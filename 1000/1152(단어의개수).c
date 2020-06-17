#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001] = { 0 };
    char *p;
    int cnt=0;

    gets(str);

    p = strtok(str, " ");

    while(p != NULL) {
        p = strtok(NULL, " ");
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
