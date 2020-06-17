#include <stdio.h>

int main(void) {
    int i, j;
    for(i = 0; i < 3; i++) {
        char str[9] = { 0 };
        int cnt = 1;
        int max = 0;
        scanf("%s", str);
        for(j = 1; j < 9; j++) {
            if(str[j] == str[j-1])
                cnt++;
            else {
                if(cnt > max)
                    max = cnt;
                cnt = 1;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
