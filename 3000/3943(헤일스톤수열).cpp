#include <bits/stdc++.h>

using namespace std;

int d[100001] = {0, 1, 2, 16};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 4; i <= 100000; i++)
  {
    int m, index;
    m = index = i;
    while (index > 1)
    {
      if (index % 2 == 0)
      {
        index /= 2;
      }
      else
      {
        index = index * 3 + 1;
      }
      if (index > m)
      {
        m = index;
      }
    }

    d[i] = m;
    if (m <= 100000)
    {
      d[m] = m;
    }
  }

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << d[n] << '\n';
  }

  return 0;
}