#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  for (int x = -999; x <= 999; x++)
  {
    for (int y = -999; y <= 999; y++)
    {
      int r1 = a * x + b * y;
      int r2 = d * x + e * y;
      if (c == r1 && f == r2)
      {
        cout << x << ' ' << y << '\n';
        return 0;
      }
    }
  }

  return 0;
}