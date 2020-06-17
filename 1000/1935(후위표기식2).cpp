#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int arr[26] = { 0 };
    string str;
    stack<double> s;
    cin >> n >> str;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < str.length(); i++) {
        double a, b;
        if(str[i] == '+') {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push(a+b);
        }
        else if(str[i] == '-') {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push(b-a);
        }
        else if(str[i] == '*') {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push(a*b);
        }
        else if(str[i] == '/') {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push(b/a);
        }
        else {
            s.push(arr[str[i]-'A']);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top() << "\n";

    return 0;
}
