#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[100001] = { 0 };
    int i, t, k, index = 1, sum = 0;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &arr[index]);
        if(arr[index] == 0) {
            arr[index-1] = 0;
            index--;
        }
        else
            index++;
    }
    for(i = 1; i <= index; i++)
        sum += arr[i];

    printf("%d\n", sum);
    return 0;
}
