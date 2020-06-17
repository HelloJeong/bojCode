#include <stdio.h>

void init(unsigned int *c1, unsigned int *c2, unsigned int *s, unsigned int *m) {
    *c1 = 4;
    *c2 = 6;
    *s = 2;
    *m = 3;
}

int main() {
    unsigned int T, i, a, b, cnt1, cnt2, s, min, sub;
    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        sub = b - a;
        init(&cnt1, &cnt2, &s, &min);
        if( sub <= 2 ) {
            printf("%d\n", sub);
            continue;
        }
        while(1) {
            if( sub <= cnt1 ) break;
            else if( sub <= cnt2 ) {
                min++;
                break;
            }
            else {
                s++;
                cnt1 = cnt2 + s;
                cnt2 = cnt2 + (s * 2);
                min += 2;
            }
        }
        printf("%d\n", min);
    }

    return 0;
}
