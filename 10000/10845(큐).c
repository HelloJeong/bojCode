#include <stdio.h>
#include <string.h>

int main() {
    int que[10001] = { 0 };
    int i, j, n, x, last;
    char str[10];
    last = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", str);
        if( !strcmp(str, "push") ) {
            scanf("%d", &x);
            last++;
            que[last-1] = x;
        }
        else if( !strcmp(str, "pop") ) {
            if(last == 0)
                printf("-1\n");
            else {
                printf("%d\n", que[0]);
                for(j = 0; j < last - 1; j++)
                    que[j] = que[j+1];
                last--;
            }
        }
        else if( !strcmp(str, "size") ) {
            printf("%d\n", last);
        }
        else if( !strcmp(str, "empty") ) {
            if(last == 0) printf("1\n");
            else printf("0\n");
        }
        else if( !strcmp(str, "front") ) {
            if(last == 0) printf("-1\n");
            else printf("%d\n", que[0]);
        }
        else if( !strcmp(str, "back") ) {
            if(last == 0) printf("-1\n");
            else printf("%d\n", que[last-1]);
        }
    }

    return 0;
}
