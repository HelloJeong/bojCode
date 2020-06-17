#include <stdio.h>

int main() {
    int arr[100000] = { 0 };
    char str[200000] = { 0 };
    int t, n, i, j, in = 0, stTop = 0, outTop = 0;

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        if(n > t) {
            printf("NO\n");
            return 0;
        }

        if(in < n) {
            for(j = in; j < n; j++) {
                arr[stTop++] = ++in;
                str[outTop++] = '+';
            }
        }

        if(n == arr[stTop-1]) {
            arr[--stTop] = 0;
            str[outTop++] = '-';
        }
        else {
            printf("NO\n");
            return 0;
        }
    }

    for(i = 0; i < outTop; i++)
        printf("%c\n", str[i]);

    return 0;
}
