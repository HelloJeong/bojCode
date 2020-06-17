#include <stdio.h>

int main() {
    int n, cnt = 2, max = 7;
    scanf("%d", &n);

    if(n == 1) {
        printf("1\n");
        return 0;
    }

    while(n > max) {
        max += (6 * cnt);
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
