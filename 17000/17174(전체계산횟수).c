#include <stdio.h>

int get(int n, int m) {
    if(n == 0) return 0;
    return n + get(n/m, m);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", get(n, m));
    return 0;
}

