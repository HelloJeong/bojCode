#include <bits/stdc++.h>
#define MAX_SIZE 2000002
#define BASE_NUMBER 1000000

using namespace std;

bool number[MAX_SIZE];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        number[BASE_NUMBER+x] = true;
    }

    for(int i = MAX_SIZE-1; i >= 0; i--) {
        if(number[i]) {
            cout << (i - BASE_NUMBER) << "\n";
        }
    }
    
    return 0;
}
