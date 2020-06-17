#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main() {
    int q[1000002];
    int n;
    int i;
    int qp = 1;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        q[i] = i;

    while(qp != n) {
        qp++;
        q[n+1] = q[qp];
        qp++;
        n++;
    }
    printf("%d\n", q[qp]);

    return 0;
}


