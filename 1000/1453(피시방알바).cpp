#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100] = { 0 };
    int member, cnt = 0;
    cin >> member;
    for(int i = 0; i < member; i++) {
        int x;
        cin >> x;
        if(arr[x-1] == 0)   arr[x-1] = 1;
        else    cnt++;
    }
    cout << cnt << endl;

    return 0;
}
