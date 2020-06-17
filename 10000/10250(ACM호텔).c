#include <stdio.h>

int main() {
    int h, w, n, ho, no, t, i;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        ho = 1;
        while(h < n) {
            ho++;
            n -= h;
        }
        no = h * 100 + ho;
        n = (n == 0)? 0 : h - n;
        while(n > 0) {
            n--;
            no -= 100;
        }
        printf("%d\n", no);
    }
    return 0;
}
