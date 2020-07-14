#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int e, s, m;
  cin >> e >> s >> m;
  e--;
  s--;
  m--;
  for (int i = 0;; i++)
  {
    if (i % 15 == e && i % 28 == s && i % 19 == m)
    {
      cout << i + 1 << "\n";
      break;
    }
  }

  return 0;
}