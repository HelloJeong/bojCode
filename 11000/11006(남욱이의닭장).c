#include <stdio.h>
#include <math.h>

int main() {
    int n, m, t, i;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        int right = 0;
        scanf("%d %d", &n, &m);
        right = n - m;
        printf("%d %d\n", m - right , right);
    }

    return 0;
}
