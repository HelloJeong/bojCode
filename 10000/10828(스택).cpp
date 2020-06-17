#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    string str;
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (str == "pop")
        {
            if (s.empty())
                cout << "-1\n";
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size")
        {
            cout << s.size() << "\n";
        }
        else if (str == "empty")
        {
            cout << s.empty() << "\n";
        }
        else
        {
            if (s.empty())
                cout << "-1\n";
            else
            {
                cout << s.top() << "\n";
            }
        }
    }
}
