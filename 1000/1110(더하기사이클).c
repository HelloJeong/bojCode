#include <stdio.h>


int main() {
    int n, r, newNumber, a, b, cnt = 1;
    
    scanf("%d", &n);
    if(n < 10)
        b = r = n;
    else {
        a = n / 10;
        b = n % 10;
        r = a + b;
    }
    newNumber = (b*10) + r;

    while(n != newNumber) {
        a = b;
        b = r % 10;
        r = (a + b) % 10;
        newNumber = (b * 10) + r;
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
