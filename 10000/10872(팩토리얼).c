#include <stdio.h>

int main() {
    int i, n, f = 1;
    
    scanf("%d", &n);
    
    for(i = 2; i <= n; i++)
        f *= i;
    
    printf("%d\n", f);
    return 0;
}
