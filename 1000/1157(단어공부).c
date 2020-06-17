#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000001] = { 0 };
    int cnt[26] = { 0 };
    int max = 0, i, maxCount = 0, size = 0;

    scanf("%s", str);

    i = 0;
    while(str[i]) {
        size++;
        i++;
    }

    for(i = 0; i < size; i++) { 
        str[i] = toupper(str[i]);
        cnt[ str[i]-'A' ]++;
    }

    for(i = 1; i < 26; i++) {
        if(cnt[max] < cnt[i]) { 
            max = i;
            maxCount = 0;
        }
        else if(cnt[max] == cnt[i]) maxCount++;
    }

    if(maxCount == 0)
        printf("%c\n", max+'A');
    else
        printf("?\n");

    return 0;
}
