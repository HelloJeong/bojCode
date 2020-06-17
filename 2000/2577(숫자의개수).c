#include <stdio.h>

int main() {
    int a, b, c, result, i;
    int arr[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c;

    while(result != 0) {
        arr[result%10]++;
        result /= 10;
    }

    for(i = 0; i < 10; i++)
        printf("%d\n", arr[i]);

    return 0;
}
