#include <stdio.h>

int main() {
    int n, run = 1;
    int a = 1, b = 1, s = 1, max = 1; // 분자, 분모, 더해지는 값, 규칙의 최댓값
    scanf("%d", &n);

    if(n == 1) {
        printf("1/1\n");
        return 0;
    }

    while(run) {
        if( n > max ) {
            s++;
            max += s;
            if(s % 2 == 1) {
                b = a + 1;
                a = 1;
            }
            else {
                a = b + 1;
                b = 1;
            }
            continue;
        }
        while(1) {
            if(n == max) {
                run = 0;
                break;
            }
            max--;
            if( s % 2 == 0 ) {
                a--;
                b++;
            }
            else {
                a++;
                b--;
            }
        }
    }

    printf("%d/%d\n", a, b);

    return 0;
}
