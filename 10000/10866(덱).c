#include <stdio.h>
#include <string.h>

int main() {
    int deq[10001] = { 0 };
    int i, j, n, x, last;
    char str[20];
    last = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", str);
        if( !strcmp(str, "push_front") ) {
            scanf("%d", &x);
            for(j = last; j > 0; j--)
                deq[j] = deq[j-1];
            last++;
            deq[0] = x;
        }
        else if( !strcmp(str, "push_back") ) {
            scanf("%d", &x);
            deq[last++] = x;
        }
        else if( !strcmp(str, "pop_front") ) {
            if(last == 0) printf("-1\n");
            else {
                printf("%d\n", deq[0]);
                for(j = 0; j < last - 1; j++)
                    deq[j] = deq[j+1];
                last--;
            }
        }
        else if( !strcmp(str, "pop_back") ) {
            if(last == 0) printf("-1\n");
            else {
                printf("%d\n", deq[last-1]);
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
            else printf("%d\n", deq[0]);
        }
        else if( !strcmp(str, "back") ) {
            if(last == 0) printf("-1\n");
            else printf("%d\n", deq[last-1]);
        }
    }

    return 0;
}
