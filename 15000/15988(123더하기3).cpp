#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll d[1000001] = {0, 1, 2, 4};
ll mod = 1000000009;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 4; i <= 1000000; i++)
  {
    d[i] = d[i - 1] + d[i - 2] + d[i - 3];
    d[i] %= mod;
  }

  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << d[n] << "\n";
  }
  return 0;
}
