#include <stdio.h>

int main() {
    int n, i, c = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if(x == 0) c++;
    }

    if(n / 2 < c) printf("Junhee is not cute!\n");
    else printf("Junhee is cute!\n");

    return 0;
}
