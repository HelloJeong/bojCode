#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int E, S, M;
  cin >> E >> S >> M;
  int e, s, m;
  e = s = m = 1;
  for (int i = 1;; i++)
  {
    if (E == e && S == s && M == m)
    {
      cout << i << "\n";
      break;
    }
    e++;
    s++;
    m++;
    if (e == 16)
      e = 1;
    if (s == 29)
      s = 1;
    if (m == 20)
      m = 1;
  }

  return 0;
}