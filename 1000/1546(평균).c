#include <stdio.h>

int main() {
    int arr[1000] = { 0 }, max = 0, n, i;
    double sum = 0;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if( arr[i] > max ) max = arr[i];
    }

    for(i = 0; i < n; i++)
        sum += (double)arr[i] / max * 100;

    printf("%.2f\n", sum / n);

    return 0;
}
