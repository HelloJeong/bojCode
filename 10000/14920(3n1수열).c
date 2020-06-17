#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int n, cnt = 1;
    scanf("%d", &n);
    while(n != 1) {
        if(n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        cnt++;
    }
    printf("%d\n", cnt);
}

