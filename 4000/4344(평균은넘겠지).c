#include <stdio.h>
#include <stdlib.h>

int getCheck(int *arr, int size, double avg){
    int cnt = 0;
    int i;
    for(i = 0; i < size; i++){
        if(*(arr+i) > avg)
            cnt++;
    }
    return cnt;
}

double getAvg(int *arr, int size){
    double sum = 0;
    int i;
    for(i = 0; i < size; i++)
        sum += *(arr+i);
    return sum / size;
}

int main(){
    int c;
    const int MAX_SIZE = 1000;
    int n;
    int *arr = (int *)malloc(sizeof(int));
    int i, j;
    scanf("%d", &c);
    for(i = 0; i < c; i++){
        double avg;
        int chk;
        scanf("%d", &n);
        arr = (int *)realloc(arr, sizeof(int) * n);
        for(j = 0; j < n; j++)
            scanf("%d", &arr[j]);
        chk = getCheck(arr, n, getAvg(arr, n));
        printf("%.3lf%%\n", ((double)chk / n) * 100);
    }

    return 0;
}
