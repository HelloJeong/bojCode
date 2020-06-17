#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int inNum[3001] = { 0 };
    int absNum[3001] = { 0 };
    char str[3001];
    int i, n;
    int diff;

    while(scanf("%d", &n) == 1) {
        scanf("%d", &inNum[1]);
        memset(absNum, 0, sizeof(absNum));
        for(i = 2; i <= n; i++) {
            scanf("%d", &inNum[i]);
            diff = abs(inNum[i] - inNum[i-1]);
            if(diff >= n || diff <= 0 || absNum[diff]) break;
            else absNum[diff] = 1;
        }
        gets(str);
        if(i > n) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
