#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll d[1001][10];
ll mod = 10007;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < 10; i++)
  {
    d[1][i] = 1LL;
  }
  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      for (int k = 0; k <= j; k++)
      {
        d[i][j] += d[i - 1][k];
      }
      d[i][j] %= mod;
    }
  }
  ll ans = 0;
  for (int i = 0; i < 10; i++)
  {
    ans += d[n][i];
  }
  cout << ans % mod << "\n";
  return 0;
}
