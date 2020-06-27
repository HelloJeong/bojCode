#include <bits/stdc++.h>

using namespace std;

int a[1001], d[1001];
int v[1001] = { -1, };

void go(int p)
{
	if (v[p] == -1)
		return;

	go(v[p]);
	cout << a[p] << " ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		d[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + 1)
			{
				d[i] = d[j] + 1;
				v[i] = j;
			}
		}
	}
	int ans = 1;
	for (int i = 2; i <= n; i++)
	{
		if (d[ans] < d[i])
		{
			ans = i;
		}
	}
	cout << d[ans] << "\n";
	go(ans);
	cout << "\n";

	return 0;
}
