#include <bits/stdc++.h>

using namespace std;

void print(stack<char> &s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    bool tag = false;
    stack<char> s;
    string str;
    getline(cin, str);
    str += '\n';
    for (char ch : str)
    {
        if (ch == '<' || ch == '>')
        {
            if(!s.empty()) {
                print(s);
            }
            tag = tag ? false : true;
            cout << ch;
        }
        else if (tag)
        {
            cout << ch;
        }
        else if (ch == ' ' || ch == '\n')
        {
            print(s);
            cout << ch;
        }
        else
        {
            s.push(ch);
        }
    }

    return 0;
}
