#include <stdio.h>

int main() {
    int i, n, sum = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &n);
        if(n < 40)  sum += 40;
        else        sum += n;
    }

    printf("%d\n", sum / 5);

    return 0;
}
