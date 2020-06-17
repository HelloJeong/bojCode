#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[101];
    int arr[26] = { 0 };
    int i = 0;
    scanf("%s", str);

    while(str[i] != '\0') {
        int index = str[i] - 'a';
        arr[index]++;
        i++;
    }

    for(i = 0; i < 26; i++)
        printf("%d ", arr[i]);
    printf("\n");


    return 0;
}
