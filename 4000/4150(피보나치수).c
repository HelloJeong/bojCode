#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void reverse(char c[]) {
    int len = strlen(c), l = 0;
    char s[1005] = { 0 };
    int i;
    for(i = len - 1; i >= 0; i--)
        s[l++] = c[i];
    strcpy(c, s);
}

void hap(char a[], char b[], char c[]) {
    int alen, blen, carry = 0, rlen;
    int i;
    
    alen = strlen(a);
    blen = strlen(b);

    i = 1;
    rlen = 0;
    while(1) {
        int an, bn, result;
        an = bn = 0;

        if((alen - i) < 0 && (blen - i) < 0) {
            if(carry == 1) c[rlen++] = carry + '0';
            break;
        }

        if((alen - i) >= 0)
            an = a[alen-i] -'0';
        if((blen - i) >= 0)
            bn = b[blen-i] - '0';

        result = an + bn + carry;

        carry = (result >= 10) ? 1 : 0;

        result %= 10;

        c[rlen++] = result + '0';
        i++;
    }
}

int main() {
    char a[1005] = { '1' };
    char b[1005] = { '1' };
    char c[1005] = { 0 };
    int i, n;

    scanf("%d", &n);

    if(n <= 2) {
        printf("1\n");
        return 0;
    }

    for(i = 3; i <= n; i++) {
        memset(c, 0, sizeof(c));
        hap(a, b, c);
        reverse(c);
        strcpy(a, b);
        strcpy(b, c);
    }
    printf("%s\n", c);

    return 0;
}
