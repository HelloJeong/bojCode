#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[26] = { 0 };
    int t;
    cin >> t;
    while(t--) {
        string name;
        cin >> name;
        arr[name[0] - 'a']++;
    }
    string str = "";
    for(int i = 0; i < 26; i++) {
        if(arr[i] >= 5) {
            str += (i +'a');
        }
    }
    if(str == "") {
        cout << "PREDAJA\n";
    }
    else {
        cout << str << "\n";
    }
    return 0;
}
