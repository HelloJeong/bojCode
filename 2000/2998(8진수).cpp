#include <bits/stdc++.h>

using namespace std;

char check(string s)
{
  if (s == "000")
    return '0';
  else if (s == "001")
    return '1';
  else if (s == "010")
    return '2';
  else if (s == "011")
    return '3';
  else if (s == "100")
    return '4';
  else if (s == "101")
    return '5';
  else if (s == "110")
    return '6';
  else if (s == "111")
    return '7';
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string str;
  cin >> str;

  while (str.length() % 3 != 0)
  {
    str = '0' + str;
  }
  int len = str.length();
  for (int i = 0; i < len; i += 3)
  {
    string s = str.substr(i, 3);
    cout << check(s);
  }
  cout << '\n';

  return 0;
}