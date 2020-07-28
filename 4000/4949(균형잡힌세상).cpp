#include <bits/stdc++.h>

using namespace std;

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  while (true)
  {
    stack<char> s;
    char str[101];
    gets(str);
    if (str[0] == '.')
    {
      break;
    }

    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++)
    {
      if (str[i] == '(' || str[i] == '[')
      {
        s.push(str[i]);
      }
      else if (str[i] == ')')
      {
        if (s.empty())
        {
          break;
        }
        if (s.top() == '(')
        {
          s.pop();
        }
        else
        {
          break;
        }
      }
      else if (str[i] == ']')
      {
        if (s.empty())
        {
          break;
        }
        if (s.top() == '[')
        {
          s.pop();
        }
        else
        {
          break;
        }
      }
    }
    if (i == len && s.empty())
    {
      printf("yes\n");
    }
    else
    {
      printf("no\n");
    }
  }
  return 0;
}