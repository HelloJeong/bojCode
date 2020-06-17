#include <stdio.h>
#include <math.h>

int main() {
    int arr[1001] = { 0 };
    int n, k, i, j;

    scanf("%d %d", &n, &k);

    for(i = 2; i <= n; i++) {
        for(j = i; j <= n; j+=i) {
            if(arr[j] == 1) continue;
            arr[j] = 1;
            k--;
            if(k == 0) {
                printf("%d\n", j);
                return 0;
            }
        }
    }

    return 0;
}
