#include <stdio.h>

int main() {
    int N;
    int i, arr[10] = { 0 }, min = 0;
    scanf("%d", &N);
    if(N == 0) {
        printf("1\n");
        return 0;
    }

    while(N != 0) {
        arr[N % 10]++;
        N /= 10;
    }

    arr[6] += arr[9];

    if((arr[6] / 2.0) - (arr[6] / 2) == 0.5)
        arr[6] = arr[6] / 2 + 1;
    else
        arr[6] = arr[6] / 2;

    for(i = 1; i < 9; i++) {
        if( arr[min] < arr[i] )
            min = i;
    }
    printf("%d\n", arr[min]);
    return 0;
}
