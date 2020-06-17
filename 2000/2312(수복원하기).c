#include <stdio.h>
#include <string.h>

int main(void){
    int arr[100001] = { 0 };
    int t, n, i, j, c;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        memset(arr, 0, sizeof(arr));
        c = 2;
        while(n > 1) {
            if(n % c == 0) {
                arr[c]++;
                n /= c;
            }
            else
                c++;
        }
        for(j = 2; j <= c; j++) {
            if(arr[j] == 0) continue;
            printf("%d %d\n", j, arr[j]);
        }
    }
    return 0;
}
