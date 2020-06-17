#include <stdio.h>
#include <string.h>

#define MAXLENGTH 101

int main() {
    int n, i, j, cnt = 0;
    char str[MAXLENGTH];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int arr[26] = { 0 };
        memset(str, 0, sizeof(MAXLENGTH));
        scanf("%s", str);
        arr[ str[0]-'a' ]++;
        for(j = 1; j < strlen(str); j++) {
            arr[ str[j]-'a' ]++;
            if(arr[str[j]-'a'] >= 2 && str[j] != str[j-1])
                break;
        }
        if(j == strlen(str))
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
