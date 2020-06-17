#include <stdio.h>

int main() {
    int x, y, i;
    int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char dayStr[][5] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int result = 0;

    scanf("%d %d", &x, &y);

    for(i = 0; i < x - 1; i++)
        result += day[i];

    result += y;

    printf("%s\n", dayStr[result % 7]);

    return 0;
}
