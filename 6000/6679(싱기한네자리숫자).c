#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int x, i;
    int a, b, c;
    for(i = 1000; i < 10000; i++) {
        a = b = c = 0;
        x = i;
        while(x > 0) {
            a += x % 10;
            x /= 10;
        }
        x = i;
        while(x > 0) {
            b += x % 12;
            x /= 12;
        }
        x = i;
        while(x > 0) {
            c += x % 16;
            x /= 16;
        }
        if(a == b && b == c)
            printf("%d\n", i);
    }
    return 0;
}
