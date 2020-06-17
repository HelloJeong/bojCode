#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int chk(int a, int b, int c, int d) {
    return 
        a*a*a == (b*b*b) + (c*c*c) + (d*d*d);
}

int main() {
    int a, b, c, d;
    for(a = 2; a <= 100; a++) {
        for(b = 2; b < a; b++) {
            for(c = b+1; c < a; c++) {
                for(d = c+1; d < a; d++) {
                    if(chk(a, b, c, d))
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                }
            }
        }
    }
    return 0;
}
