#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getX1(char *str) {
    int i = 0, x = 0;
    while(str[i] != '\0') {
        x += str[i] - '0';
        i++;
    }
    return x;
}

int getX2(int x) {
    int result = 0;
    while(x > 0) {
        result += x % 10;
        x /= 10;
    }
    return result;
}

int main() {
    char str[1001] = { 0 };
    int x;

    while(1) {
        scanf("%s", str);
        if(str[0] == '0') break;
        x = getX1(str);
        while(x >= 10) x = getX2(x);
        printf("%d\n", x);
    }
}
