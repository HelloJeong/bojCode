#include <stdio.h>

int main() {
    int arr[1000];
    int i, j, n, size;

    scanf("%d", &n);

    size = 0;
    while(n > 0) {
        arr[size++] = n % 10;
        n = n / 10;
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] < arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for(i = 0; i < size; i++) 
        printf("%d", arr[i]);

    return 0;
}
