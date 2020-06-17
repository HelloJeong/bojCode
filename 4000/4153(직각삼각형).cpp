#include <bits/stdc++.h>

using namespace std;

int main() {
    while(true) {
        vector<int> arr;
        for(int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        if(arr[0] == 0) break;
        double result = sqrt((double)(arr[0]*arr[0]) + (double)(arr[1]*arr[1]));
        if(result - (double)arr[2] == 0) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
    }

    return 0;
}
