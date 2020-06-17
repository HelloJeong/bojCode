#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
    int idx;
} user;

int comp(const void *a, const void *b) {
    user *ua = (user*) a;
    user *ub = (user*) b;
    if(ua->age < ub->age) return -1;
    else if(ua->age > ub->age) return 1;
    else {
        if(ua->idx > ub->idx) return 1;
        else if(ua->idx < ub->idx) return -1;
        else return 0;
    }
}

int main() {
    int n, i;
    user *u;
    scanf("%d", &n);
    u = (user *)malloc(sizeof(user) * n);
    for(i = 0; i < n; i++) {
        scanf("%d %s", &(u+i)->age, (u+i)->name);
        (u+i)->idx = i;
    }
    qsort(u, n, sizeof(user), comp);
    for(i = 0; i < n; i++) 
        printf("%d %s\n", (u+i)->age, (u+i)->name);

    return 0;
}
