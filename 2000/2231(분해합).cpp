#include <bits/stdc++.h>

using namespace std;

int solve(int x) {
    int sum = x;
    while(x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    int result = 0;
    cin >> n;
    for(int i = 1; i<= n; i++) {
        int tmp = solve(i);
        if(tmp == n) {
            result = i;
            break;
        }
    }
    cout << result << endl;

    return 0;
}
