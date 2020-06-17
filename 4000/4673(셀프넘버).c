#include <stdio.h>

#define MAXSIZE 10001

int arr[MAXSIZE] = { 0 };

int getDn(int n) {
    int dn = n;
    while(n > 0) {
        dn += n % 10;
        n /= 10;
    }
    return dn;
}

int main() {
    int i;

    for(i = 1; i < MAXSIZE; i++) {
        int dn = getDn(i);
        if(dn <= MAXSIZE-1)
            arr[dn] = 1;
    }
    for(i = 1; i < MAXSIZE; i++) {
        if( !arr[i] )
            printf("%d\n", i);
    }

    return 0;
}
