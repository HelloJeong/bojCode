#include<stdio.h>

int main() {
    int n, t, min = 1000001, max = 1, i;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        if(n < min) min = n;
        if(n > max) max = n;
    }

    printf("%d\n", min * max);
}
