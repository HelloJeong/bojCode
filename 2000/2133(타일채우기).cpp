#include <bits/stdc++.h>

using namespace std;

int d[31] = {1, 0, 3};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 3; i <= n; i++)
  {
    d[i] = d[i - 2] * 3;
    for (int j = 4; j <= i; j += 2)
    {
      d[i] += d[i - j] * 2;
    }
  }

  cout << d[n] << '\n';

  return 0;
}