#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[v.size()-1] << endl;
    
    return 0;
}
