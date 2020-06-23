#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[10005] = { 0 };
    char b[10005] = { 0 };
    char r[10005] = { 0 };
    int alen, blen, carry = 0, rlen;
    int i, j;

    scanf("%s %s", a, b);
    alen = strlen(a);
    blen = strlen(b);

    i = 1;
    rlen = 0;
    while(1) {
        int an, bn, result;
        an = bn = 0;

        if((alen - i) < 0 && (blen - i) < 0) {
            if(carry == 1) r[rlen++] = carry + '0';
            break;
        }

        if((alen - i) >= 0)
            an = a[alen-i] -'0';
        if((blen - i) >= 0)
            bn = b[blen-i] - '0';

        result = an + bn + carry;

        if(result >= 10)
            carry = 1;
        else
            carry = 0;

        result %= 10;

        r[rlen++] = result + '0';
        i++;
    }

    for(i = rlen - 1; i >= 0; i--)
        printf("%c", r[i]);
    printf("\n");

    return 0;
}
