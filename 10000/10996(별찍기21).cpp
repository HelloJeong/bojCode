#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1) {
        cout << "*\n";
        return 0;
    }

    for(int i = 1; i <= n*2; i++) {
        if(i % 2 == 1) {
            for(int j = 1; j <= n; j++) {
                if(j % 2 == 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        else {
            for(int j = 1; j <= n; j++) {
                if(j % 2 == 0)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
