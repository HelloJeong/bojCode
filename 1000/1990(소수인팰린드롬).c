#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a, b, n, chk = 0;
    int i, j, size = 0;
    char str1[10] = { 0 };
    int arr[100000] = { 0 };

    scanf("%d %d", &a, &b);
    for(i = 2; i < 10000000; i++) {
        if(i < a) continue;
        if(i > b) break;
        memset(str1, 0, sizeof(str1));
        sprintf(str1, "%d", i);
        chk = 1;
        for(j = 0; j < strlen(str1)/2; j++) {
            if(str1[j] != str1[strlen(str1)-j-1]) {
                chk = 0;
                break;
            }
        }
        if( chk == 1 ) arr[size++] = i;
    }

    for(i = 0; i < size; i++) {
        int b = 1;
        for( j = 2; j <= (int)sqrt((double)arr[i]); j++) {
            if(arr[i] % j == 0) {
                b = 0;
                break;
            }
        }
        if(b == 1)
            printf("%d\n", arr[i]);
    }

    printf("-1\n");
    return 0;
}
