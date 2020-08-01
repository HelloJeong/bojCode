#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int coins[101] = {0};
  int d[10001] = {
      1,
  };
  int n, k;
  cin >> n >> k;

  for (int i = 1; i <= n; i++)
  {
    cin >> coins[i];
    for (int j = coins[i]; j <= k; j++)
    {
      d[j] += d[j - coins[i]];
    }
  }

  cout << d[k] << '\n';

  return 0;
}