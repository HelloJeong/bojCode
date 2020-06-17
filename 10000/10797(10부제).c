#include <stdio.h>

int main() {
    int d, x, i, cnt = 0;

    scanf("%d", &d);
    for(i = 0; i < 5; i++) {
        scanf("%d", &x);
        if(x == d) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
