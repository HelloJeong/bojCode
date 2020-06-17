#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> s;
    string str;
    cin >> str;
    int len = str.length();
    int result = 0;
    int cnt = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] == '(') {
            s.push(i);
            cnt++;
        }
        else {
            if(i - 1 == s.top()) {
                s.pop();
                result += s.size();
                cnt = 0;
            }
            else {
                s.pop();
                result++;
            }
        }
    }

    cout << result << "\n";
    return 0;
}
