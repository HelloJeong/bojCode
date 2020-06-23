#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000000];
    int n, b, c;
    long long cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &b, &c);
    for(int i = 0; i < n; i++) {
        arr[i] -= b;
        cnt++;
        if(arr[i] > 0) {
            cnt += (arr[i] % c == 0) ? (arr[i] / c) : (arr[i] / c + 1);
        }
    }

    printf("%lld\n", cnt);

    return 0;
}
