#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll d[100001][4] = {0};
ll mod = 1000000009LL;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i < 100001; i++)
  {
    if (i - 1 >= 0)
    {
      d[i][1] = (d[i - 1][2] + d[i - 1][3]) % mod;
      if (i == 1)
      {
        d[i][1] = 1;
      }
    }
    if (i - 2 >= 0)
    {
      d[i][2] = (d[i - 2][1] + d[i - 2][3]) % mod;
      if (i == 2)
      {
        d[i][2] = 1;
      }
    }
    if (i - 3 >= 0)
    {
      d[i][3] = (d[i - 3][1] + d[i - 3][2]) % mod;
      if (i == 3)
      {
        d[i][3] = 1;
      }
    }
  }
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    cout << (d[n][1] + d[n][2] + d[n][3]) % mod << "\n";
  }

  return 0;
}
