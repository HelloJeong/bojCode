#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long int d[101] = {0, 1, 1, 1};

  for (int i = 4; i <= 100; i++)
  {
    d[i] = d[i - 3] + d[i - 2];
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