#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];
int d[1001][1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= m; i++) {
		d[1][i] = d[1][i-1] + a[1][i];
	}
	for(int i = 1; i <= n; i++) {
		d[i][1] = d[i-1][1] + a[i][1];
	}
	for(int i = 2; i <= n; i++) {
		for(int j = 2; j <= m; j++) {
			d[i][j] = max(max(d[i-1][j], d[i-1][j-1]), d[i][j-1]) + a[i][j];
		}
	}


	cout << d[n][m] << '\n';

	return 0;
}