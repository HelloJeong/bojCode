#include <bits/stdc++.h>

using namespace std;

int a[100001][2] = {0};
int d[100001][3] = {0};

// d[i][0] : 뜯지 않는 경우
// d[i][1] : 위를 뜯는 경우
// d[i][2] : 아래를 뜯는 경우
int getMax(int n)
{
  for (int i = 1; i <= n; i++)
  {
    d[i][0] = max(max(d[i - 1][0], d[i - 1][1]), d[i - 1][2]);
    d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
    d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
  }
  return max(max(d[n][0], d[n][1]), d[n][2]);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        cin >> a[j][i];
      }
    }

    cout << getMax(n) << '\n';
  }
  return 0;
}