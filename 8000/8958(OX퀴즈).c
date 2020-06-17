#include <stdio.h>
#include <string.h>

int main() {
    char str[81] = { 0 };
    int score[80] = { 0 };
    int n, i, j, result = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        memset(str, 0, sizeof(str));
        memset(score, 0, sizeof(score));
        scanf("%s", str);
        result = 0;
        for(j = 0; j < strlen(str); j++) {
            if(str[j] == 'O') {
                score[j]++;
                if(j > 0 && str[j-1] == 'O')
                    score[j] = score[j-1]+1;
            }
            result += score[j];
        }
        printf("%d\n", result);
    }

    return 0;
}
