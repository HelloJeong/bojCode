#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b) {
    const char *m, *n;
    m = (char *)a;
    n = (char *)b;

    if (strlen(m) == strlen(n)) {
        if(strcmp(m, n) == 0) return 0;
        else if(strcmp(m, n) > 0) return 1;
        else return -1;
    }
    else if (strlen(m) > strlen(n)) return 1;
    else                            return -1;
}

int main() {
    int n, i;
    char str[20000][51] = { 0 };
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
        scanf("%s", str[i]);

    qsort(str, n, sizeof(str[i]), comp);

    printf("%s\n", str[0]);
    for (i = 1; i < n; i++) {
        if(strcmp(str[i-1], str[i]) == 0)
            continue;
        printf("%s\n", str[i]);
    }

    return 0;
}
