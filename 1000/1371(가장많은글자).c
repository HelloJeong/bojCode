#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char ch;
    int arr[26] = { 0 };
    int maxCount = 0;
    int i;
    while(scanf("%c", &ch) == 1) {
        if(ch == ' ' || ch == '\n') continue;
        arr[ch-'a']++;
    }
    for(i = 0; i < 26; i++) {
        if(arr[i] > maxCount)
            maxCount = arr[i];
    }
    for(i = 0; i < 26; i++) {
        if(maxCount == arr[i])
            printf("%c", i+'a');
    }
    printf("\n");
    return 0;
}
