#include <stdio.h>

typedef long long ll;

int main(void){
    ll numbers[1000001] = { 0 };
    ll prinum[10000] = { 0 };
    ll max, min;
    ll i, x;
    int count = 0;

    scanf("%lld %lld", &min, &max);

    for (i = 2; i*i <= max; i++){
        x = min / (i*i);
        if (min % (i*i) != 0)
            x++;
        while (x*(i*i) <= max){
            numbers[x*(i*i) - min] = 1;
            x++;
        }
    }
    for (i = 0; i <= max - min; i++){
        if (numbers[i] == 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
