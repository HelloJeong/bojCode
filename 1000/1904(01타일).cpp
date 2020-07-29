#include <bits/stdc++.h>

using namespace std;

int d[1000001] = {0, 1, 2, 3, 5};
int mod = 15746;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  for (int i = 5; i <= n; i++)
  {
    d[i] = d[i - 1] + d[i - 2];
    d[i] %= mod;
  }

  cout << d[n] % mod << '\n';

  return 0;
}