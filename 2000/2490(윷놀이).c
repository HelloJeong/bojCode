#include <stdio.h>

int main() {
    int x, cnt;
    int i, j;

    for(i = 0; i < 3; i++) {
        cnt = 0;
        for(j = 0; j < 4; j++) {
            scanf("%d", &x);
            if(x == 0) cnt++;
        }
        switch(cnt) {
        case 0:
            printf("E\n");
            break;
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        case 4:
            printf("D\n");
            break;
        }
    }

    return 0;
}
