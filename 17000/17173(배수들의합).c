#include <stdio.h>

int main() {
    int arr[1001] = { 0 };
    int n, m, k;
    int i, j, sum = 0, x;

    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &x);
        for(j = x; j <= n; j+=x)
            arr[j] = 1;
    }
    for(i = 1; i <= n; i++) {
        if(arr[i] == 1)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
